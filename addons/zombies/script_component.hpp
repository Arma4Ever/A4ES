#define COMPONENT zombies
#define COMPONENT_BEAUTIFIED Zombies
#include "\z\a3cs\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_ZOMBIES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ZOMBIES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ZOMBIES
#endif

#include "\z\a3cs\addons\main\script_macros.hpp"