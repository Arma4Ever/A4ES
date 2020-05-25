class ENH_DynamicGroups
{
	collapsed = 1;
	displayName = $STR_ENH_DYNAMICGROUPS_DISPLAYNAME;
	class Attributes
	{
		class ENH_EnableDynamicGroups
		{
			displayName = $STR_ENH_ENABLE;
			tooltip = $STR_ENH_DYNAMICGROUPS_TOOLTIP;
			property = "ENH_dynamicGroups";
			control = "Checkbox";
			expression =
			"\
				if (!is3DEN && {isMultiplayer && {_value}}) then\
				{\
					if (isServer) then {['Initialize'] call BIS_fnc_dynamicGroups};\
					if (hasInterface) then\
					{\
						[] spawn\
						{\
							waitUntil {!isNull player};\
							['InitializePlayer', [player]] call BIS_fnc_dynamicGroups;\
						};\
					};\
				};\
			";
			defaultValue = "false";
		};
	};
};