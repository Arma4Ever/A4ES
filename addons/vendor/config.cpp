#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "a4es_common",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_02",
            "3DEN_Globe"
        };
        author = ECSTRING(main,Author);
        authors[] = {"SzwedzikPL"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;

#include "Cfg3DEN.hpp"
#include "CfgAmmo.hpp"
#include "CfgCloudlets.hpp"
#include "CfgLights.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundEffects.hpp"
#include "CfgWeapons.hpp"
#include "effects.hpp"
