#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(defenderBehaviour),
            QGVAR(moveHeadlessClients),
            QGVAR(revealAllPlayers),
            QGVAR(revealUnit),
            QGVAR(setLogicFlagValue),
            QGVAR(setTaskState),
            QGVAR(switchPath),
            QGVAR(toggleDynamicSimulation)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "a4es_common",
            "ace_zeus",
            "zen_modules",
            "zen_compat_ace",
            "A3_Modules_F_Events",
            "A3_Modules_F_Curator_Curator",
            "A3_Modules_F_Curator_Objectives",
            "A3_Modules_F_Curator_Respawn",
            "A3_Modules_F_Curator_Multiplayer",
            "A3_Modules_F_Bootcamp_Misc",
            "A3_Data_F_Curator_Virtual"
        };
        author = ECSTRING(main,Author);
        authors[] = {"SzwedzikPL"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class a4es_functions_overrides {
    zen_modules_fnc_moduleHeal = QPATHTOF(functions\fnc_zen_moduleHeal.sqf);
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "Cfg3DEN.hpp"
