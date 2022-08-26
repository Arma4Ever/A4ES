#include "script_component.hpp"
/*
 * Author: SzwedzikPL
 * Updates previews for selected modules
 */

{deleteVehicle _x} forEach GVAR(modulesActRangePreviews);
{(_x # 0) enableSimulation false} forEach GVAR(modulesActRangePreviewsData);

private _previews = [];
private _data = [];

{
  private _values = _x getVariable [QGVAR(moduleValues), objNull];

  if ((_values getVariable [QGVAR(activationMode), -1]) == 0) then {
    private _range = (_x get3DENAttribute QGVAR(activationNearestPlayerDistance)) param [0, 0];

    if (_range > 0) then {
      _x enableSimulation true;
      private _preview = createSimpleObject ["ProtectionZone_F", getPosWorld _x];
      _preview attachTo [_x, [0,0,0]];
      _preview setObjectTexture [0, "#(rgb,8,8,3)color(0,0,1,0.4)"];
      _preview setObjectScale (_range / 24.5);
      _previews pushBack _preview;
      _data pushBack [_x, _range];
    };
  };
} forEach (get3DENSelected "logic");

GVAR(modulesActRangePreviews) = _previews;
GVAR(modulesActRangePreviewsData) = _data;