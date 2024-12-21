.set LOCALID_KINGLER_MASTER, 7
.set TRAINER, VAR_0x8009

SilphCo_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
	.byte 0

SilphCo_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
	goto SilphCo_1F_MapScript_SetMasterTrainerMovementTypes
	end

SilphCo_1F_MapScript_SetMasterTrainerMovementTypes::
	setvar TRAINER, MASTER_KINGLER
	callnative ShouldChangeMasterTrainerMovementType
	call_if_eq VAR_RESULT, FALSE, SilphCo_1F_MapScript_KinglerMasterMovementType
	end

SilphCo_1F_MapScript_KinglerMasterMovementType::
	setobjectmovementtype LOCALID_KINGLER_MASTER, MOVEMENT_TYPE_RAISE_HAND_AND_STOP
	return

SilphCo_1F_EventScript_Receptionist::
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
	end

SilphCo_1F_EventScript_FloorSign::
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_1F_EventScript_CouchWoman::
	msgbox SilphCo_1F_Text_CouchWoman, MSGBOX_NPC
	end

SilphCo_1F_Text_CouchWoman:
	.string "J'ai été capturé par la TEAM ROCKET.\p"
	.string "Je me demande si notre assurance\n"
	.string "couvre ce genre de choses…?$"

SilphCo_1F_EventScript_CouchMan::
	msgbox SilphCo_1F_Text_CouchMan, MSGBOX_NPC
	end

SilphCo_1F_Text_CouchMan:
	.string "J'ai entendu dire que celui qui a\n"
	.string "vaincu la TEAM ROCKET est un enfant!\p"
	.string "Attends, c'est toi…?\n"
	.string "Non, non, c'est pas possible…$"

SilphCo_1F_EventScript_FountainMan::
	msgbox SilphCo_1F_Text_FountainMan, MSGBOX_NPC
	end

SilphCo_1F_Text_FountainMan:
	.string "Chaque invention peut être utilisée\n"
	.string "pour faire le bien ou le mal.\p"
	.string "Je me demande ce qui serait arrivé\n"
	.string "si la TEAM ROCKET avait mis la main\l"
	.string "sur les technologies de la SYLPHE…$"

SilphCo_1F_EventScript_CushionMan::
	msgbox SilphCo_1F_Text_CushionMan, MSGBOX_NPC
	end

SilphCo_1F_Text_CushionMan:
	.string "J'étais parti me la couler douce\n"
	.string "et quand je suis revenu le SYLPHE\l"
	.string "était tombée!\l"
	.string "C'était une très grosse surprise.$"

SilphCo_1F_EventScript_WalkingWoman::
	msgbox SilphCo_1F_Text_WalkingWoman, MSGBOX_NPC
	end

SilphCo_1F_Text_WalkingWoman:
	.string "Nous avons beaucoup de travail à\n"
	.string "rattrapé maintenant!$"

SilphCo_1F_EventScript_Painting::
	goto_if_unset FLAG_HIDE_SAFFRON_CIVILIANS, SilphCo_1F_EventScript_NewPainting
	msgbox Text_Painting, MSGBOX_SIGN
	end

SilphCo_1F_EventScript_NewPainting::
	msgbox SilphCo_1F_Text_NewPainting, MSGBOX_SIGN
	end

SilphCo_1F_Text_NewPainting:
	.string "C'est une magnifique peinture d'une\n"
	.string "cabane dans un champ de fleurs.$"
