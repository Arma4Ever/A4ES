class GVAR(units3DENComp): GVAR(base) {
    scope = 2;
    author = "SzwedzikPL";
    displayName = CSTRING(units3DENComp_displayName);
    icon = QPATHTOF(modules\units3DENComp\data\icon.paa);
    category = QGVAR(3DENComp);
    function = QFUNC(units3DENComp_module);
    GVAR(validator) = QFUNC(units3DENComp_validate);

    class Attributes: AttributesBase {
        class GVAR(moduleShortDescription): GVAR(moduleShortDescription) {};
        class GVAR(moduleWarnings): GVAR(moduleWarnings) {};

        // Attributes for module activator
        #include "\z\a3cs\addons\modules\includes\moduleActivationAttributes.hpp"

        class GVAR(baseSettingsSubCategory): GVAR(moduleSubCategory) {
            displayName = CSTRING(units3DENComp_Attributes_baseSettingsSubCategory);
            property = QGVAR(baseSettingsSubCategory);
        };

        class GVAR(data): GVAR(dynamicHiddenEdit) {
            displayName = "data";
            tooltip = "data";
            property = QGVAR(data);
            defaultValue = "'[]'";
            ATTRIBUTE_LOCAL;
        };

        class GVAR(dataSaved): GVAR(dynamicHiddenCheckbox) {
            displayName = "dataSaved";
            tooltip = "dataSaved";
            property = QGVAR(dataSaved);
            defaultValue = "false";
            ATTRIBUTE_LOCAL;
        };

        class GVAR(mode): GVAR(dynamicToolbox3DENCompMode) {
            displayName = CSTRING(units3DENComp_Attributes_mode);
            tooltip = CSTRING(units3DENComp_Attributes_mode_tooltip);
            property = QGVAR(mode);
            typeName = "NUMBER";
            defaultValue = "0";
            ATTRIBUTE_LOCAL;
        };

        class GVAR(dataStats): GVAR(dynamicEditMulti5) {
            displayName = CSTRING(units3DENComp_Attributes_dataStats);
            tooltip = CSTRING(units3DENComp_Attributes_dataStats_tooltip);
            property = QGVAR(dataStats);
            defaultValue = "''";
            GVAR(disabled) = 1;
            GVAR(conditionActive) = QUOTE((_this getVariable QQGVAR(dataSaved)) isEqualTo true);
            ATTRIBUTE_IGNORED;
        };

        class GVAR(disableHeadless): GVAR(dynamicCheckbox) {
            displayName = CSTRING(units3DENComp_Attributes_disableHeadless);
            tooltip = CSTRING(units3DENComp_Attributes_disableHeadless_tooltip);
            property = QGVAR(disableHeadless);
            defaultValue = "false";
            GVAR(observeValue) = 0;
            ATTRIBUTE_LOCAL;
        };

        class GVAR(unitsSettingsSubCategory): GVAR(moduleSubCategory) {
            displayName = CSTRING(units3DENComp_Attributes_unitsSettingsSubCategory);
            property = QGVAR(unitsSettingsSubCategory);
        };

        class GVAR(groupsDynSim): GVAR(dynamicCombo) {
            displayName = CSTRING(units3DENComp_Attributes_groupsDynSim);
            tooltip = CSTRING(units3DENComp_Attributes_groupsDynSim_tooltip);
            property = QGVAR(groupsDynSim);
            typeName = "NUMBER";
            defaultValue = "1";
            GVAR(description) = CSTRING(units3DENComp_Attributes_groupsDynSim_desc);
            ATTRIBUTE_LOCAL;
            class values {
                class data {
                    name = CSTRING(units3DENComp_Attributes_groupsDynSim_data);
                    tooltip = CSTRING(units3DENComp_Attributes_groupsDynSim_data_tooltip);
                    value = 0;
                };
                class on {
                    name = CSTRING(units3DENComp_Attributes_groupsDynSim_on);
                    tooltip = CSTRING(units3DENComp_Attributes_groupsDynSim_on_tooltip);
                    value = 1;
                    default = 1;
                };
                class off {
                    name = CSTRING(units3DENComp_Attributes_groupsDynSim_off);
                    tooltip = CSTRING(units3DENComp_Attributes_groupsDynSim_off_tooltip);
                    value = 2;
                };
            };
        };

        class GVAR(goUpAfterSpawn): GVAR(dynamicCheckbox) {
            displayName = CSTRING(units3DENComp_Attributes_goUpAfterSpawn);
            tooltip = CSTRING(units3DENComp_Attributes_goUpAfterSpawn_tooltip);
            property = QGVAR(goUpAfterSpawn);
            defaultValue = "false";
            GVAR(observeValue) = 0;
            ATTRIBUTE_LOCAL;
        };

        class GVAR(vehicleSettingsSubCategory): GVAR(moduleSubCategory) {
            displayName = CSTRING(units3DENComp_Attributes_vehicleSettingsSubCategory);
            property = QGVAR(vehicleSettingsSubCategory);
        };

        class GVAR(vehiclesDynSim): GVAR(dynamicCombo) {
            displayName = CSTRING(units3DENComp_Attributes_vehiclesDynSim);
            tooltip = CSTRING(units3DENComp_Attributes_vehiclesDynSim_tooltip);
            property = QGVAR(vehiclesDynSim);
            typeName = "NUMBER";
            defaultValue = "1";
            GVAR(description) = CSTRING(units3DENComp_Attributes_vehiclesDynSim_desc);
            ATTRIBUTE_LOCAL;
            class values {
                class data {
                    name = CSTRING(units3DENComp_Attributes_vehiclesDynSim_data);
                    tooltip = CSTRING(units3DENComp_Attributes_vehiclesDynSim_data_tooltip);
                    value = 0;
                };
                class on {
                    name = CSTRING(units3DENComp_Attributes_vehiclesDynSim_on);
                    tooltip = CSTRING(units3DENComp_Attributes_vehiclesDynSim_on_tooltip);
                    value = 1;
                    default = 1;
                };
                class off {
                    name = CSTRING(units3DENComp_Attributes_vehiclesDynSim_off);
                    tooltip = CSTRING(units3DENComp_Attributes_vehiclesDynSim_off_tooltip);
                    value = 2;
                };
            };
        };

        class GVAR(clearVehCargo): GVAR(dynamicCheckbox) {
            displayName = CSTRING(units3DENComp_Attributes_clearVehCargo);
            tooltip = CSTRING(units3DENComp_Attributes_clearVehCargo_tooltip);
            property = QGVAR(clearVehCargo);
            defaultValue = "true";
            GVAR(description) = CSTRING(units3DENComp_Attributes_clearVehCargo_desc);
            GVAR(observeValue) = 0;
            ATTRIBUTE_LOCAL;
        };

        class GVAR(moduleDescription): GVAR(moduleDescription) {};
    };

    class GVAR(moduleDescription): GVAR(moduleDescription) {
        shortDescription = CSTRING(units3DENComp_shortDescription);
        canSyncWith[] = {"<anyUnit>", "<anyVehicle>", "<anyObject>"};
        syncRequired = 1;
    };
};