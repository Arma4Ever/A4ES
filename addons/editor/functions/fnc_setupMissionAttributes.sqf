#include "script_component.hpp"
/*
 * Author: Bohemia Interactive, SzwedzikPL
 * Setups mission attributes default values
 */
LOG("setupMissionAttributes");

// "Scenario" set3DENMissionAttribute ["SaveBinarized", false];
// "Preferences" set3DENMissionAttribute ["SaveBinarized", false];
"GarbageCollection" set3DENMissionAttribute ["DynSimEnabled", true];
"GarbageCollection" set3DENMissionAttribute ["CorpseManagerMode", 1];
"GarbageCollection" set3DENMissionAttribute ["WreckManagerMode", 1];

private _garbageCollectionSetuped = "GarbageCollection" get3DENMissionAttribute QGVAR(garbageCollectionSetuped);
private _a3csVersion = "Scenario" get3DENMissionAttribute QGVAR(a3csVersion);
TRACE_2("setupMissionAttributes - loaded mission attributes",_a3csVersion,_garbageCollectionSetuped);
if (_a3csVersion isEqualTo "") then {_a3csVersion = "0.0.0";};
private _currentVersion = QUOTE(VERSION_STR);

// Setup garbage collector & dynamic sim default settings if not setuped yet
if (
  !_garbageCollectionSetuped ||
  {_a3csVersion isNotEqualTo _currentVersion}
) then {
  if (_garbageCollectionSetuped) then {
    WARNING_2("Scenario saved on older A3CS version. Scenario created on: '%1', current version: '%2'.",_a3csVersion,_currentVersion);
    // Show info box about version mismatch
    [_currentVersion, _a3csVersion] spawn {
      sleep 0.001;
      [
        format [LLSTRING(Warning_A3CSVersionMismatch_Message), _this # 1, _this # 0],
        LLSTRING(Warning_A3CSVersionMismatch_Title),
        false,
        'OK'
      ] call BIS_fnc_3DENShowMessage;
    };
  };

  "GarbageCollection" set3DENMissionAttribute ["MinPlayerDistance", 0];
  "GarbageCollection" set3DENMissionAttribute ["CorpseLimit", 16];
  "GarbageCollection" set3DENMissionAttribute ["CorpseRemovalMinTime", 45];
  "GarbageCollection" set3DENMissionAttribute ["CorpseRemovalMaxTime", 15*60];
  "GarbageCollection" set3DENMissionAttribute ["WreckLimit", 6];
  "GarbageCollection" set3DENMissionAttribute ["WreckRemovalMinTime", 2*60];
  "GarbageCollection" set3DENMissionAttribute ["WreckRemovalMaxTime", 30*60];

  "GarbageCollection" set3DENMissionAttribute ["DynSimDistGroup", 750];
  "GarbageCollection" set3DENMissionAttribute ["DynSimDistVehicle", 1250];
  "GarbageCollection" set3DENMissionAttribute ["DynSimDistProp", 50];
  "GarbageCollection" set3DENMissionAttribute ["DynSimDistEmptyVehicle", 320];
  "GarbageCollection" set3DENMissionAttribute ["DynSimMovingCoef", 1.3];

  "GarbageCollection" set3DENMissionAttribute [QGVAR(garbageCollectionSetuped), true];
  "Scenario" set3DENMissionAttribute [QGVAR(a3csVersion), _currentVersion];
};
