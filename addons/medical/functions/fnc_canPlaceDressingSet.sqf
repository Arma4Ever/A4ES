#include "script_component.hpp"
/*
 * Author: SzwedzikPL
 * Returns true if player can place dressing set
 */

params ["_player"];

("A4ES_dressingSet" in (_player call ACEFUNC(common,uniqueItems))) &&
{isNull (objectParent _player)}
