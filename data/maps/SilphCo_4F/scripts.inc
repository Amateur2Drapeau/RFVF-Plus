.set LOCALID_MACHOP_MASTER, 13
.set TRAINER, VAR_0x8009

SilphCo_4F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_4F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_4F_MapScript_SetMasterTrainerMovementTypes
	.byte 0

SilphCo_4F_MapScript_SetMasterTrainerMovementTypes::
	setvar TRAINER, MASTER_MACHOP
	callnative ShouldChangeMasterTrainerMovementType
	call_if_eq VAR_RESULT, FALSE, SilphCo_4F_MapScript_MachopMasterMovementType
	end

SilphCo_4F_MapScript_MachopMasterMovementType::
	setobjectmovementtype LOCALID_MACHOP_MASTER, MOVEMENT_TYPE_RAISE_HAND_AND_STOP
	return

SilphCo_4F_OnLoad::
	call_if_unset FLAG_SILPH_4F_DOOR_1, EventScript_Close4FDoor1
	call_if_unset FLAG_SILPH_4F_DOOR_2, EventScript_Close4FDoor2
	end

SilphCo_4F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_4F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_4F_Text_CantYouSeeImHiding
	release
	end

SilphCo_4F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_4F_Text_TeamRocketIsGone
	release
	end

SilphCo_4F_EventScript_FloorSign::
	msgbox SilphCo_4F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_4F_EventScript_Rodney::
	trainerbattle_single TRAINER_SCIENTIST_RODNEY, SilphCo_4F_Text_RodneyIntro, SilphCo_4F_Text_RodneyDefeat
	msgbox SilphCo_4F_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_4F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_26, SilphCo_4F_Text_Grunt1Intro, SilphCo_4F_Text_Grunt1Defeat
	msgbox SilphCo_4F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_4F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_27, SilphCo_4F_Text_Grunt2Intro, SilphCo_4F_Text_Grunt2Defeat
	msgbox SilphCo_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_4F_EventScript_BaldingMan::
	msgbox SilphCo_4F_Text_BaldingMan, MSGBOX_NPC
	end

SilphCo_4F_Text_BaldingMan:
	.string "Mes collègues ramènent toujours\n"
	.string "de la nourriture très odorante.\p"
	.string "J'aimerais qu'ils prennent leurs\n"
	.string "pauses déjeuner ailleurs.$"

SilphCo_4F_EventScript_WorkerF::
	msgbox SilphCo_4F_Text_WorkerF, MSGBOX_NPC
	end

SilphCo_4F_Text_WorkerF:
	.string "De toi à moi, j’essaye d’impressionner\n"
	.string "mon collègue.\p"
	.string "Il va être promu, et je veux être\n"
	.string "la première personne à laquelle il\l"
	.string "pensera quand il offrira une promotion!$"

SilphCo_4F_EventScript_WorkerM2::
	msgbox SilphCo_4F_Text_WorkerM2, MSGBOX_NPC
	end

SilphCo_4F_Text_WorkerM2:
	.string "Je suis en pause, là.\n"
	.string "Je peux pas te montrer les bureaux.$"

SilphCo_4F_EventScript_Scientist::
	msgbox SilphCo_4F_Text_Scientist, MSGBOX_NPC
	end

SilphCo_4F_Text_Scientist:
	.string "Quoi ? Pourquoi tu me regardes\n"
	.string "comme ça?\p"
	.string "Il y avait un scientifique de la\n"
	.string "TEAM ROCKET durant la prise d’otage?\p"
	.string "Mais ce n’est évidemment pas moi.\n"
	.string "On ne se ressemble pas du tout.$"

SilphCo_4F_EventScript_Painting::
	goto_if_unset FLAG_HIDE_SAFFRON_CIVILIANS, SilphCo_4F_EventScript_NewPainting
	msgbox Text_Painting, MSGBOX_SIGN
	end

SilphCo_4F_EventScript_NewPainting::
	msgbox SilphCo_4F_Text_NewPainting, MSGBOX_SIGN
	end

SilphCo_4F_Text_NewPainting:
	.string "C’est une magnifique peinture\n"
	.string "d’un POKéMON qui nage sous la mer.$"
