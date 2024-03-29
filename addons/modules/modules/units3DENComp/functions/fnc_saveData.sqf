#include "script_component.hpp"
/*
 * Author: SzwedzikPL
 * Saves connected units in units3DENComp module
 */

params ["_logic"];
TRACE_1("units3DENComp_saveData",_logic);

private _groupsList = [];
private _vehiclesList = [];

{
  _x params ["_type", "_entity"];
  if (_type isNotEqualTo "Sync") then {continue};

  if (_entity isKindOf "CAManBase") then {
    _groupsList pushBackUnique (group _entity);
    continue;
  };

  if (
    (_entity isKindOf "Car") ||
    {_entity isKindOf "Tank"} ||
    {_entity isKindOf "Helicopter"} ||
    {_entity isKindOf "Plane"} ||
    {_entity isKindOf "Ship"} ||
    {_entity isKindOf "Motorcycle"} ||
    {_entity isKindOf "StaticWeapon"}
  ) then {
    _vehiclesList pushBackUnique _entity;
    {
      _groupsList pushBackUnique (group _x);
    } forEach (crew _entity);
    continue;
  };
} forEach (get3DENConnections _logic);

private _vehiclesCrewList = _vehiclesList apply {fullCrew _x};
private _vehiclesData = _vehiclesList apply {_x call FUNC(units3DENComp_saveData_vehicle)};
private _groupsData = _groupsList apply {[_x, _vehiclesList, _vehiclesCrewList] call FUNC(units3DENComp_saveData_group)};

_logic set3DENAttribute [QGVAR(data), str [_vehiclesData, _groupsData]];

private _dataStats = [_vehiclesData, _groupsData] call FUNC(units3DENComp_getDataStats);
_logic set3DENAttribute [QGVAR(dataStats), format [
  "%1: %2
%3: %4
%5: %6
%7: %8",
  LLSTRING(units3DENComp_DataStats_Vehicles), _dataStats # 0,
  LLSTRING(units3DENComp_DataStats_Groups), _dataStats # 1,
  LLSTRING(units3DENComp_DataStats_Units), _dataStats # 2,
  LLSTRING(units3DENComp_DataStats_Waypoints), _dataStats # 3
]];
_logic set3DENAttribute [QGVAR(dataStatsArr), str _dataStats];

_logic set3DENAttribute [QGVAR(dataSaved), true];
delete3DENEntities _groupsList;
delete3DENEntities _vehiclesList;
