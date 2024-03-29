#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

if (isServer) then {
  GVAR(createdTasks) = createHashMap;
  GVAR(awaitingTasksStatesServer) = createHashMap;
  GVAR(awaitingTasksServer) = createHashMap;

  [QGVAR(setTaskStateServer), {
    _this call FUNC(setTaskState);
  }] call CBA_fnc_addEventHandler;
};

if (hasInterface) then {
  // Map of created tasks
  GVAR(tasks) = createHashMap;
  // List of tasks (ids) where player don't belong to task owner group
  GVAR(rejectedTasks) = [];
  // Map of awaiting tasks (used if parent task is not created yet)
  GVAR(awaitingTasks) = createHashMap;
  // Map of awaiting tasks states (used if state is assigned before task creation - JIP)
  GVAR(awaitingTasksStates) = createHashMap;
  // Notifications awaiting for task (used if notification event reached client before task creation)
  GVAR(awaitingNotifications) = [];

  // Client events
  [QGVAR(createTask), {
    _this call FUNC(createTaskLocal);
  }] call CBA_fnc_addEventHandler;

  [QGVAR(setTaskState), {
    _this call FUNC(setTaskStateLocal);
  }] call CBA_fnc_addEventHandler;

  [QGVAR(taskNotification), {
    _this call FUNC(showTaskNotificationLocal);
  }] call CBA_fnc_addEventHandler;
};

ADDON = true;
