#include "Patch_APB.h"
#include "CPatcher.h"
#include "Addresses.h"
#include "Packet.h"
#include "CustomArgs.h"

void Update_EULAandTOS(char* folderLoc)
{
	char* loc = new char[1024];
	char* str = new char[50];
	FILE *file = nullptr; 

	bool fail = false;

	char* EULAtext = "Welcome to very first APB: All Points Bulletin private server. It is advised to carefully read all the following content of this message.\n\nBASIC RULES:\n\nNICKNAMES:\na) Mustn't have abused combinations of capital i and lowercase L (i.e. \"IlIlIIIl\")\nb) Mustn't have troll-like form (i.e. \"ChickWithD***\", \"YourMom\", \"Trolololololol\", etc.)\nc) Mustn't have any administrative/adminstration form (i.e. \"Administrator\", \"Admin\", \"Developer\", \"Dev\", \"Owner\", etc.)\nd) Mustn't have any kind swear/insult/hate/racism expression (i.e. \"F***You\", \"SuckMyD***\", \"NoRussians\", \"Ni*a\", \"Nig*r\" etc.)\n\nACCOUNT/PRIVATE INFORMATION:\na) Do not share your account information with anyone - your account can be compromised and used in bad purposes\nb) Do not share your real-world information such as adress, telephone number, real name, etc.\nc) We will never ask you for your account details such as account username and password\n\nLANGUAGES:\na) District chat is mainly for English - if you wish to talk in other language(s), use other ways of messaging (such as whisper, team, clan, group chat)\nb) If you wish to talk privately (whisper chat) to developers/administrators, use English only and do not spam\nc) There are different language instances (FR, IT, RU etc.) so use the correspoding language(s) when playing in there\n\nGAMEMASTERS (<GM>'s):\na) Never ask to become one - GMs will be hand-picked by devs\nb) Become one by following rules, encouraging them and helping new players and then applying\n\nHACKING:\na) Any sort of hacking/cheating where you get advantage over normal players will be punished with ban\nb) Your ban cannot be revoked - it's permanent and you can't get unbanned\n\nEXPLOITING:\na) Exploting game-breaking bugs (e.g. unreachable item spots) will not be tolerated\nb) Your ban can be revoked after certain amount of time\nc) Modifying car files to make cars convertibles is allowed\nd) Modifying and replacing car files (e.g. replace Consenza with Bishada) will not be tolerated\n\nINSULTING:\na) Insulting other players in any language is forbidden\nb) Your ban can be revoked after certain amount of time\n\nSWEARING:\na) Extensive swearing in any language in public is not allowed\nb) If caught and punished, your ban can be revoked after certain amount of time\n\nRACISM:\na) Any kind of racism is strictly prohibited and will not be tolerated\nb) Your ban cannot be revoked - it's permanent and you can't be unbanned";
	char* TOStext = "ALL CREDITS GO TO THEIR RESPECTIVE OWNERS REALTIME WORLDS, EA AND ALL THE COMPANIES THAT WORKED AND ARE WORKING ON THIS GAME. IT IS ADVISED TO USE UPDATED VERSION OF THIS GAME PROVIDED BY GAMERSFIRST TO GET EVEN BETTER EXPERIENCE. THIS SERVER IS COMPLETELY FREE2PLAY AND THERE WILL NOT BE A SINGLE MONEY TRANSACTION MADE FOR ANY KIND OF INGAME BENEFITS AS WE DO NOT WANT TO GAIN PROFIT IN ANY WAY.\n\nCOPYRIGHT (c) 2010 REALTIME WORLDS (In Memorium, www.realtime-worlds.com)\nCOPYRIGHT (c) 2011-2015 GAMERSFIRST (www.apb.com)\nCOPYRIGHT (c) 2010 EA (www.ea.com)\nCOPYRIGHT (c) 2011-2015 RELOADED PRODUCTIONS (www.gamersfirst.com)\nALL RIGHTS RESERVED.\n\n\nNOTE:\nWe have all rights to suspend (ban) your account whenever, wherever and whyever we want without you knowing or without previous warnings.\n\n\nImportant notes will be displayed here.\n\n\nEnjoy the game! :)"; 
	
	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\INT\\EULA.int");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, EULAtext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"EULA.int\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\INT\\TOS.int");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"TOS.int\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\FRA\\EULA.fra");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"EULA.fra\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\FRA\\TOS.fra");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"TOS.fra\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\GER\\EULA.ger");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"EULA.ger\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\GER\\TOS.ger");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"TOS.ger\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\RUS\\EULA.rus");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"EULA.rus.int\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\RUS\\TOS.rus");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"TOS.rus\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\ITA\\EULA.ita");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"EULA.ita\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\ITA\\TOS.ita");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"TOS.ita\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\SPA\\EULA.spa");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"EULA.spa\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Localization\\SPA\\TOS.spa");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, TOStext);
		fclose(file);
	}
	else Logger(lWARN, "Update_EULAandTOS()", "\"TOS.spa\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	if(!fail) Logger(lINFO, "Update_EULAandTOS()", "EULA and TOS files updated");
}

