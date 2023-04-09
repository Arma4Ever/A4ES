#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"a4es_common"};
        author = ECSTRING(main,Author);
        authors[] = {"SzwedzikPL", "ARK", "Cyruz143"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgCloudlets.hpp"
#include "ImpactEffectsBlood.hpp"