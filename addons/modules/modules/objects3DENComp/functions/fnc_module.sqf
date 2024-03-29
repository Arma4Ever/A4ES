#include "script_component.hpp"
/*
 * Author: SzwedzikPL
 * objects3DENComp module function
 */

params ["_mode", "_input"];
TRACE_2(QUOTE(EXEC_MODULE_NAME),_mode,_input);

if (
  (_mode isEqualTo "attributesChanged3DEN") ||
  {_mode isEqualTo "registeredToWorld3DEN"}
) exitWith {
  _input params ["_logic"];

  private _mode = (_logic get3DENAttribute QGVAR(mode)) # 0;
  private _dataSaved = (_logic get3DENAttribute QGVAR(dataSaved)) # 0;
  private _previewObjects = (_logic getVariable [QGVAR(previewObjects), [false]]) # 0;

  if ((_mode isEqualTo 0) && _dataSaved) exitWith {
    _logic call FUNC(objects3DENComp_restoreData);
    //0 call FUNC(objects3DENComp_saveLocalObjectsData);
  };
  if ((_mode isEqualTo 0) && _previewObjects) exitWith {
    _logic call FUNC(objects3DENComp_cleanPreview);
  };
  if ((_mode isEqualTo 1) && !_dataSaved) exitWith {
    _logic call FUNC(objects3DENComp_saveData);
    //0 call FUNC(objects3DENComp_saveLocalObjectsData);
  };
  if ((_mode isEqualTo 1) && _dataSaved && !_previewObjects) exitWith {
    _logic call FUNC(objects3DENComp_spawnPreview);
  };
};

if (_mode isEqualTo "unregisteredFromWorld3DEN") exitWith {
  _input params ["_logic"];
  _logic call FUNC(objects3DENComp_cleanPreview);
  //0 call FUNC(objects3DENComp_saveLocalObjectsData);
};

// Exit if module executed inside editor, not on server or not in init mode
if (is3DEN || !(isServer) || (_mode isNotEqualTo "init")) exitWith {};
_input params [
  ["_logic", objNull, [objNull]],
  ["_isActivated", false, [true]],
  ["_isCuratorPlaced", false, [true]]
];
// Exit if module is null or placed by zeus (should not happen)
if (isNull _logic || _isCuratorPlaced || !_isActivated) exitWith {};

LOG('Starting init of EXEC_MODULE_NAME.');

if (is3DENPreview) then {
  [_logic, true] call EFUNC(debug,updateModuleStatus);
};

private _spawnLocally = _logic getVariable [QGVAR(spawnLocally), false];
if (_spawnLocally) exitWith {
  TRACE_1("objects3DENComp_module abort: module spawns objects locally",_spawnLocally);
  deleteVehicle _logic;
};

private _mode = _logic getVariable [QGVAR(mode), 0];
if (_mode isNotEqualTo 1) exitWith {
  TRACE_1("objects3DENComp_module abort: module not in read mode",_mode);
  deleteVehicle _logic;
};

private _dataSaved = _logic getVariable [QGVAR(dataSaved), false];
if !(_dataSaved) exitWith {
  TRACE_1("objects3DENComp_moduleE abort: data not saved",_dataSaved);
  deleteVehicle _logic;
};

private _data = parseSimpleArray (_logic getVariable [QGVAR(data), "[]"]);
if (_data isEqualTo []) exitWith {
  TRACE_1("objects3DENComp_module abort: empty data",_data);
  deleteVehicle _logic;
};

private _objectPostInit = {};
if (_logic getVariable [QGVAR(addObjectPostInit), false]) then {
  _objectPostInit = compile (_logic getVariable [QGVAR(objectPostInit), ""]);
};

private _spawnAsSuperSimple = _logic getVariable [QGVAR(spawnAsSuperSimple), true];

// Add objects to list for spawn
GVAR(3DENCompObjects) pushBack [_data, _objectPostInit, _spawnAsSuperSimple];

// Delete module
deleteVehicle _logic;

LOG('Init of EXEC_MODULE_NAME finished - executed.');
