#include "\z\ace\addons\medical_status\script_component.hpp"
/*
 * Author: Glowbal, anden3, dgibso29
 * Check if a unit is in a stable condition, needed for PersonalAidKit treatment
 *
 * Arguments:
 * 0: The patient <OBJECT>
 *
 * Return Value:
 * Is in stable condition <BOOL>
 *
 * Example:
 * [player] call ace_medical_status_fnc_isInStableCondition
 *
 * Public: No
 *
 * REF - https://github.com/acemod/ACE3/pull/8964
 */

params ["_medic", "_patient"];

if (
  !alive _patient
  || {IS_UNCONSCIOUS(_patient)}
  || {IS_BLEEDING(_patient)}
  || {GET_HEART_RATE(_patient) <= 60}
  || {1 in (GET_FRACTURES(_patient))}
  || {
    !(_medic call a4es_medical_fnc_isInDressingSetRange) &&
    {!([_patient] call ace_medical_treatment_fnc_isInMedicalFacility)} &&
    {!([_patient] call ace_medical_treatment_fnc_isInMedicalVehicle)}
  }
) exitWith {false};

private _bandagedWounds = GET_BANDAGED_WOUNDS(_patient);
private _bandagedWoundsKeys = keys _bandagedWounds;

if ((_bandagedWoundsKeys findIf {(_bandagedWounds get _x) isNotEqualTo []}) != -1) exitWith {false};

private _openWounds = GET_OPEN_WOUNDS(_unit);
private _openWoundsKeys = keys _wounds;

if ((_openWoundsKeys findIf {
  ((_openWounds get _x) findIf {(_x # 2) > 0 || {(_x # 3) > 0}}) != -1
}) != -1) exitWith {false};

private _requiredBloodVolume = DEFAULT_BLOOD_VOLUME * 0.85;
if (GET_BLOOD_VOLUME(_patient) < _requiredBloodVolume) exitWith {false};

private _hasTorniquets = false;
for "_i" from 0 to 5 do {
  if (HAS_TOURNIQUET_APPLIED_ON(_patient,_i)) exitWith {_hasTorniquets = true;};
};

!_hasTorniquets
