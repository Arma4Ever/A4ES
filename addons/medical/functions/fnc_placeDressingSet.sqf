#include "script_component.hpp"
/*
 * Author: SzwedzikPL
 * Places dressing set
 */

params ["_player"];

[5, 0, {
  _player removeItem "A4ES_dressingSet";

  private _pos = _player modelToWorld [0, 1.2, 0];
  private _obj = QGVAR(dressingSet) createVehicle _pos;
  _obj setPos _pos;

  // A4ES Server event
  ["a4es_dressingSetPlaced", [_player, "A4ES_dressingSet"]] call CBA_fnc_serverEvent;

  // Reset animation
  [_player, "", 1] call ACEFUNC(common,doAnimation);
}, {
  // Reset animation
  [_player, "", 1] call ACEFUNC(common,doAnimation);
}, LLSTRING(ActionPlaceDressingSet_progress), {
  _player call FUNC(canPlaceDressingSet);
}] call ACEFUNC(common,progressBar);

// Play animation
[_player, "AinvPknlMstpSnonWnonDnon_medic4"] call ACEFUNC(common,doAnimation);
