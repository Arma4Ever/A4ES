
#define HIDE_MODULE(className,baseClass) \
class className: baseClass { \
    scope = 1; \
}

class Site_F;
class Site_Military_Base;
class ModuleMPType_F;
class Site_FT_Base;
class ACE_Module;
class ModuleLiveFeedBase_F;
class ModuleSound_F;
class ModuleObjective_F;
class ModuleSkirmishBase_F;
class SupportProvider_Base;
class SupportProvider_Virtual_Base;
class lambs_wp_BaseModule;
class ModuleWLTemplate_F;

HIDE_MODULE(ModuleCuratorAddCameraArea_F,Module_F);
HIDE_MODULE(ModuleCuratorAddIcon_F,Module_F);
HIDE_MODULE(ModuleRating_F,Module_F);
HIDE_MODULE(ACE_moduleAmbianceSound,Module_F);
HIDE_MODULE(ModuleAnimals_F,Module_F);
HIDE_MODULE(Site_Ambient,Site_F);
HIDE_MODULE(CBA_ModuleAttack,Module_F);
HIDE_MODULE(ModuleBleedTickets_F,Module_F);
HIDE_MODULE(Site_BLUFOR,Site_Military_Base);
HIDE_MODULE(ModuleCivilianPresence_F,Module_F);
HIDE_MODULE(ModuleCivilianPresenceSafeSpot_F,Module_F);
HIDE_MODULE(ModuleCivilianPresenceUnit_F,Module_F);
HIDE_MODULE(ModuleCombatGetIn,Module_F);
HIDE_MODULE(ModuleCombatPatrol_LocationAzimuthBlacklist_F,Module_F);
HIDE_MODULE(ModuleCombatPatrol_Init_F,Module_F);
HIDE_MODULE(ModuleCombatPatrol_LocationAdd_F,Module_F);
HIDE_MODULE(ModuleCombatPatrol_LocationRemove_F,Module_F);
HIDE_MODULE(ModuleCombatPatrol_LocationMove_F,Module_F);
HIDE_MODULE(ModuleCoverMap_F,Module_F);
HIDE_MODULE(ModuleCreateDiaryRecord_F,Module_F);
HIDE_MODULE(ModuleTaskCreate_F,Module_F);
HIDE_MODULE(ModuleTaskSetDescription_F,Module_F);
HIDE_MODULE(ModuleTaskSetDestination_F,Module_F);
HIDE_MODULE(ModuleTaskSetState_F,Module_F);
HIDE_MODULE(ModuleRadioChannelCreate_F,Module_F);
HIDE_MODULE(ModuleDate_F,Module_F);
HIDE_MODULE(CBA_ModuleDefend,Module_F);
HIDE_MODULE(ModuleMPTypeDefense_F,ModuleMPType_F);
HIDE_MODULE(Site_Empty,Site_FT_Base);
HIDE_MODULE(ModuleHvtEndGameObjective_F,Module_F);
HIDE_MODULE(ModuleHvtSimpleObjective_F,Module_F);
HIDE_MODULE(ModuleHvtStartGameObjective_F,Module_F);
HIDE_MODULE(ModuleHvtObjectivesInstance_F,Module_F);
HIDE_MODULE(acex_fortify_setupModule,ACE_Module);
HIDE_MODULE(acex_fortify_buildLocationModule,ACE_Module);
HIDE_MODULE(ModuleFriendlyFire_F,Module_F);
HIDE_MODULE(ACE_ModuleFriendlyFire,ACE_Module);
HIDE_MODULE(ModuleMPTypeGameMaster_F,ModuleMPType_F);
HIDE_MODULE(ModuleGenericRadio_F,Module_F);
HIDE_MODULE(ModuleHQ_F,Module_F);
HIDE_MODULE(HighCommand,Module_F);
HIDE_MODULE(HighCommandSubordinate,HighCommand);
HIDE_MODULE(Site_Independent,Site_Military_Base);
HIDE_MODULE(ModuleLiveFeedEffects_F,ModuleLiveFeedBase_F);
HIDE_MODULE(ModuleLiveFeedInit_F,ModuleLiveFeedBase_F);
HIDE_MODULE(ModuleLiveFeedSetSource_F,ModuleLiveFeedBase_F);
HIDE_MODULE(ModuleLiveFeedSetTarget_F,ModuleLiveFeedBase_F);
HIDE_MODULE(ModuleLiveFeedTerminate_F,ModuleLiveFeedBase_F);
HIDE_MODULE(ACE_ModuleLSDVehicles,ACE_Module);
HIDE_MODULE(ModuleCuratorAddAddons_F,Module_F);
HIDE_MODULE(ModuleCuratorAddPoints_F,Module_F);
HIDE_MODULE(ace_map_gestures_moduleGroupSettings,ACE_Module);
HIDE_MODULE(MartaManager,Module_F);
HIDE_MODULE(Site_Minefield,Site_F);
HIDE_MODULE(ModuleOmQRF_F,Module_F);
HIDE_MODULE(ModuleDoorOpen_F,Module_F);
HIDE_MODULE(Site_OPFOR,Site_Military_Base);
HIDE_MODULE(CBA_ModulePatrol,Module_F);
HIDE_MODULE(ModuleRadio_F,ModuleSound_F);
HIDE_MODULE(ModulePoster_F,Module_F);
HIDE_MODULE(ModuleObjectiveRaceCP_F,ModuleObjective_F);
HIDE_MODULE(ModuleObjectiveRaceFinish_F,ModuleObjective_F);
HIDE_MODULE(ModuleObjectiveRaceStart_F,ModuleObjective_F);
HIDE_MODULE(ModuleChat_F,Module_F);
HIDE_MODULE(ACE_ModuleRallypoint,ACE_Module);
HIDE_MODULE(Site_Patrol,Site_F);
HIDE_MODULE(CBA_main_require,Logic);
HIDE_MODULE(ModuleSaveGame_F,Module_F);
HIDE_MODULE(ModuleMissionName_F,Module_F);
HIDE_MODULE(ModuleMPTypeSectorControl_F,ModuleMPType_F);
HIDE_MODULE(ModuleMPTypeSeize_F,ModuleMPType_F);
HIDE_MODULE(ModuleAI_F,Module_F);
HIDE_MODULE(ModuleAmmo_F,Module_F);
HIDE_MODULE(ModuleCuratorSetAttributesObject_F,Module_F);
HIDE_MODULE(ModuleCuratorSetAttributesGroup_F,ModuleCuratorSetAttributesObject_F);
HIDE_MODULE(ModuleCuratorSetAttributesMarker_F,ModuleCuratorSetAttributesObject_F);
HIDE_MODULE(ModuleCuratorSetAttributesPlayer_F,ModuleCuratorSetAttributesObject_F);
HIDE_MODULE(ModuleCuratorSetAttributesWaypoint_F,ModuleCuratorSetAttributesObject_F);
HIDE_MODULE(ModuleGroupID,Module_F);
HIDE_MODULE(ModuleCuratorSetCamera_F,Module_F);
HIDE_MODULE(ModuleHealth_F,Module_F);
HIDE_MODULE(ModuleCuratorSetDefaultCosts_F,Module_F);
HIDE_MODULE(ModuleCuratorSetSideCosts_F,Module_F);
HIDE_MODULE(ModuleCuratorSetCosts_F,Module_F);
HIDE_MODULE(ModuleCuratorSetModuleCosts_F,ModuleCuratorSetCosts_F);
HIDE_MODULE(ModuleCuratorSetObjectCosts_F,ModuleCuratorSetCosts_F);
HIDE_MODULE(ModuleCuratorSetEditingAreaType_F,Module_F);
HIDE_MODULE(ModuleCuratorSetCoefs_F,Module_F);
HIDE_MODULE(ModuleCuratorAddEditingAreaPlayers_F,Module_F);
HIDE_MODULE(ModuleCuratorAddEditingArea_F,Module_F);
HIDE_MODULE(ModuleCuratorAddEditableObjects,Module_F);
HIDE_MODULE(ModuleMode_F,Module_F);
HIDE_MODULE(ModulePositioning_F,Module_F);
HIDE_MODULE(ModuleRank_F,Module_F);
HIDE_MODULE(ModuleSkill_F,Module_F);
HIDE_MODULE(ModuleDamage_F,Module_F);
HIDE_MODULE(ModuleFuel_F,Module_F);
HIDE_MODULE(ModuleShowHide_F,Module_F);
HIDE_MODULE(ModuleSimulationManager_F,Module_F);
HIDE_MODULE(ModuleSkirmishTrigger_F,ModuleSkirmishBase_F);
HIDE_MODULE(ace_slideshow_module,ACE_Module);
HIDE_MODULE(ModuleSlingload_F,Module_F);
HIDE_MODULE(ModuleSpawnAI_F,Module_F);
HIDE_MODULE(ModuleSpawnAIOptions_F,Module_F);
HIDE_MODULE(ModuleSpawnAISectorTactic_F,Module_F);
HIDE_MODULE(ModuleSpawnAIPoint_F,Module_F);
HIDE_MODULE(ModuleMPTypeGroundSupport_F,ModuleMPType_F);
HIDE_MODULE(SupportProvider_Artillery,SupportProvider_Base);
HIDE_MODULE(SupportProvider_Virtual_Artillery,SupportProvider_Virtual_Base);
HIDE_MODULE(SupportProvider_CAS_Bombing,SupportProvider_Base);
HIDE_MODULE(SupportProvider_Virtual_CAS_Bombing,SupportProvider_Virtual_Base);
HIDE_MODULE(SupportProvider_CAS_Heli,SupportProvider_Base);
HIDE_MODULE(SupportProvider_Virtual_CAS_Heli,SupportProvider_Virtual_Base);
HIDE_MODULE(SupportProvider_Transport,SupportProvider_Base);
HIDE_MODULE(SupportProvider_Virtual_Transport,SupportProvider_Virtual_Base);
HIDE_MODULE(SupportProvider_Drop,SupportProvider_Base);
HIDE_MODULE(SupportProvider_Virtual_Drop,SupportProvider_Virtual_Base);
HIDE_MODULE(SupportRequester,Module_F);
HIDE_MODULE(ModuleMPTypeGroundSupportBase_F,ModuleMPType_F);
HIDE_MODULE(lambs_wp_TaskArtillery,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskArtilleryRegister,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskAssault,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskCamp,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskCQB,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskCreep,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskGarrison,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskHunt,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskPatrol,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskReset,lambs_wp_BaseModule);
HIDE_MODULE(lambs_wp_TaskRush,lambs_wp_BaseModule);
HIDE_MODULE(ModuleTrident_F,Module_F);
HIDE_MODULE(ModuleCuratorUnlockArea_F,Module_F);
HIDE_MODULE(ModuleCuratorUnlockObject_F,Module_F);
HIDE_MODULE(ModuleCurator_F,Module_F);
HIDE_MODULE(ModuleVanguardObjective_F,Module_F);
HIDE_MODULE(ModuleVanguardScorePersistence_F,Module_F);
HIDE_MODULE(ModuleVanguardFob_F,Module_F);
HIDE_MODULE(ACE_VehicleLock_ModuleSyncedAssign,ACE_Module);
HIDE_MODULE(ModuleVolume_F,Module_F);
HIDE_MODULE(ModuleWLBase_F,ModuleWLTemplate_F);
HIDE_MODULE(ModuleWLInit_F,ModuleWLTemplate_F);
HIDE_MODULE(ModuleWLResponse_F,ModuleWLTemplate_F);
HIDE_MODULE(ModuleWLSector_F,ModuleWLTemplate_F);
HIDE_MODULE(ModuleWLSpawnPoint_F,ModuleWLTemplate_F);
HIDE_MODULE(ModuleZoneProtection_F,Module_F);
HIDE_MODULE(ModuleZoneRestriction_F,Module_F);
HIDE_MODULE(ModuleOmBase,Module_F);
HIDE_MODULE(ModuleOmBaseAreaBase,ModuleOmBase);
HIDE_MODULE(ModuleOmQuest_Base_F,ModuleOmBase);
HIDE_MODULE(ModuleOmQuest_Base_Area_F,ModuleOmQuest_Base_F);
HIDE_MODULE(ModuleOmQuest_Location_F,ModuleOmQuest_Base_Area_F);
HIDE_MODULE(ModuleOmSector_F,Module_F);
HIDE_MODULE(ModulePatrolArea_F,Module_F);
HIDE_MODULE(ModuleOmRestrictedArea_F,Module_F);
HIDE_MODULE(ModuleOmRelationship_F,Module_F);
HIDE_MODULE(QRF_Modules,Module_F);
HIDE_MODULE(ModuleOmQRF_F_Types,QRF_Modules);
HIDE_MODULE(ModuleOmQRF_F_Third,ModuleOmQRF_F_Types);
HIDE_MODULE(ModuleOmQRF_F_First,ModuleOmQRF_F_Types);
HIDE_MODULE(ModuleOmQRF_F_Second,ModuleOmQRF_F_Types);
HIDE_MODULE(ModuleOmQuest_DeliverPoint_F,ModuleOmQuest_Base_Area_F);
HIDE_MODULE(ModuleOmQuest_Get_F,ModuleOmQuest_Base_F);
HIDE_MODULE(ModuleOmQuest_DestroyObject_F,ModuleOmQuest_Base_F);
HIDE_MODULE(ModuleOmQuest_DestroyObjects_F,ModuleOmQuest_DestroyObject_F);
HIDE_MODULE(ModuleOmQuest_Support_F,ModuleOmQuest_Base_F);
HIDE_MODULE(ModuleOmQuest_HoldAction_F,ModuleOmQuest_Base_F);
HIDE_MODULE(ModuleOmQuest_Defend_F,ModuleOmQuest_Base_Area_F);
HIDE_MODULE(ModuleOmQuest_Transport_F,ModuleOmQuest_Base_Area_F);
HIDE_MODULE(ModuleOmQuest_TransportPerson_F,ModuleOmQuest_Base_Area_F);
HIDE_MODULE(ModuleOmQuest_HostageRescue_F,ModuleOmQuest_Base_F);
HIDE_MODULE(ModuleOmQuest_Support_StartingPos_F,ModuleOmBase);
HIDE_MODULE(ModuleOMSmartMarkers_F,Module_F);
HIDE_MODULE(ModuleOMSyndikatAgent,Module_F);
HIDE_MODULE(ModuleOMSyndikatTeam,Module_F);
HIDE_MODULE(ModuleOMSyndikatCampPos,Module_F);
HIDE_MODULE(ModuleOmQuest_SupportUnits_F,ModuleOmBase);
HIDE_MODULE(ModuleOmSectorCheckpoint_F,ModuleOmSector_F);
HIDE_MODULE(ModuleOMEconomy,Module_F);
HIDE_MODULE(ModuleOmActionQueue_F,Module_F);
HIDE_MODULE(ModuleOMRadio_F,Module_F);
HIDE_MODULE(ModuleOMReputation_F,Module_F);
HIDE_MODULE(ModuleOMAwareness_F,Module_F);
HIDE_MODULE(ModuleOmProtectedVehicle_F,Module_F);
HIDE_MODULE(ModuleOmInitScript_F,Module_F);
HIDE_MODULE(ModuleOmInit_F,Module_F);
HIDE_MODULE(ModuleOmNight_F,Module_F);
HIDE_MODULE(ModuleOmIntel_F,Module_F);
HIDE_MODULE(ModuleOmTracked_F,Module_F);
HIDE_MODULE(ModuleOmDepot_F,Module_F);
HIDE_MODULE(ModuleOmRestPoint_F,Module_F);
HIDE_MODULE(ModuleOmMosquitos_F,Module_F);
HIDE_MODULE(ModuleOmMarket_F,Module_F);
HIDE_MODULE(ModuleOmRandomConversation_F,Module_F);
HIDE_MODULE(ModuleOMFastTravel_F,Module_F);
HIDE_MODULE(ModuleOMFastTravelPos_F,Module_F);
HIDE_MODULE(ModuleFiringDrill_F,Module_F);
HIDE_MODULE(ModuleTimeTrial_F,Module_F);
HIDE_MODULE(ModuleSimpleObject_F,Module_F);
