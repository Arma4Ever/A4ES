class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMain {
        ADDON = QUOTE(_this call (uiNamespace getVariable QQFUNC(onLoadDisplayMain)));
    };
};