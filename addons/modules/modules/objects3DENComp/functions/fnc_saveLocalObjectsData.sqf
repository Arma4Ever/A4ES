#include "script_component.hpp"
/*
 * Author: SzwedzikPL
 * Saves local objects from all modules data
 */
LOG("saveLocalObjectsData");

private _missionPath = getMissionPath "";

if (_missionPath == "") exitWith {
  // Show 3DEN notification
  [
    LLSTRING(EmptyMissionPathError_Message),
    1,
    7,
    false
  ] call BIS_fnc_3DENNotification;
};

private _response = "a4es_editor" callExtension "test";
if (_response != "true") exitWith {
  diag_log text format ["a4es_editor extension: invalid response for test - %1", _response];
  0 call FUNC(objects3DENComp_extensionErrorNotification);
};

LOG("saveLocalObjectsData - setMissionPath");

_response = "a4es_editor" callExtension ["setMissionPath", [_missionPath]];
if ((_response # 0) != "true") exitWith {
  diag_log text format ["a4es_editor extension: invalid response for setMissionPath - %1", str _response];
  0 call FUNC(objects3DENComp_extensionErrorNotification);
};

LOG("saveLocalObjectsData - newSimpleObjectsFile");
_response = "a4es_editor" callExtension ["newSimpleObjectsFile", []];
if ((_response # 0) != "true") exitWith {
  diag_log text format ["a4es_editor extension: invalid response for newSimpleObjectsFile - %1", str _response];
  0 call FUNC(objects3DENComp_extensionErrorNotification);
};

private _modules = (all3DENEntities # 3) select {_x isKindOf QGVAR(objects3DENComp)};

{
  private _module = _x;

  private _dataSaved = (_module get3DENAttribute QGVAR(dataSaved)) # 0;
  private _spawnLocally = (_module get3DENAttribute QGVAR(spawnLocally)) # 0;

  if (!_dataSaved || !_spawnLocally) then {
    TRACE_3("Ignore module, not saved or without local spawn enabled",_module,_dataSaved,_spawnLocally);
    continue;
  };

  private _spawnAsSuperSimple = (_module get3DENAttribute QGVAR(spawnAsSuperSimple)) # 0;
  private _objectsDataStr = (_module get3DENAttribute QGVAR(data)) # 0;
  private _dataArray = parseSimpleArray _objectsDataStr;

  if ((count _dataArray) == 0) then {
    TRACE_2("Ignore module, no objects to save",_module,_dataArray);
    continue;
  };

  private _sourceIndex = 0;
  if (_spawnAsSuperSimple) then {
    _sourceIndex = 1;
  };

  {
    "a4es_editor" callExtension ["addSimpleObject", [[
      _x # _sourceIndex,
      _x # 3,
      _x # 5
    ]]];
  } forEach _dataArray;

  private _addObjectPostInit = (_module get3DENAttribute QGVAR(addObjectPostInit)) # 0;
  private _objectPostInit = (_module get3DENAttribute QGVAR(objectPostInit)) # 0;

  if !(_addObjectPostInit) then {
    _objectPostInit = "";
  };

  TRACE_1("saveLocalObjectsData - saveSimpleObjectsModule",_objectPostInit);
  "a4es_editor" callExtension ["saveSimpleObjectsModule", [_objectPostInit]];
} forEach _modules;


LOG("saveLocalObjectsData - saveSimpleObjectsFile");
_response = "a4es_editor" callExtension ["saveSimpleObjectsFile", []];
if ((_response # 0) != "true") exitWith {
  diag_log text format ["a4es_editor extension: invalid response for saveSimpleObjectsFile - %1", str _response];
  0 call FUNC(objects3DENComp_extensionErrorNotification);
};