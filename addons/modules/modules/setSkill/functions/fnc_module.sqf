#include "script_component.hpp"
/*
 * Author: Krzyciu, SzwedzikPL
 * setFace module function
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

GVAR(skill) = _logic getVariable [QGVAR(unitSkill), 0.5];

["CAManBase", "initPost", {
  params ['_unit'];
  if (isPlayer _unit || {_unit in playableUnits}) exitWith {};
  [{_this setSkill GVAR(skill);}, _unit, 3] call CBA_fnc_waitAndExecute;
}, true, [], true] call CBA_fnc_addClassEventHandler;

// Delete logic
deleteVehicle _logic;

LOG('Execution of EXEC_MODULE_NAME finished.');