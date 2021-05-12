#include "script_component.hpp"
#define EXEC_MODULE_NAME GVAR(ambientAnimals)
/*
 * Author: Krzyciu, SzwedzikPL
 * Ambient animals module
 */
params ["_mode","_input"];

// Exit if module executed inside editor, not on server or not in init mode
if (is3DEN || !(isServer) || !(_mode isEqualTo "init")) exitWith {};
_input params [
  ["_logic", objNull, [objNull]],
  ["_isActivated", false, [true]],
  ["_isCuratorPlaced", false, [true]]
];
// Exit if module is null, not local or placed by zeus (should not happen)
if (isNull _logic || !(local _logic) || _isCuratorPlaced) exitWith {};

  if (CBA_missionTime < 30) then {
    sleep 15;
  };

LOG_1('Starting execution of EXEC_MODULE_NAME (isActivated: %1).',str _isActivated);

if (_isActivated) then {
    private _animalsType = _logic getVariable [QGVAR(animalsType), ""];
    private _animalsCount = _logic getVariable [QGVAR(animalsCount), 0];
    private _animalsMaxIndex = _animalsCount - 1;
    private _logicArea = [getPos _logic];
    _logicArea append (_logic getVariable ["objectarea", []]);

    if ((_animalsType isEqualTo "") || (_animalsCount isEqualTo 0)) exitWith {
      WARNING_2('EXEC_MODULE_NAME - animal type is empty or animal count is 0 (animalsType: %1, animalsCount: %2).',str _animalsType, _animalsCount);
    };

    // Generate animals
    for "_animalIndex" from 0 to _animalsMaxIndex do {

        LOG_3('Generating animals #%1 (animalClass: "%2").',str _animalIndex,_animalsType);
        
        private _spawnPos = _logicArea call EFUNC(common,getAreaRandomPos);
        private _animal = createAgent [_animalsType,_spawnPos,[],0,"NONE"];
        _animal setDir (random 360);
        _animal enableDynamicSimulation true;
    };
};

LOG('Execution of EXEC_MODULE_NAME finished.');
