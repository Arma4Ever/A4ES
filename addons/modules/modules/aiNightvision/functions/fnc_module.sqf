#include "script_component.hpp"
/*
 * Author: SzwedzikPL
 * aiNightvision module function
 */

params ["_mode", "_input"];
TRACE_2(QUOTE(EXEC_MODULE_NAME),_mode,_input);

// Exit if module executed inside editor, not on server or not in init mode
if (is3DEN || !(isServer) || (_mode isNotEqualTo "init")) exitWith {};
_input params [
  ["_logic", objNull, [objNull]],
  ["_isActivated", false, [true]],
  ["_isCuratorPlaced", false, [true]]
];
// Exit if module is null or placed by zeus (should not happen)
if (isNull _logic || _isCuratorPlaced) exitWith {};

LOG('Starting execution of EXEC_MODULE_NAME.');

if (is3DENPreview) then {
  [_logic, true] call EFUNC(debug,updateModuleStatus);
};

// Load logic params
private _className = _logic getVariable [QGVAR(className), ""];

if (_className isEqualTo "") exitWith {
  WARNING('EXEC_MODULE_NAME - empty nvg classname.');
  deleteVehicle _logic;
};

GVAR(aiNightvisionClassName) = _className;

["CAManBase", "initPost", {
  params ['_unit'];
  if (isPlayer _unit || {_unit in playableUnits}) exitWith {};
  [{_this linkItem GVAR(aiNightvisionClassName);}, _unit, 3] call CBA_fnc_waitAndExecute;
}, true, [], true] call CBA_fnc_addClassEventHandler;

// Delete logic
deleteVehicle _logic;

LOG('Execution of EXEC_MODULE_NAME finished.');