void Update_GameFiles(char* folderLoc)
{
	char* loc = new char[1024];
	char* str = new char[50];
	FILE* file = nullptr;

	bool fail = false;

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Config\\EnvironmentGame.ini");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, "[APBGame.cHostingGC2LS]\r\nm_sLS1=%s\r\n[CrashReport]\r\nm_sURL=\r\nm_sReporter=Client\r\n[BugReport]\r\nm_sURL=\r\nm_sReporter=Client\r\n[LogReport]\r\nm_sURL=\r\nm_sReporter=Client\r\n[APBGame.cAudioManager]\r\nm_sMusicServerIpAddress=\r\nm_sMusicServerPort=\r\n[APBSupportURL]\r\nAPBVault=\r\nAPBCredits=\r\nAPBAccountManagement=\r\nAPBCreateAccount=\r\nAPBHarassment=", Packet::loginServerIP);
		fclose(file);
	}
	else Logger(lWARN, "Update_GameFiles()", "\"EnvironmentGame.ini\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Config\\APBGame.ini");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, "[Engine.GameInfo]\r\nDefaultGame=APBGame.APBGameInfo\r\nDefaultServerGame=APBGame.APBGameInfo\r\nbAdminCanPause=false\r\nMaxPlayers=500\r\nGameDifficulty=+1.0\r\nbChangeLevels=True\r\nMaxSpectators=2\r\nMaxIdleTime=+0.0\r\nMaxTimeMargin=+2.0\r\nTimeMarginSlack=+1.35\r\nMinTimeMargin=-2.0\r\n\r\n[Engine.AccessControl]\r\nIPPolicies=ACCEPT;*\r\n\r\n[Engine.GameReplicationInfo]\r\nServerName=Another Server\r\nShortName=Server\r\nMessageOfTheDay=\r\n\r\n[DefaultPlayer]\r\nName=Player\r\nteam=255\r\n\r\n[Engine.HUD]\r\nbMessageBeep=true\r\nHudCanvasScale=0.95\r\nConsoleMessageCount=4\r\nConsoleFontSize=5\r\nMessageFontOffset=0\r\nbShowHud=true\r\nDebugDisplay=AI\r\n\r\n[Engine.PlayerController]\r\nbAimingHelp=false\r\nbDynamicNetSpeed=false\r\nInteractDistance=512\r\nDynamicPingThreshold=+400.0\r\nbCheckRelevancyThroughPortals=true\r\nDefaultFOV=85.000000\r\n\r\n[Engine.Weapon]\r\nPriority=-1.0\r\n\r\n[Engine.WorldInfo]\r\nDefaultGravityZ=-750.0\r\nRBPhysicsGravityScaling=1.0\r\nSquintModeKernelSize=128.0\r\nEmitterPoolClassPath=Engine.EmitterPool\r\n\r\n[Engine.UIDataStore_GameResource]\r\nElementProviderTypes=(ProviderTag=\"GameTypes\",ProviderClassName=\"Engine.UIGameInfoSummary\")\r\nGameInfoResourceObjectNames=ExampleGameInfoSummary\r\nGameInfoResourceObjectNames=SampleGameInfoSummary\r\n\r\n[Engine.UISafeRegionPanel]\r\nRegionPercentages=0.9\r\nRegionPercentages=0.8\r\n\r\n[Configuration]\r\nBasedOn=..\\Engine\\Config\\BaseGame.ini\r\n\r\n[APBGame.APBGameInfo]\r\nm_bSpawnPlayersInVehicles=false\r\nm_bAllowInstantPlayerRestart=false\r\nm_bAllowGrenades=true\r\nm_cfg_bEnablePlayerDataLogging=true\r\nm_cfg_fPlayerPostionDataLogTime=5.0\r\nm_cfg_fPlayerDataLogFlushTime=20.0\r\nm_cfg_nPlayerDataLogVersion=1\r\nm_cfg_bEnableLCDataLogging_Ped=true\r\nm_cfg_bEnableLCDataLogging_Vehicle=true\r\nm_cfg_fLCDataLoggingTime=10.0\r\nm_bMatchmakingSameFactionPenalty=true\r\nm_bMatchmakingPreviousOppositionPenalty=true\r\nm_sFeedbackMessageRow=Standard\r\nm_fGameplayLoggingPeriod=30.0\r\nm_bAlwaysUseMissionCache=true\r\n\r\n[APBGame.cToDManager]\r\nm_bConfigInitToD=false\r\nm_nConfigToDHours=5\r\nm_nConfigToDMins=30\r\nm_bConfigToDActive=false\r\nm_nLengthOfDayHours=5\r\nm_nLengthOfDayMins=0\r\n\r\n[APBGame.cAPBPawn]\r\nm_nMaxDeadRagDollPawns=8\r\nm_bDeathAnimations=true\r\nm_nTimeToPlayDeathAnimInVehicle=5\r\nm_bDebugWeaponAimDirection=false\r\n\r\n[APBGame.cAPBPlayerController]\r\nm_bRespawnInVehicle=false\r\nm_bFlyWhileDead=false\r\nm_bRespawnAtCameraLocation=false\r\nm_bTempHasDeployedVehicle=true\r\nm_bCanTargetAll=false\r\nm_bTasksActive=true\r\nm_nMaxAmmoCarrierCharge=100\r\nm_bUpdateTimeDebugData=true\r\nm_ProtectedHealth=10\r\nm_bDebugOpenCustomisation=false\r\nm_bShowServerHits=false\r\nm_bDebugHitMarkers=false\r\nm_bRenderDebugTracers=false\r\nm_nVerbosityMissionManager=1\r\nm_nVerbosityJustifications=1\r\nm_bTestHitReactions=false\r\nm_bShowGrenadeFlight=false\r\nm_HitNotificationQueueLength=100\r\nm_HitNotificationTimeout=0.5\r\nm_sMusicStudioAutoDeployedTheme=default\r\nm_bHideEnvironmentStreamingOnStartup=true\r\nm_bHideCharacterStreamingOnStartup=true\r\nm_bWaitForClosestBuildingLODOnly=false\r\nm_bShowStreamingTransitionScreen=true\r\nm_bShieldsEnabled=false\r\n\r\n[APBGame.cWeapon]\r\nm_bDrawClientServerHits=false\r\n\r\n[APBGame.cWeaponAttachment]\r\nm_bParticleMuzzleFlash=true\r\n\r\n[APBGame.cAPBCamera]\r\nm_bCalculateOnServer=false\r\n\r\n[APBGame.cAPBCameraModeVehicleUber]\r\nm_bEnableAutoLookbehind=false\r\n\r\n[APBGame.cDebugHUD]\r\nm_bEnableTimeDebug=false\r\nm_bShowActorNetRates=false\r\nm_bShowHeat=false\r\nm_bShowActiveCrimes=false\r\nm_nHeatInfoRows=5\r\nm_fHeatInfoTimeout=60\r\nm_bActivityMessagesShow=false\r\nm_nActivityMessagesMax=8\r\nm_fActivityMessagesTimeout=20\r\n\r\n[APBGame.cHUDBase]\r\nm_bDrawLocatorOverlays=false\r\nm_bDrawHealthBars=false\r\nm_bHealthBarsOnlyDamaged=true\r\nm_bHealthBarsOwnPawn=false\r\nm_bHealthBarsDistanceFade=false\r\nm_bHealthBarsTargeted=false\r\nm_bHealthBarsDetailed=false\r\n\r\n[APBGame.cResupplyOperation]\r\nm_nPauseTimeOnFinish=3\r\n\r\n[APBGame.cRechargeOperation]\r\nm_nAmmoCarrierRechargeAmount=5\r\nm_nAmmoCarrierRechargeRate=1\r\nm_nPauseTimeOnFinish=3\r\n\r\n[APBGame.cAmmoCarrierDepotUserManager]\r\nm_fCarrierRange=500\r\n\r\n[APBGame.cAPBGameReplicationInfo]\r\nm_cfg_bEnablePlayerDataLogging=false\r\nm_cfg_nPlayerDataLogTime=10\r\nm_cfg_sPlayerDataFile=PlayerDataLog\r\nm_fGroupUnreliableDataUpdatePeriod=1.0\r\nm_bMissionsEnabled=true\r\nm_bActiveSteering=false\r\nm_bAllPvPDamageEnabled=false\r\nm_bAllPvEDamageEnabled=false\r\nm_bScoringIncludeTestContacts=false\r\nm_bFastShortTimeout=true\r\nm_bUseNewTrackedActivities=true\r\nm_bStatsEnabled=true\r\n\r\n[APBGame.cAPBVehicleBase]\r\nm_fVisualDamageArmour=250\r\nm_fFinalDamageArmour=10\r\nm_fLightDamageThreshold=0.3\r\nm_fCollisionDamageThreshold=26.0\r\nm_bAllowUseInAllDistricts=FALSE\r\nm_fFurtherVAPAdjustAmount=0\r\n\r\n[APBGame.cHostingClient]\r\nm_nDistrictExitTimeout=300000\r\n\r\n[APBGame.cHostingNames]\r\nm_sRegion=EU\r\n\r\n[BugReport]\r\nm_sURL=\r\nm_sReporter=Client\r\n\r\n[CrashReport]\r\nm_sURL=\r\nm_sReporter=Client\r\n\r\n[LogReport]\r\nm_sURL=\r\nm_sReporter=Client\r\nm_bEnabled=false\r\n\r\n[APBSupportURL]\r\nAPBCredits=\r\nABPVault=\r\nAPBAccountManagement=\r\nAPBCreateAccount=\r\nAPBHarassment=\r\nAPBVault=\r\n\r\n[APBGame.cHostingGC2LS]\r\nm_nSendBufferSize=8192\r\nm_nRecvBufferSize=10000\r\nm_nMaxMessageSize=8192\r\nm_nKeepaliveTime=60000\r\nm_nKeepaliveInterval=6000\r\nm_nConnectTimeout=60000\r\nm_nTickInterval=250\r\nm_sLS1=%s\r\nm_sLS2=\r\nm_sLS3=\r\nm_sLS4=\r\nm_sLS5=\r\nm_sLS6=\r\nm_sLS7=\r\nm_sLS8=\r\nm_sLS9=\r\nm_sLS10=\r\n\r\n[APBGame.cHostingGC2WS]\r\nm_nSendBufferSize=65535\r\nm_nRecvBufferSize=65535\r\nm_nMaxMessageSize=65535\r\nm_nKeepaliveTime=60000\r\nm_nKeepaliveInterval=6000\r\nm_nConnectTimeout=60000\r\nm_nTickInterval=250\r\n\r\n[APBGame.cSetupTypeManager]\r\nm_cfg_fInitialPedestrianRotationInSeconds=30\r\nm_cfg_fDefaultPedestrianRotationInSeconds=25\r\nm_cfg_fInitialVehicleRotationInSeconds=30\r\nm_cfg_fDefaultVehicleRotationInSeconds=25\r\nm_cfg_fClientGCAndStreamDelayInSeconds=70\r\nm_cfg_fReleaseDelayInSeconds=120\r\n\r\n[APBGame.cLCIniData]\r\nm_cfg_fPedestriansPerSecPerNode=0.03\r\nm_cfg_nNPCsPerSecInLC=10\r\nm_cfg_fMinRunAwayFromDangerAngle=90.0\r\nm_cfg_fMaxWitnessReactionTime=2.0f\r\nm_cfg_fMaxDangerReactionTime=0.5f\r\nm_cfg_fDriverCowerMinDuration=8.0f\r\nm_cfg_fDriverCowerMaxDuration=12.0f\r\nm_cfg_fWorldEventEvaluationIntervalTime=0.5\r\nm_cfg_fAvoidVehicleEvaluationIntervalTime=0.1\r\nm_cfg_nMaxWorldEventsPerSecond=2\r\nm_cfg_nMaxLocalEventsPerSecond=10\r\nm_cfg_fLookAtDurationMin=2\r\nm_cfg_fLookAtDurationMax=5\r\nm_cfg_fLookAtCooldownTimeMin=5\r\nm_cfg_fLookAtCooldownTimeMax=10\r\nm_cfg_fPedestrianCollisionVolumeRadius=30\r\nm_cfg_fPedestrianCollisionVolumeLocomotionHeight=184\r\nm_cfg_fPedestrianCollisionVolumeBottomOffset=5\r\nm_cfg_fPedestrianCollisionVolumeAdditionalHeight=25\r\nm_cfg_fPedestrianFatalVehicleSpeed=1200\r\nm_cfg_fPedestrianFatalNudgeDistance=100\r\nm_cfg_fPedestrianNudgeRetractSpeed=20\r\nm_cfg_fPedestrianBeginSlideOffNudgeDistance=110\r\nm_cfg_fPedestrianClientSnapBackNudgeDistance=700\r\nm_cfg_fPedestrianBumpReactionAngleThreshold=8\r\nm_cfg_fPedestrianVehicleImpactLookaheadTime=3.0\r\nm_cfg_fMinPedestrianVehicleImpactSpeed=500.0\r\nm_cfg_fMinNPCRagdollDisplayTime=60.0\r\nm_cfg_fMaxNPCRagdollDisplayTime=120.0\r\nm_cfg_nMaxNumberOfNPCRagdolls=30\r\nm_cfg_nHardMaxNumberOfNPCRagdolls=45\r\nm_cfg_fMinNPCRagdollDespawnDelay=10.0\r\nm_cfg_nMaxPedVignettesPerRoute=10\r\nm_cfg_nPedVignettesToSkip=3\r\nm_cfg_nPedVignettesPerformedBeforeSkip=2\r\nm_cfg_fMinDeviationOfBaseRunSpeed=-10.0f\r\nm_cfg_fMaxDeviationOfBaseRunSpeed=10.0f\r\nm_cfg_fMinDeviationOfBaseWalkSpeed=-10.0f\r\nm_cfg_fMaxDeviationOfBaseWalkSpeed=10.0f\r\nm_cfg_fObstructionLookAheadVarianceMin=50.0f\r\nm_cfg_fObstructionLookAheadVarianceMax=250.0f\r\nm_cfg_fObstructionCheckIntervalTime=0.33f;\r\nm_cfg_nMaxObstructionRerouteCount=3\r\nm_cfg_fMaxObstructionWaitTime=60.0f\r\nm_cfg_fObstructionRerouteCountResetTime=30.0f\r\nm_cfg_fObstructionRerouteWaitTimeMin=5.0f\r\nm_cfg_fObstructionRerouteWaitTimeMax=15.0f\r\nm_cfg_nMinPedRouteChunkNodes=10\r\nm_cfg_fMinPedRouteChunkLength=10000.0f\r\nm_cfg_fPedestrianCurbStopLineDistance=35\r\nm_cfg_fPedestrianStopLineCollisionDistanceMin=25\r\nm_cfg_fPedestrianStopLineCollisionDistanceMax=40\r\nm_cfg_fPedestrianInMotionCollisionDistanceMin=60\r\nm_cfg_fPedestrianInMotionCollisionDistanceMax=75\r\nm_cfg_fPedestrianStationaryCollisionDistanceMin=90\r\nm_cfg_fPedestrianStationaryCollisionDistanceMax=110\r\nm_cfg_fPedestrianMinCrossingStopTimeMin=0.45\r\nm_cfg_fPedestrianMinCrossingStopTimeMax=0.75\r\nm_nVehicleSpawnIntervalVeryHigh=45\r\nm_nVehicleSpawnIntervalHigh=30\r\nm_nVehicleSpawnIntervalMedium=15\r\nm_nVehicleSpawnIntervalLow=10\r\nm_nVehicleSpawnIntervalVeryLow=5\r\nm_cfg_fMaxVehicleTickTime=0.2f\r\nm_cfg_nMaxVehicleTicksPerFrame=100\r\nm_nPGPlayerRegistrationInterval=5\r\nm_nPGPropRegistrationInterval=5\r\nm_nPGVehicleRegistrationInterval=5\r\nm_fTTICancelDuration=0.0\r\nm_cfg_fMaxLookAroundDistance=1000.0\r\nm_cfg_fPedestrianJunctionPriorityScale=0.5f\r\nm_cfg_fVehicleJunctionPriorityScale=1.0f\r\nm_cfg_bChooseOnlyWholePedestrianColourSets=false\r\nm_cfg_bChoosePedestrianColoursByColourIndex=true\r\nm_cfg_nDebugOverridePedAssetIndexLow=20\r\nm_cfg_nDebugOverridePedAssetIndexHigh=30\r\nm_cfg_fCollisionVolumeUpdateIntervalDuringRootMotion=0.25f\r\nm_cfg_fAvoidLoudVehicleConeHorizontalAngle=60.0f;\r\nm_cfg_fAvoidLoudVehicleConeVerticalAngle=60.0f;\r\nm_cfg_fMinLoudVehicleNotifySpeed=-1.0f;\r\nm_cfg_fAllowedTTIHeightDifference=20.0f;\r\nm_cfg_fPedestrianBankingScale=0.5\r\nm_cfg_fPedestrianBankingMaxAngle=30.0\r\nm_cfg_fPedestrianBankingBlendInSpeed=25.0\r\nm_cfg_fPedestrianBankingBlendOutSpeed=20.0\r\n\r\n[APBGame.cNPCDriverSkeletalMeshActor]\r\nm_fMaxDriverInsideVehicleMoveDistance=10.0f\r\nm_fCheckFloorIntervalTime=0.5f\r\n\r\n[APBGame.cNPCPedestrianBrain]\r\nm_fPedestrianRadius=30.0\r\nm_fPedestrianHeight=180.0\r\n\r\n[APBGame.cVehicleManager]\r\nm_cfg_fJunctionSpeedFraction=0.5;\r\nm_cfg_fBendSpeedFraction=0.6;\r\nm_cfg_fEndOfRouteSpeedFraction=0.4;\r\nm_cfg_fMinVehicleSeparationStationary=300.0;\r\nm_cfg_fMinVehicleSeparationMoving=500.0;\r\nm_cfg_fMinObstacleSeparation=600.0;\r\nm_cfg_fMaxObstacleSeparation=800.0;\r\nm_cfg_fMinInitialSeparation=3000.0;\r\nm_cfg_fMinJunctionDistance=50.0;\r\nm_cfg_fMaxJunctionDistance=200.0;\r\nm_cfg_fVehicleLengthBuffer=50.0;\r\nm_cfg_fMinDeceleration=-250.0;\r\nm_cfg_fMaxDeceleration=-1000.0f\r\nm_cfg_fMatchSpeedThreshold=75.0;\r\nm_cfg_fLookAheadDistance=3000.0;\r\nm_cfg_fLaneClearDistance=4000.0;\r\nm_cfg_fChangeLaneTime=3.0;\r\nm_cfg_fMinChangeLaneDistance=600.0;\r\nm_cfg_fChangeLaneSharpness=0.2;\r\nm_cfg_fSlowDownToChangeLaneDistance=2500.0f;\r\nm_cfg_fIndicateDistance=2500.0;\r\nm_cfg_fMaxStationaryTime=80.0;\r\nm_cfg_fMaxWaitTime=10.0;\r\nm_cfg_nMaxVehicleQueueLength=3;\r\nm_cfg_nMaxNearbyVehicles=25;\r\nm_cfg_fNearbyVehicleCheckDistance=5000.0f;\r\nm_cfg_nMaxVisibilityChecksPerVehicle=8;\r\nm_cfg_fMinDistanceToNearestPlayerForRecycling=10000.0f;\r\nm_cfg_fVehicleRecycleCheckInterval=3.0f;\r\nm_cfg_bDetectBends=true;\r\nm_cfg_bDetectEndOfRoute=true;\r\nm_cfg_bDetectJunctions=true;\r\nm_cfg_bDetectNPCVehicles=true;\r\nm_cfg_bDetectObstacles=true;\r\nm_cfg_bDetectObstructions=true;\r\nm_cfg_bCompensateForMovingObstacles=false;\r\nm_cfg_fRaiseWheelAmount=0.0f;\r\nm_cfg_nNumEdgesToCheckAhead=5;\r\nm_cfg_fRouteAnalysisInterval=5.0f;\r\nm_cfg_fSpawnCheckInterval=1.0f;\r\nm_cfg_fSpawnNodeObstructionRatioForSTBPActivation=0.0f;\r\nm_cfg_nNumAlternateSpawnEdgesToProcessPerFrame=12;\r\nm_cfg_nSpawnEligibilityDelay=500;\r\nm_cfg_fMinDistanceFromAltSpawnNodeToNearestPlayer=7000.0f;\r\nm_cfg_nClosestDestroyNodeSortingFraction=1;\r\nm_cfg_nSTBPDistanceToFirstVehicleHeuristicWeight=1;\r\nm_cfg_nSTBPEmptyEdgeTimerHeuristicWeight=1;\r\nm_cfg_fTurningOrientationTolerance=90.0f;\r\nm_cfg_fJunctionRegistrationDistance=10000.0f;\r\nm_cfg_fJunctionRegistrationUpdateIntervalTime=1.0f;\r\nm_cfg_fMaxBodyPitch=273.0;\r\nm_cfg_fMaxBodyRoll=1456.0;\r\nm_cfg_fBodyRotationSpeed=728;\r\nm_cfg_fWaitDurationAfterCancelledHijack=3.0f;\r\n\r\n[APBUserInterface.cUIListProvider_FillEffects]\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_NoEffect\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_Outline\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_Mask\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_GradLeft\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_GradRight\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_GradUp\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_GradDown\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_Shapes\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_BrushStroke\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_Scratches\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_GradDown\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_GradRight\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_Camo\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_Spikes\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_Graffiti\r\nm_aVinylThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_InvertMask\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_NoEffect\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_Outline\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_Mask\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_GradLeft\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_GradRight\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_GradUp\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_GradDown\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_Shapes\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_BrushStroke\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_SB_Scratches\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_GradDown\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_GradRight\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_Camo\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_Spikes\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_CB_Graffiti\r\nm_aFontThumbnailNames=APBMenus_Art_SymbolEditor.FillIcon_InvertMask\r\n\r\n[APBUserInterface.cRandomCharacterGenerator]\r\nm_aSeedPackages=M_RandomSeeds\r\nm_aSeedPackages=F_RandomSeeds\r\n\r\n[APBUserInterface.cUIDataStore_HUD_WSCharacterInfo]\r\nm_bShowLocalPlayerName=false\r\nm_bShowOtherPlayers=true\r\nm_bShowContacts=true\r\n\r\n[APBUserInterface.cUIDataStore_Marketplace]\r\nm_nBuyConfirmationPrice=0\r\n\r\n[APBUserInterface.cUIDataStore_GameFlowManager]\r\nm_bUseOBTPreOrderScene=False\r\n\r\n[APBGame.cContact]\r\nm_bWaitOnIdleAnimEndToSwitchState=false\r\n\r\n[APBGame.cOutfit]\r\nm_bQueryIndirectSwaps=true\r\nm_sMaleText=Male\r\nm_sFemaleText=Female\r\nm_sMalePrefix=M_\r\nm_sFemalePrefix=F_\r\nm_aLeftText=Left\r\nm_aRightText=Right\r\nbTraversePreviousCull=false\r\n\r\n[APBGame.cSDDVFX]\r\nm_bDebugVFX=false\r\nm_bSetupSDDVFX=true\r\nm_bSetupDefaultVFX=false\r\n\r\n[APBGame.cPlayerVehicleSpawnBay]\r\nm_bAutoAcceptRepairDialogue=true\r\n\r\n[APBGame.cPlayerVehicleSpawnZone]\r\nm_bAllowDirectInteractionWithVolume=false\r\n\r\n[APBGame.cDistrictActors]\r\nm_bPreloadCommonAssets=true\r\nm_bStrictTaskTargetValidation=false\r\nm_bChooseFirstStageTargetsNearGroupLeader=true\r\n\r\n[APBGame.cAudioManager]\r\nm_sMusicServerIpAddress=\r\nm_sMusicServerPort=\r\nm_nPrioritisedExplosions=5\r\nm_nPrioritisedVehicles=4\r\nm_nPrioritisedMusic=3\r\nm_nPrioritisedEmitters=12\r\nm_nPrioritisedNPCS=10\r\nm_nPrioritisedContacts=1\r\nm_nPrioritisedVFX=3\r\nm_nPrioritisedImpacts=5\r\nm_nPrioritisedScrapes=5\r\n\r\n[APBGame.cAudioVoipManager]\r\nm_nDebugUser=0\r\nm_nDebug=0\r\n\r\n[APBGame.cRaycastWeapon]\r\nm_fAccuracyRadiusScale=1.0\r\nm_bRampDamage=true\r\n\r\n[APBGame.cTaskObjective]\r\nm_bUseLegacyVehicleMissionCode=false\r\n\r\n[IniVersion]\r\n0=1275468988.000000\r\n1=1338994346.000000", Packet::loginServerIP);
		fclose(file);
	}
	else Logger(lWARN, "Update_GameFiles()", "\"APBGame.ini\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");

	strcpy(loc, folderLoc);
	strcpy((char*)str, "\\APBGame\\Config\\DefaultGame.ini");
	strcat(loc, str);
	file = fopen(loc,"w");
	if(file != NULL)
	{
		fprintf(file, "[Configuration]\r\nBasedOn=..\\Engine\\Config\\BaseGame.ini\r\n\r\n[Engine.GameInfo]\r\nDefaultGame=APBGame.APBGameInfo\r\nDefaultServerGame=APBGame.APBGameInfo\r\nMaxPlayers=500\r\n\r\n[DefaultPlayer]\r\nName=Player\r\nteam=255\r\n\r\n[Engine.UIDataStore_GameResource]\r\n+GameInfoResourceObjectNames=ExampleGameInfoSummary\r\n+GameInfoResourceObjectNames=SampleGameInfoSummary\r\n\r\n[Engine.PlayerController]\r\nDefaultFOV=85.000000\r\n\r\n[APBGame.APBGameInfo]\r\nm_bSpawnPlayersInVehicles=false\r\nm_bAllowInstantPlayerRestart=false\r\nm_bAllowGrenades=true\r\nm_cfg_bEnablePlayerDataLogging=true\r\nm_cfg_fPlayerPostionDataLogTime=5.0\r\nm_cfg_fPlayerDataLogFlushTime=20.0\r\nm_cfg_nPlayerDataLogVersion=1\r\nm_cfg_bEnableLCDataLogging_Ped=true\r\nm_cfg_bEnableLCDataLogging_Vehicle=true\r\nm_cfg_fLCDataLoggingTime=10.0\r\nm_bMatchmakingSameFactionPenalty=true\r\nm_bMatchmakingPreviousOppositionPenalty=true\r\nm_sFeedbackMessageRow=\"Standard\"\r\nm_fGameplayLoggingPeriod=30.0\r\nm_bAlwaysUseMissionCache=true\r\n\r\n[APBGame.cToDManager]\r\nm_bConfigInitToD=false\r\nm_nConfigToDHours=5\r\nm_nConfigToDMins=30\r\nm_bConfigToDActive=false\r\nm_nLengthOfDayHours=5\r\nm_nLengthOfDayMins=0\r\n\r\n[APBGame.cAPBPawn]\r\nm_nMaxDeadRagDollPawns=8\r\nm_bDeathAnimations=true\r\nm_nTimeToPlayDeathAnimInVehicle=5\r\nm_bDebugWeaponAimDirection=false\r\n\r\n[APBGame.cAPBPlayerController]\r\nm_bRespawnInVehicle=false\r\nm_bFlyWhileDead=false\r\nm_bRespawnAtCameraLocation=false\r\nm_bTempHasDeployedVehicle=true\r\nm_bCanTargetAll=false\r\nm_bTasksActive=true\r\nm_nMaxAmmoCarrierCharge=100\r\nm_bUpdateTimeDebugData=true\r\nm_ProtectedHealth=10\r\nm_bDebugOpenCustomisation=false\r\nm_bShowServerHits=false\r\nm_bDebugHitMarkers=false\r\nm_bRenderDebugTracers=false\r\nm_nVerbosityMissionManager=1\r\nm_nVerbosityJustifications=1\r\nm_bTestHitReactions=false\r\nm_bShowGrenadeFlight=false\r\nm_HitNotificationQueueLength=100\r\nm_HitNotificationTimeout=0.5\r\nm_sMusicStudioAutoDeployedTheme=\"default\"\r\nm_bHideEnvironmentStreamingOnStartup=true\r\nm_bHideCharacterStreamingOnStartup=true\r\nm_bWaitForClosestBuildingLODOnly=false\r\nm_bShowStreamingTransitionScreen=true\r\nm_bShieldsEnabled=false\r\n\r\n[APBGame.cWeapon]\r\nm_bDrawClientServerHits=false\r\n\r\n[APBGame.cWeaponAttachment]\r\nm_bParticleMuzzleFlash=true\r\n\r\n[APBGame.cAPBCamera]\r\nm_bCalculateOnServer=false\r\n\r\n[APBGame.cAPBCameraModeVehicleUber]\r\nm_bEnableAutoLookbehind=false\r\n\r\n[APBGame.cDebugHUD]\r\nm_bEnableTimeDebug=false\r\nm_bShowActorNetRates=false\r\nm_bShowHeat=false\r\nm_bShowActiveCrimes=false\r\nm_nHeatInfoRows=5\r\nm_fHeatInfoTimeout=60\r\nm_bActivityMessagesShow=false\r\nm_nActivityMessagesMax=8\r\nm_fActivityMessagesTimeout=20\r\n\r\n[APBGame.cHUDBase]\r\nm_bDrawLocatorOverlays=false\r\nm_bDrawHealthBars=false\r\nm_bHealthBarsOnlyDamaged=true\r\nm_bHealthBarsOwnPawn=false\r\nm_bHealthBarsDistanceFade=false\r\nm_bHealthBarsTargeted=false\r\nm_bHealthBarsDetailed=false\r\n\r\n[APBGame.cResupplyOperation]\r\nm_nPauseTimeOnFinish=3\r\n\r\n[APBGame.cRechargeOperation]\r\nm_nAmmoCarrierRechargeAmount=5\r\nm_nAmmoCarrierRechargeRate=1\r\nm_nPauseTimeOnFinish=3\r\n\r\n[APBGame.cAmmoCarrierDepotUserManager]\r\nm_fCarrierRange=500\r\n\r\n[APBGame.cAPBGameReplicationInfo]\r\nm_cfg_bEnablePlayerDataLogging=false\r\nm_cfg_nPlayerDataLogTime=10\r\nm_cfg_sPlayerDataFile=PlayerDataLog\r\nm_fGroupUnreliableDataUpdatePeriod=1.0\r\nm_bMissionsEnabled=true\r\n// APB - STEERING +\r\nm_bActiveSteering=false\r\n// APB - STEERING -\r\nm_bAllPvPDamageEnabled=false\r\nm_bAllPvEDamageEnabled=false\r\nm_bScoringIncludeTestContacts=false\r\nm_bFastShortTimeout=true\r\nm_bUseNewTrackedActivities=true\r\nm_bStatsEnabled=true\r\n\r\n[APBGame.cAPBVehicleBase]\r\n+m_fVisualDamageArmour=250\r\n+m_fFinalDamageArmour=10\r\nm_fLightDamageThreshold=0.3\r\nm_fCollisionDamageThreshold=26.0\r\nm_bAllowUseInAllDistricts=FALSE\r\nm_fFurtherVAPAdjustAmount=0\r\n\r\n[APBGame.cHostingClient]\r\nm_nDistrictExitTimeout=300000\r\n\r\n[APBGame.cHostingNames]\r\nm_sRegion=EU\r\n\r\n[BugReport]\r\nm_sURL=\r\nm_sReporter=Client\r\n\r\n[CrashReport]\r\nm_sURL=\r\nm_sReporter=Client\r\n\r\n[LogReport]\r\nm_sURL=\r\nm_sReporter=Client\r\nm_bEnabled=false\r\n\r\n[APBSupportURL]\r\nAPBCredits=\r\nABPVault=\r\nAPBAccountManagement=\r\nAPBCreateAccount=\r\nAPBHarassment=\r\n\r\n[APBGame.cHostingGC2LS]\r\nm_nSendBufferSize=8192\r\nm_nRecvBufferSize=10000\r\nm_nMaxMessageSize=8192\r\nm_nKeepaliveTime=60000\r\nm_nKeepaliveInterval=6000\r\nm_nConnectTimeout=60000\r\nm_nTickInterval=250\r\nm_sLS1=%s\r\nm_sLS2=\r\nm_sLS3=\r\nm_sLS4=\r\nm_sLS5=\r\nm_sLS6=\r\nm_sLS7=\r\nm_sLS8=\r\nm_sLS9=\r\nm_sLS10=\r\n\r\n[APBGame.cHostingGC2WS]\r\nm_nSendBufferSize=65535\r\nm_nRecvBufferSize=65535\r\nm_nMaxMessageSize=65535\r\nm_nKeepaliveTime=60000\r\nm_nKeepaliveInterval=6000\r\nm_nConnectTimeout=60000\r\nm_nTickInterval=250\r\n\r\n[APBGame.cSetupTypeManager]\r\nm_cfg_fInitialPedestrianRotationInSeconds=30\r\nm_cfg_fDefaultPedestrianRotationInSeconds=25\r\nm_cfg_fInitialVehicleRotationInSeconds=30\r\nm_cfg_fDefaultVehicleRotationInSeconds=25\r\nm_cfg_fClientGCAndStreamDelayInSeconds=70\r\nm_cfg_fReleaseDelayInSeconds=120\r\n\r\n[APBGame.cLCIniData]\r\nm_cfg_fPedestriansPerSecPerNode=0.03\r\nm_cfg_nNPCsPerSecInLC=10\r\nm_cfg_fMinRunAwayFromDangerAngle=90.0\r\nm_cfg_fMaxWitnessReactionTime=2.0f\r\nm_cfg_fMaxDangerReactionTime=0.5f\r\nm_cfg_fDriverCowerMinDuration=8.0f\r\nm_cfg_fDriverCowerMaxDuration=12.0f\r\nm_cfg_fWorldEventEvaluationIntervalTime=0.5\r\nm_cfg_fAvoidVehicleEvaluationIntervalTime=0.1\r\nm_cfg_nMaxWorldEventsPerSecond=2\r\nm_cfg_nMaxLocalEventsPerSecond=10\r\nm_cfg_fLookAtDurationMin=2\r\nm_cfg_fLookAtDurationMax=5\r\nm_cfg_fLookAtCooldownTimeMin=5\r\nm_cfg_fLookAtCooldownTimeMax=10\r\nm_cfg_fPedestrianCollisionVolumeRadius=30\r\nm_cfg_fPedestrianCollisionVolumeLocomotionHeight=184\r\nm_cfg_fPedestrianCollisionVolumeBottomOffset=5\r\nm_cfg_fPedestrianCollisionVolumeAdditionalHeight=25\r\nm_cfg_fPedestrianFatalVehicleSpeed=1200\r\nm_cfg_fPedestrianFatalNudgeDistance=100\r\nm_cfg_fPedestrianNudgeRetractSpeed=20\r\nm_cfg_fPedestrianBeginSlideOffNudgeDistance=110\r\nm_cfg_fPedestrianClientSnapBackNudgeDistance=700\r\nm_cfg_fPedestrianBumpReactionAngleThreshold=8\r\nm_cfg_fPedestrianVehicleImpactLookaheadTime=3.0\r\nm_cfg_fMinPedestrianVehicleImpactSpeed=500.0\r\nm_cfg_fMinNPCRagdollDisplayTime=60.0\r\nm_cfg_fMaxNPCRagdollDisplayTime=120.0\r\nm_cfg_nMaxNumberOfNPCRagdolls=30\r\nm_cfg_nHardMaxNumberOfNPCRagdolls=45\r\nm_cfg_fMinNPCRagdollDespawnDelay=10.0\r\nm_cfg_nMaxPedVignettesPerRoute=10\r\nm_cfg_nPedVignettesToSkip=3\r\nm_cfg_nPedVignettesPerformedBeforeSkip=2\r\nm_cfg_fMinDeviationOfBaseRunSpeed = -10.0f\r\nm_cfg_fMaxDeviationOfBaseRunSpeed = 10.0f\r\nm_cfg_fMinDeviationOfBaseWalkSpeed = -10.0f\r\nm_cfg_fMaxDeviationOfBaseWalkSpeed = 10.0f\r\nm_cfg_fObstructionLookAheadVarianceMin=50.0f\r\nm_cfg_fObstructionLookAheadVarianceMax=250.0f\r\nm_cfg_fObstructionCheckIntervalTime=0.33f;\r\nm_cfg_nMaxObstructionRerouteCount=3\r\nm_cfg_fMaxObstructionWaitTime=60.0f\r\nm_cfg_fObstructionRerouteCountResetTime=30.0f\r\nm_cfg_fObstructionRerouteWaitTimeMin=5.0f\r\nm_cfg_fObstructionRerouteWaitTimeMax=15.0f\r\nm_cfg_nMinPedRouteChunkNodes=10\r\nm_cfg_fMinPedRouteChunkLength=10000.0f\r\nm_cfg_fPedestrianCurbStopLineDistance = 35\r\nm_cfg_fPedestrianStopLineCollisionDistanceMin = 25\r\nm_cfg_fPedestrianStopLineCollisionDistanceMax = 40\r\nm_cfg_fPedestrianInMotionCollisionDistanceMin = 60\r\nm_cfg_fPedestrianInMotionCollisionDistanceMax = 75\r\nm_cfg_fPedestrianStationaryCollisionDistanceMin = 90\r\nm_cfg_fPedestrianStationaryCollisionDistanceMax = 110\r\nm_cfg_fPedestrianMinCrossingStopTimeMin = 0.45\r\nm_cfg_fPedestrianMinCrossingStopTimeMax = 0.75\r\nm_nVehicleSpawnIntervalVeryHigh=45\r\nm_nVehicleSpawnIntervalHigh=30\r\nm_nVehicleSpawnIntervalMedium=15\r\nm_nVehicleSpawnIntervalLow=10\r\nm_nVehicleSpawnIntervalVeryLow=5\r\nm_cfg_fMaxVehicleTickTime = 0.2f\r\nm_cfg_nMaxVehicleTicksPerFrame = 100\r\nm_nPGPlayerRegistrationInterval=5\r\nm_nPGPropRegistrationInterval=5\r\nm_nPGVehicleRegistrationInterval=5\r\nm_fTTICancelDuration=0.0\r\nm_cfg_fMaxLookAroundDistance=1000.0\r\nm_cfg_fPedestrianJunctionPriorityScale = 0.5f\r\nm_cfg_fVehicleJunctionPriorityScale = 1.0f\r\nm_cfg_bChooseOnlyWholePedestrianColourSets = false\r\nm_cfg_bChoosePedestrianColoursByColourIndex = true\r\nm_cfg_nDebugOverridePedAssetIndexLow = 20\r\nm_cfg_nDebugOverridePedAssetIndexHigh = 30\r\nm_cfg_fCollisionVolumeUpdateIntervalDuringRootMotion = 0.25f\r\nm_cfg_fAvoidLoudVehicleConeHorizontalAngle = 60.0f;\r\nm_cfg_fAvoidLoudVehicleConeVerticalAngle = 60.0f;\r\nm_cfg_fMinLoudVehicleNotifySpeed = -1.0f;\r\nm_cfg_fAllowedTTIHeightDifference = 20.0f;\r\nm_cfg_fPedestrianBankingScale=0.5\r\nm_cfg_fPedestrianBankingMaxAngle=30.0\r\nm_cfg_fPedestrianBankingBlendInSpeed=25.0\r\nm_cfg_fPedestrianBankingBlendOutSpeed=20.0\r\n\r\n[APBGame.cNPCDriverSkeletalMeshActor]\r\nm_fMaxDriverInsideVehicleMoveDistance = 10.0f\r\nm_fCheckFloorIntervalTime = 0.5f\r\n\r\n[APBGame.cNPCPedestrianBrain]\r\nm_fPedestrianRadius=30.0\r\nm_fPedestrianHeight=180.0\r\n\r\n[APBGame.cVehicleManager]\r\nm_cfg_fJunctionSpeedFraction=0.5;\r\nm_cfg_fBendSpeedFraction=0.6;\r\nm_cfg_fEndOfRouteSpeedFraction=0.4;\r\nm_cfg_fMinVehicleSeparationStationary=300.0;\r\nm_cfg_fMinVehicleSeparationMoving=500.0;\r\nm_cfg_fMinObstacleSeparation=600.0;\r\nm_cfg_fMaxObstacleSeparation=800.0;\r\nm_cfg_fMinInitialSeparation=3000.0;\r\nm_cfg_fMinJunctionDistance=50.0;\r\nm_cfg_fMaxJunctionDistance=200.0;\r\nm_cfg_fVehicleLengthBuffer=50.0;\r\nm_cfg_fMinDeceleration=-250.0;\r\nm_cfg_fMaxDeceleration=-1000.0f\r\nm_cfg_fMatchSpeedThreshold=75.0;\r\nm_cfg_fLookAheadDistance=3000.0;\r\nm_cfg_fLaneClearDistance=4000.0;\r\nm_cfg_fChangeLaneTime=3.0;\r\nm_cfg_fMinChangeLaneDistance=600.0;\r\nm_cfg_fChangeLaneSharpness=0.2;\r\nm_cfg_fSlowDownToChangeLaneDistance=2500.0f;\r\nm_cfg_fIndicateDistance=2500.0;\r\nm_cfg_fMaxStationaryTime =80.0;\r\nm_cfg_fMaxWaitTime = 10.0;\r\nm_cfg_nMaxVehicleQueueLength=3;\r\nm_cfg_nMaxNearbyVehicles=25;\r\nm_cfg_fNearbyVehicleCheckDistance=5000.0f;\r\nm_cfg_nMaxVisibilityChecksPerVehicle=8;\r\nm_cfg_fMinDistanceToNearestPlayerForRecycling=10000.0f;\r\nm_cfg_fVehicleRecycleCheckInterval=3.0f;\r\nm_cfg_bDetectBends=true;\r\nm_cfg_bDetectEndOfRoute=true;\r\nm_cfg_bDetectJunctions=true;\r\nm_cfg_bDetectNPCVehicles=true;\r\nm_cfg_bDetectObstacles=true;\r\nm_cfg_bDetectObstructions=true;\r\nm_cfg_bCompensateForMovingObstacles=false;\r\nm_cfg_fRaiseWheelAmount=0.0f;\r\nm_cfg_nNumEdgesToCheckAhead=5;\r\nm_cfg_fRouteAnalysisInterval=5.0f;\r\nm_cfg_fSpawnCheckInterval=1.0f;\r\nm_cfg_fSpawnNodeObstructionRatioForSTBPActivation=0.0f;\r\nm_cfg_nNumAlternateSpawnEdgesToProcessPerFrame=12;\r\nm_cfg_nSpawnEligibilityDelay=500;\r\nm_cfg_fMinDistanceFromAltSpawnNodeToNearestPlayer=7000.0f;\r\nm_cfg_nClosestDestroyNodeSortingFraction=1;\r\nm_cfg_nSTBPDistanceToFirstVehicleHeuristicWeight=1;\r\nm_cfg_nSTBPEmptyEdgeTimerHeuristicWeight=1;\r\nm_cfg_fTurningOrientationTolerance=90.0f;\r\nm_cfg_fJunctionRegistrationDistance = 10000.0f;\r\nm_cfg_fJunctionRegistrationUpdateIntervalTime = 1.0f;\r\nm_cfg_fMaxBodyPitch=273.0;\r\nm_cfg_fMaxBodyRoll=1456.0;\r\nm_cfg_fBodyRotationSpeed=728;\r\nm_cfg_fWaitDurationAfterCancelledHijack=3.0f;\r\n\r\n[APBUserInterface.cUIListProvider_FillEffects]\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_NoEffect\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_Outline\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_Mask\"\r\n\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_GradLeft\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_GradRight\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_GradUp\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_GradDown\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_Shapes\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_BrushStroke\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_Scratches\"\r\n\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_GradDown\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_GradRight\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_Camo\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_Spikes\"\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_Graffiti\"\r\n\r\n+m_aVinylThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_InvertMask\"\r\n\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_NoEffect\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_Outline\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_Mask\"\r\n\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_GradLeft\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_GradRight\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_GradUp\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_GradDown\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_Shapes\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_BrushStroke\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_SB_Scratches\"\r\n\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_GradDown\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_GradRight\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_Camo\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_Spikes\"\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_CB_Graffiti\"\r\n\r\n+m_aFontThumbnailNames=\"APBMenus_Art_SymbolEditor.FillIcon_InvertMask\"\r\n\r\n[APBUserInterface.cRandomCharacterGenerator]\r\n+m_aSeedPackages=\"M_RandomSeeds\"\r\n+m_aSeedPackages=\"F_RandomSeeds\"\r\n\r\n[APBUserInterface.cUIDataStore_HUD_WSCharacterInfo]\r\nm_bShowLocalPlayerName=false\r\nm_bShowOtherPlayers=true\r\nm_bShowContacts=true\r\n\r\n[APBUserInterface.cUIDataStore_Marketplace]\r\nm_nBuyConfirmationPrice=0\r\n\r\n[APBUserInterface.cUIDataStore_GameFlowManager]\r\nm_bUseOBTPreOrderScene=False\r\n\r\n[APBGame.cContact]\r\nm_bWaitOnIdleAnimEndToSwitchState=false\r\n\r\n[APBGame.cOutfit]\r\nm_bQueryIndirectSwaps=true\r\nm_sMaleText=\"Male\"\r\nm_sFemaleText=\"Female\"\r\nm_sMalePrefix=\"M_\"\r\nm_sFemalePrefix=\"F_\"\r\nm_aLeftText=\"Left\"\r\nm_aRightText=\"Right\"\r\nbTraversePreviousCull=false\r\n\r\n[APBGame.cSDDVFX]\r\n+m_bDebugVFX=false\r\n+m_bSetupSDDVFX=true\r\n+m_bSetupDefaultVFX=false\r\n\r\n[APBGame.cPlayerVehicleSpawnBay]\r\nm_bAutoAcceptRepairDialogue=true\r\n\r\n[APBGame.cPlayerVehicleSpawnZone]\r\nm_bAllowDirectInteractionWithVolume=false\r\n\r\n[APBGame.cDistrictActors]\r\nm_bPreloadCommonAssets=true\r\nm_bStrictTaskTargetValidation=false\r\nm_bChooseFirstStageTargetsNearGroupLeader=true\r\n\r\n[APBGame.cAudioManager]\r\nm_sMusicServerIpAddress=\r\nm_sMusicServerPort=\r\nm_nPrioritisedExplosions=5\r\nm_nPrioritisedVehicles=4\r\nm_nPrioritisedMusic=3\r\nm_nPrioritisedEmitters=12\r\nm_nPrioritisedNPCS=10\r\nm_nPrioritisedContacts=1\r\nm_nPrioritisedVFX=3\r\nm_nPrioritisedImpacts=5v\r\nm_nPrioritisedScrapes=5\r\n\r\n[APBGame.cAudioVoipManager]\r\nm_nDebugUser=0\r\nm_nDebug=0\r\n\r\n[APBGame.cRaycastWeapon]\r\nm_fAccuracyRadiusScale=1.0\r\nm_bRampDamage=true\r\n\r\n[APBGame.cTaskObjective]\r\nm_bUseLegacyVehicleMissionCode=false", Packet::worldServerIP);
		fclose(file);
	}
	else Logger(lWARN, "Update_GameFiles()", "\"DefaultGame.ini\" failed to open"), fail = true;

	strcpy((char*)loc, "\0");
	strcpy((char*)str, "\0");	

	if(!fail) Logger(lINFO, "Update_GameFiles()", "Configuration files updated");
}


