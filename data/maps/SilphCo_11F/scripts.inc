.set LOCALID_GIOVANNI, 3
.set LOCALID_GRUNT1,   4
.set LOCALID_GRUNT2,   6
.set LOCALID_WORKERM,  7
.set LOCALID_WIGGLYTUFF_MASTER, 9
.set TRAINER, VAR_0x8009

SilphCo_11F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_11F_MapScript_SetMasterTrainerMovementTypes
	.byte 0

SilphCo_11F_MapScript_SetMasterTrainerMovementTypes::
	setvar TRAINER, MASTER_WIGGLYTUFF
	callnative ShouldChangeMasterTrainerMovementType
	call_if_eq VAR_RESULT, FALSE, SilphCo_11F_MapScript_WigglytuffMasterMovementType
	end

SilphCo_11F_MapScript_WigglytuffMasterMovementType::
	setobjectmovementtype LOCALID_WIGGLYTUFF_MASTER, MOVEMENT_TYPE_RAISE_HAND_AND_STOP
	return

SilphCo_11F_OnLoad::
	call_if_unset FLAG_SILPH_11F_DOOR, EventScript_Close11FDoor
	end

SilphCo_11F_EventScript_President::
	lock
	faceplayer
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_AlreadyGotMasterBall
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SilphCo_11F_EventScript_PresidentThanksMale
	call_if_eq VAR_RESULT, FEMALE, SilphCo_11F_EventScript_PresidentThanksFemale
	checkitemspace ITEM_MASTER_BALL
	goto_if_eq VAR_RESULT, FALSE, SilphCo_11F_EventScript_NoRoomForMasterBall
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_OBTAIN_KEY_ITEM
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
	release
	end

SilphCo_11F_EventScript_PresidentThanksMale::
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
	return

SilphCo_11F_EventScript_PresidentThanksFemale::
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
	return

SilphCo_11F_EventScript_NoRoomForMasterBall::
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
	release
	end

SilphCo_11F_EventScript_AlreadyGotMasterBall::
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
	release
	end

SilphCo_11F_EventScript_Secretary::
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
	end

SilphCo_11F_EventScript_GiovanniTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto SilphCo_11F_EventScript_BattleGiovanni
	end

SilphCo_11F_EventScript_GiovanniTriggerRight::
	lockall
	setvar VAR_TEMP_1, 1
	goto SilphCo_11F_EventScript_BattleGiovanni
	end

SilphCo_11F_EventScript_BattleGiovanni::
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 25
	msgbox SilphCo_11F_Text_GiovanniIntro
	closemessage
	call_if_eq VAR_TEMP_1, 0, SilphCo_11F_EventScript_GiovanniApproachLeft
	call_if_eq VAR_TEMP_1, 1, SilphCo_11F_EventScript_GiovanniApproachRight
	setvar VAR_LAST_TALKED, LOCALID_GIOVANNI
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
	msgbox SilphCo_11F_Text_GiovanniPostBattle
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_GIOVANNI
	removeobject LOCALID_GRUNT1
	removeobject LOCALID_GRUNT2
	playbgm MUS_GSC_PEWTER 0
	addobject LOCALID_WORKERM
	fadescreen FADE_FROM_BLACK
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
	setflag FLAG_HIDE_SAFFRON_ROCKETS
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
	releaseall
	end

SilphCo_11F_EventScript_GiovanniApproachLeft::
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
	applymovement OBJ_EVENT_ID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
	waitmovement 0
	return

SilphCo_11F_EventScript_GiovanniApproachRight::
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
	waitmovement 0
	return

SilphCo_11F_Movement_GiovanniApproachLeft::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

SilphCo_11F_Movement_GiovanniApproachRight::
	walk_down
	walk_down
	walk_down
	step_end

SilphCo_11F_Movement_PlayerFaceGiovanni::
	delay_16
	delay_16
	delay_16
	delay_8
	delay_4
	walk_in_place_faster_right
	step_end

@ Unused
SilphCo_11F_EventScript_Monitor::
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
	end

SilphCo_11F_EventScript_FloorSign::
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_11F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_11F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_11F_EventScript_WorkerM::
	msgbox SilphCo_11F_Text_WorkerM, MSGBOX_NPC
	end

SilphCo_11F_Text_WorkerM:
	.string "Excusez-moi!\p"
	.string "Vous avez un rendez-vous avec\n"
	.string "le PRESIDENT?\p"
	.string "Oh, {PLAYER}!\n"
	.string "Désolé, tu peux passer.$"

