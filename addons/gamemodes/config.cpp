#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"a4es_common", "A3_3DEN"};
        author = ECSTRING(main,Author);
        authors[] = {"SzwedzikPL"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class ctrlCombo;
class ctrlStructuredText;
class ctrlControlsGroup;

#include "CfgEventHandlers.hpp"
#include "CfgMPGameTypes.hpp"
#include "Cfg3DEN.hpp"