void Update_ShaderFile(char* folderLoc)
{
	char* loc = new char[1024];
	strcpy(loc, folderLoc);
	char* str = new char[56];
	strcpy((char*)str, "\\Engine\\Shaders\\APBUberPostProcessBlendPixelShader.usf");
	strcat(loc, str);
	FILE *file = nullptr; 
	file = fopen(loc,"w");	
	if(file != NULL)
	{
		fprintf(file, "#include \"Common.usf\"\n#include \"PostProcessCommon.usf\"\n\nsampler2D BlurredImage;\n\nhalf BloomAlpha;\nhalf BloomPostScale;\n\nsampler2D AdaptedLuminance;\nfloat MiddleGrey;\nfloat Lwhite;\n\nfloat Brightness;\nfloat Contrast;\nfloat ColourPower;\nfloat Saturation;\nfloat3 PerChannelPower;\nfloat3 DesaturatedColour;\n\n#if USE_COLORGRADING\nsampler2D ColorGradingLUT;\n#endif\n\nstatic const half3 LuminanceVector = float3(0.3, 0.59, 0.11);\n\nhalf3 ToneMap(float3 WorldColour)\n{\n	half fAdaptedLuminance = tex2D(AdaptedLuminance, float2(0.5f, 0.5f)).r;\n	half Lworld = dot(WorldColour, LuminanceVector);\n	half Exposure = MiddleGrey / (fAdaptedLuminance + 0.001f);\n	half Ladapted = Lworld * Exposure;\n	half Ldisplay = (Ladapted * (1 + Ladapted / (Lwhite * Lwhite))) / (1.0f + Ladapted);\n	return WorldColour * Ldisplay / (Lworld + 0.0001);\n}\n\nhalf3 ColourAdjust(half3 InColour)\n{\n	half3 Result = InColour;\n	Result = saturate(Result);\n	Result = lerp(dot(Result, LuminanceVector) * DesaturatedColour, Result, Saturation);\n	Result = Result - Contrast * (Result - 1) * Result * (Result - 0.5);\n	Result = Result + Brightness;\n	return Result;\n}\n\nvoid Main(in float2 UV : TEXCOORD0,in float2 SceneUV : TEXCOORD1,out float4 OutColor : COLOR0)\n{\n	half4 rawColor = tex2D(BlurredImage,UV);\n	float3 filteredColor = MAX_SCENE_COLOR * rawColor.rgb * BloomPostScale;\n	float4 sceneColor=tex2D(SceneColorTexture,SceneUV);\n	float3 BloomResult = 1-(saturate(1-(filteredColor.rgb*BloomAlpha))*saturate(1-lerp(sceneColor.rgb, 0, BloomAlpha*saturate(rawColor.a*4))));\n	half3 ToneMappedColour = ToneMap(BloomResult);\n	#if USE_COLORGRADING\n	half3 AdjustedColour = ColorLookupTable(ColorGradingLUT, ToneMappedColour);\n	#else\n	half3 AdjustedColour = ColourAdjust(ToneMappedColour);\n	#endif \n	OutColor = float4(AdjustedColour, sceneColor.a);\n}\n\n");
		fclose(file);
		Logger(lINFO, "Update_ShaderFile()", "Shader file updated");
	}
	else Logger(lERROR, "Update_ShaderFile()", "Shader file failed to open");
}

void Patch_EditorCrash()
{
	CPatcher::InstallNopPatch(0x11BA68C3);
	CPatcher::InstallNopPatch(0x11BA68C8);
	CPatcher::InstallRetnPatch(0x1211CB86);
	Logger(lINFO, "Patch_EditorCrash()", "Editor crash patched");
}

void* Patch_APB::Hook() 
{
	char* path = new char[512];
	GetModuleFileNameA(NULL, path, 512);
	Logger(lINFO, "APB path", "%s", path);
	char* newloc = new char[512];
	int count = 0;
	for(int i = 0; i != strlen(path); i++) 
	{
		if(path[i] == '\\' ) count++;
		if(count == 4) 
		{
			newloc[i] = NULL;
			break;
		}
		newloc[i] = path[i];
	}
	Logger(lINFO, "Game folder", "%s", newloc);
	if(CustomArgs::disableeulatos == false) Update_EULAandTOS(newloc);
	if(CustomArgs::disableini == false) Update_GameFiles(newloc);
	if(CustomArgs::allowshadermod == false) Update_ShaderFile(newloc);
	if(CustomArgs::fixeditorcrash == true) Patch_EditorCrash();
	Logger(lSUCCESS, "APB", "All patches/updates applied");
	return 0;
}