SilphCo_11F_EventScript_DevonSpy::
	call_if_unset FLAG_MET_DEVON_SPY, SilphCo_11F_EventScript_DevonSpyFirstTime
	goto_if_questlog EventScript_ReleaseEnd
	msgbox SilphCo_11F_Text_DevonSpy
	release
	faceplayer
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 8, Common_Movement_Delay48
	waitmovement 0
	lock
	message SilphCo_11F_Text_DevonSpyYoureBack
	waitmessage
	pokemart SilphCo_11F_DevonSpy_Items
	msgbox SilphCo_11F_Text_DevonSpyComeBackLater
	release
	turnobject 8, DIR_WEST
	end

SilphCo_11F_EventScript_DevonSpyFirstTime::
	msgbox SilphCo_11F_Text_DevonSpyFirstTime
	release
	faceplayer
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 8, Common_Movement_Delay48
	waitmovement 0
	msgbox SilphCo_11F_Text_Explain, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SilphCo_11F_EventScript_DevonSpyFirstTimeNo
SilphCo_11F_EventScript_DevonSpyFirstTimeYes::
	setflag FLAG_MET_DEVON_SPY
	goto_if_questlog EventScript_ReleaseEnd
	lock
	message SilphCo_11F_Text_DevonSpyAccepted
	waitmessage
	pokemart SilphCo_11F_DevonSpy_Items
	msgbox SilphCo_11F_Text_DevonSpyComeBackLater
	release
	turnobject 8, DIR_WEST
	end

	.align 2
SilphCo_11F_DevonSpy_Items::
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NONE
	release
	end

SilphCo_11F_EventScript_DevonSpyFirstTimeNo::
	msgbox SilphCo_11F_Text_DevonSpyComeOn, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SilphCo_11F_EventScript_DevonSpyFirstTimeNo
	goto SilphCo_11F_EventScript_DevonSpyFirstTimeYes

SilphCo_11F_Text_DevonSpy:
	.string "POKé… TEAR?\n"
	.string "Les DRESSEURS peuvent fabriquer des\l"
	.string "poupée n'importe ou…?$"

SilphCo_11F_Text_DevonSpyYoureBack:
	.string "Ah!\p"
	.string "J-Je vérifie juste si le murs sont\n"
	.string "robustes!\p"
	.string "Oh, c'est encore toi.\p"
	.string "J'ai les POKéBALL importées.\n"
	.string "Si jamais tu as de l'argent.$"

SilphCo_11F_Text_DevonSpyFirstTime:
	.string "Réussir à développer le projet\n"
	.string "MASTER BALL était un grand succès…\p"
	.string "Le nouveau projet sera pour sûr\n"
	.string "très rémunérateur!$"

SilphCo_11F_Text_Explain:
	.string "Ah!\p"
	.string "T'es arrivé d'où?\p"
	.string "Attend! Ce n'est pas ce que tu crois!\n"
	.string "Je ne suis pas avec la TEAM ROCKET!\p"
	.string "Je travaille pour la SYLPHE, mais\n"
	.string "pour une autre entreprise loin\l"
	.string "d'ici.\p"
	.string "Ils me payent pour récupérer des\n"
	.string "infos sur les produits de la SYLPHE.\p"
	.string "Ecoute, j'ai eu pas mal de succès\n"
	.string "ici, et je vais te payer pour que\l"
	.string "tu gardes le silence.\p"
	.string "Ou bien, te vendre des produits\n"
	.string "pour des prix préférentiels.\p"
	.string "J'ai des POKé BALLS spéciale\n"
	.string "importée de mon autre entreprise.\p"
	.string "Je te les vendrais très peu cher si\n"
	.string "tu promets de garder le silence.$"

SilphCo_11F_Text_DevonSpyComeOn:
	.string "Oh s'il te plait.\n"
	.string "Aides-moi, aides-moi.$"

SilphCo_11F_Text_DevonSpyAccepted:
	.string "Excellent!\n"
	.string "Tu vas adorer ces POKé BALLS.\p"
	.string "Les voici, alors laquelle\n"
	.string "d'entre elles t'intéresse?$"

SilphCo_11F_Text_DevonSpyComeBackLater:
	.string "Je continuerais de te les vendre\n"
	.string "aussi longtemps que tu garderas\p"
	.string "le silence.$"
