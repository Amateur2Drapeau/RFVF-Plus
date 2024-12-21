.equ LOCALID_BROCK, 1
.equ LOCALID_MISTY, 2
.equ LOCALID_LT_SURGE, 3
.equ LOCALID_ERIKA, 4
.equ LOCALID_KOGA, 5
.equ LOCALID_SABRINA, 6
.equ LOCALID_BLAINE, 7

.equ SET_SPEAROW_STATE, 0
.equ SET_TOLD_FAMECHECKER, 1
.equ SET_VISITOR_STATE, 2
.equ SET_LEVEL_GROWTH, 3
.equ CHECK_SPEAROW_STATE, 4
.equ CHECK_TOLD_FAMECHECKER, 5
.equ CHECK_VISITOR_STATE, 6
.equ CHECK_LEVEL_GROWTH, 7
.equ SET_BOXES_MOVED, 8
.equ CHECK_BOXES_MOVED, 9

.equ TYPE, VAR_TEMP_3
.equ ARGUMENT, VAR_TEMP_4
.equ LEADER_READY, VAR_TEMP_6
.equ X_COORD, VAR_TEMP_7
.equ Y_COORD, VAR_TEMP_8

SevenIsland_House_Room2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room2_OnTransition
	.byte 0

SevenIsland_House_Room2_OnTransition::
	setvar TYPE, CHECK_VISITOR_STATE
	setvar ARGUMENT, FAMECHECKER_BROCK
	callnative UseBattleHouseVar
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room2_HideBrock
	setvar ARGUMENT, FAMECHECKER_MISTY
	callnative UseBattleHouseVar
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room2_HideMisty
	setvar ARGUMENT, FAMECHECKER_LTSURGE
	callnative UseBattleHouseVar
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room2_HideLtSurge
	setvar ARGUMENT, FAMECHECKER_ERIKA
	callnative UseBattleHouseVar
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room2_HideErika
	setvar ARGUMENT, FAMECHECKER_KOGA
	callnative UseBattleHouseVar
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room2_HideKoga
	setvar ARGUMENT, FAMECHECKER_SABRINA
	callnative UseBattleHouseVar
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room2_HideSabrina
	setvar ARGUMENT, FAMECHECKER_BLAINE
	callnative UseBattleHouseVar
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room2_HideBlaine
	end

SevenIsland_House_Room2_HideBrock::
	setflag FLAG_TEMP_1
	return

SevenIsland_House_Room2_HideMisty::
	setflag FLAG_TEMP_2
	return

SevenIsland_House_Room2_HideLtSurge::
	setflag FLAG_TEMP_3
	return

SevenIsland_House_Room2_HideErika::
	setflag FLAG_TEMP_4
	return

SevenIsland_House_Room2_HideKoga::
	setflag FLAG_TEMP_5
	return

SevenIsland_House_Room2_HideSabrina::
	setflag FLAG_TEMP_6
	return

SevenIsland_House_Room2_HideBlaine::
	setflag FLAG_TEMP_7
	return	
	
SevenIsland_House_Room2_EventScript_LeftPainting::
	msgbox SevenIsland_House_Room2_Text_LeftPainting, MSGBOX_SIGN
	end

SevenIsland_House_Room2_Text_LeftPainting::
	.string "C'est une photo d'une jeune femme.\n"
	.string "Elle est entourée par de joyeux\l"
	.string "et puissants POKéMON.$"

SevenIsland_House_Room2_EventScript_MiddlePainting::
	msgbox SevenIsland_House_Room2_Text_MiddlePainting, MSGBOX_SIGN
	end

SevenIsland_House_Room2_Text_MiddlePainting::
	.string "C'est une photo d'une jeune femme,\n"
	.string "un PIAFABEC perché sur son bras.$"

SevenIsland_House_Room2_EventScript_RightPainting::
	call_if_eq VAR_STARTER_MON, 0, SevenIsland_House_Room2_EventScript_BufferBulbasaur
	call_if_eq VAR_STARTER_MON, 1, SevenIsland_House_Room2_EventScript_BufferSquirtle
	call_if_ge VAR_STARTER_MON, 2, SevenIsland_House_Room2_EventScript_BufferCharmander
	msgbox SevenIsland_House_Room2_Text_RightPainting, MSGBOX_SIGN
	end

SevenIsland_House_Room2_Text_RightPainting::
	.string "C'est une photo d'un combat de DRESSEURS.\p"
	.string "Une jeune femme ordonnant à un\n"
	.string "{STR_VAR_1} d'attaque le\l"
	.string "{STR_VAR_2} de son adversaire.\p"
	.string "Un PIAFABEC observe le combat\n"
	.string "en même temps.$"

SevenIsland_House_Room2_EventScript_BufferBulbasaur::
	bufferspeciesname STR_VAR_1, SPECIES_VENUSAUR
	bufferspeciesname STR_VAR_2, SPECIES_CHARIZARD
	return

SevenIsland_House_Room2_EventScript_BufferSquirtle::
	bufferspeciesname STR_VAR_1, SPECIES_BLASTOISE
	bufferspeciesname STR_VAR_2, SPECIES_VENUSAUR
	return

SevenIsland_House_Room2_EventScript_BufferCharmander::
	bufferspeciesname STR_VAR_1, SPECIES_CHARIZARD
	bufferspeciesname STR_VAR_2, SPECIES_BLASTOISE
	return

SevenIsland_House_Room2_EventScript_HealingMachine::
	msgbox SevenIsland_House_Room2_Text_HealPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SevenIsland_House_Room2_EventScript_HealPokemon
	release
	end

SevenIsland_House_Room2_Text_HealPokemon::
	.string "Utiliser la machine pour soigner\n"
	.string "tes POKéMON?$"

SevenIsland_House_Room2_EventScript_HealPokemon::
	release
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 24
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	special HealPlayerParty
	release
	end

SevenIsland_House_Room2_Eventscript_Trigger::
	goto_if_eq LEADER_READY, 0, EventScript_ReleaseEnd
	applymovement OBJ_EVENT_ID_PLAYER, SevenIsland_House_Room2_Movement_StepFastestRight
	waitmovement 0
	switch LEADER_READY
	case LOCALID_BROCK, SevenIsland_House_Room2_Eventscript_BrockBattle
	case LOCALID_MISTY, SevenIsland_House_Room2_Eventscript_MistyBattle
	case LOCALID_LT_SURGE, SevenIsland_House_Room2_Eventscript_LtSurgeBattle
	case LOCALID_ERIKA, SevenIsland_House_Room2_Eventscript_ErikaBattle
	case LOCALID_KOGA, SevenIsland_House_Room2_Eventscript_KogaBattle
	case LOCALID_SABRINA, SevenIsland_House_Room2_Eventscript_SabrinaBattle
	case LOCALID_BLAINE, SevenIsland_House_Room2_Eventscript_BlaineBattle
	release
	end

@ LEADER BROCK
SevenIsland_House_Room2_Eventscript_Brock::
	lock
	faceplayer
	goto_if_eq LEADER_READY, 1, SevenIsland_House_Room2_Eventscript_BrockReady
	goto_if_ne LEADER_READY, 0, SevenIsland_House_Room2_Eventscript_BrockOtherLeaderReady
	msgbox SevenIsland_House_Room2_Text_Brock_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SevenIsland_House_Room2_Eventscript_BrockDeclined
	closemessage
	getplayerxy X_COORD, Y_COORD
	call_if_eq Y_COORD, 6, SevenIsland_House_Room2_Eventscript_MoveBrockDown
	call_if_ne Y_COORD, 6, SevenIsland_House_Room2_Eventscript_MoveBrockLeft
	applymovement LOCALID_BROCK, SevenIsland_House_Room2_Movement_BrockToMat
	waitmovement 0
	setobjectxyperm LOCALID_BROCK, 7, 5
	setobjectmovementtypeinstant LOCALID_BROCK, MOVEMENT_TYPE_FACE_LEFT
	setvar LEADER_READY, LOCALID_BROCK
	msgbox SevenIsland_House_Room2_Text_BrockSquareUp, MSGBOX_DEFAULT 
	release
	end

SevenIsland_House_Room2_Text_Brock_Intro:
	.string "PIERRE: …Tu as bien changé\n"
	.string "depuis notre première rencontre!\p"
	.string "J'ai une faveur à te demander\n"
	.string "vu que tu es le MAITRE de la LIGUE.\p"
	.string "En réalité, les CHAMPIONS ont le\n"
	.string "droit de défier le MAITRE!\p"
	.string "…S'il te plait, donne moi la chance\n"
	.string "de me mesurer à toi une nouvelle fois!\p"
	.string "Laisse-moi te montrer la vraie\n"
	.string "puissance de mes POKéMON roche!$"

SevenIsland_House_Room2_Text_BrockSquareUp:
	.string "PIERRE: Prends place et commençons\n"
	.string "notre combat!$"

SevenIsland_House_Room2_Eventscript_BrockReady:
	msgbox SevenIsland_House_Room2_Text_BrockSquareUp, MSGBOX_DEFAULT
	release
	getplayerxy X_COORD, Y_COORD
	call_if_eq X_COORD, 6, SevenIsland_House_Room2_Eventscript_CheckInFront
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	release
	end

SevenIsland_House_Room2_Eventscript_BrockOtherLeaderReady:
	msgbox SevenIsland_House_Room2_Text_BrockOtherLeader, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_BrockOtherLeader:
	.string "PIERRE: Ne sous-estime pas les autres\n"
	.string "CHAMPIONS, {PLAYER}.\p"
	.string "Nous utiliserons nos meilleurs POKéMON\n"
	.string "contre le MAITRE de la LIGUE POKéMON!$"

SevenIsland_House_Room2_Eventscript_BrockDeclined::
	msgbox SevenIsland_House_Room2_Text_Brock_Declined, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_Brock_Declined:
	.string "Mes POKéMON et moi allons continuer\n"
	.string "de nous entraîner pour rester affûtés!$"

SevenIsland_House_Room2_Eventscript_MoveBrockDown:
	applymovement LOCALID_BROCK, SevenIsland_House_Room2_Movement_BrockAroundPlayer
	waitmovement 0
	return

SevenIsland_House_Room2_Eventscript_MoveBrockLeft:
	applymovement LOCALID_BROCK, SevenIsland_House_Room2_Movement_BrockRight
	waitmovement 0
	return

SevenIsland_House_Room2_Movement_BrockAroundPlayer:
	walk_down
	walk_right
	walk_right
	walk_up
	step_end

SevenIsland_House_Room2_Movement_BrockRight:
	walk_right
	walk_right
	step_end

SevenIsland_House_Room2_Movement_BrockToMat:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Eventscript_BrockBattle:
	setvar TYPE, SET_VISITOR_STATE
	setvar ARGUMENT, FAMECHECKER_BROCK
	callnative UseBattleHouseVar
	applymovement LOCALID_BROCK, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 0
	msgbox SevenIsland_House_Room2_Text_BrockBeforeBattle, MSGBOX_DEFAULT
	release
	callnative IsChallengeModeToVarResult
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_House_Room2_Eventscript_ChallengeBrockBattle
	trainerbattle_no_intro TRAINER_BROCK_REMATCH, SevenIsland_House_Room2_Text_BrockLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_BrockExit
	release
	end

SevenIsland_House_Room2_Text_BrockBeforeBattle:
	.string "PIERRE: Peu importe ce que tu feras,\n"
	.string "mes POKéMON roche vont te compliquer\l"
	.string "la tache!\p"
	.string "C'est ma promesse à moi et ma\n"
	.string "volonté de fer!$"

SevenIsland_House_Room2_Text_BrockLoss:
	.string "PIERRE: Je savais que tu serais fort,\n"
	.string "mais pas à ce point…$"

SevenIsland_House_Room2_Eventscript_ChallengeBrockBattle:
	trainerbattle_no_intro TRAINER_BROCK_REMATCH_CHALLENGE, SevenIsland_House_Room2_Text_BrockLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_BrockExit
	release
	end

SevenIsland_House_Room2_Eventscript_BrockExit:
	applymovement LOCALID_BROCK, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 0
	msgbox SevenIsland_House_Room2_Text_BrockExit, MSGBOX_DEFAULT
	release
	applymovement LOCALID_BROCK, SevenIsland_House_Room2_Movement_LeaderExits
	waitmovement 0
	playse SE_EXIT
	setvar LEADER_READY, 0
	removeobject LOCALID_BROCK
	release
	end

SevenIsland_House_Room2_Text_BrockExit:
	.string "PIERRE: J'ai de nouveaux objectifs.\n"
	.string "J'ai choisi de repousser l'échéance.\p"
	.string "Mais maintenant j'ai besoin de\n"
	.string "m'entraîner pour devenir plus fort\l"
	.string "et un jour te battre!\p"
	.string "Je vais retourner à mon ARENE.\n"
	.string "Et me préparer pour notre prochain match.$"

@ LEADER MISTY
SevenIsland_House_Room2_Eventscript_Misty::
	lock
	faceplayer
	goto_if_eq LEADER_READY, 2, SevenIsland_House_Room2_Eventscript_MistyReady
	goto_if_ne LEADER_READY, 0, SevenIsland_House_Room2_Eventscript_MistyOtherLeaderReady
	msgbox SevenIsland_House_Room2_Text_Misty_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SevenIsland_House_Room2_Eventscript_MistyDeclined
	closemessage
	getplayerxy X_COORD, Y_COORD
	call_if_eq Y_COORD, 3, SevenIsland_House_Room2_Eventscript_MoveMistyRight
	call_if_ne Y_COORD, 3, SevenIsland_House_Room2_Eventscript_MoveMistyDown
	setobjectxyperm LOCALID_MISTY, 7, 5
	setobjectmovementtypeinstant LOCALID_MISTY, MOVEMENT_TYPE_FACE_LEFT
	setvar LEADER_READY, LOCALID_MISTY
	msgbox SevenIsland_House_Room2_Text_MistySquareUp, MSGBOX_DEFAULT 
	release
	end

SevenIsland_House_Room2_Text_Misty_Intro:
	.string "ONDINE: J'ai entendu une drôle\n"
	.string "de rumeur!\p"
	.string "Non seulement tu as vaincu la\n"
	.string "TEAM ROCKET, mais en plus tu as\l"
	.string "vaincu l'autre DRESSEUR du BOURG\l"
	.string "PALETTE pour devenir le MAITRE!\p"
	.string "Argh!\n"
	.string "Je n'en peux plus!\p"
	.string "J'ai vraiment besoin de me mesurer\n"
	.string "à toi une nouvelle fois!\l"
	.string "T'as compris? T'as pas le choix!$"

SevenIsland_House_Room2_Text_MistySquareUp:
	.string "ONDINE: Met toi en face\n"
	.string "et commençons!$"

SevenIsland_House_Room2_Eventscript_MistyReady:
	msgbox SevenIsland_House_Room2_Text_MistySquareUp, MSGBOX_DEFAULT
	release
	getplayerxy X_COORD, Y_COORD
	call_if_eq X_COORD, 6, SevenIsland_House_Room2_Eventscript_CheckInFront
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	release
	end

SevenIsland_House_Room2_Eventscript_MistyOtherLeaderReady:
	msgbox SevenIsland_House_Room2_Text_MistyOtherLeader, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_MistyOtherLeader:
	.string "ONDINE: La dame au dessus n'est pas\n"
	.string "la seule qui aime regarder des combats.\p"
	.string "J'espère que tu vas utiliser des POKéMON\n"
	.string "eau pour voir comment tu les utilises!$"

SevenIsland_House_Room2_Eventscript_MistyDeclined::
	msgbox SevenIsland_House_Room2_Text_Misty_Declined, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_Misty_Declined:
	.string "J'ai dis que tu n'avais pas le choix!\n"
	.string "Argh, bon ok…\p"
	.string "Mon nouvel objectif est de m'entraîner\n"
	.string "pour te battre!\p"
	.string "Quand nous combattrons je te\n"
	.string "surpasserais!$"

SevenIsland_House_Room2_Eventscript_MoveMistyRight:
	applymovement LOCALID_MISTY, SevenIsland_House_Room2_Movement_MistyAroundPlayer
	waitmovement 0
	return

SevenIsland_House_Room2_Eventscript_MoveMistyDown:
	applymovement LOCALID_MISTY, SevenIsland_House_Room2_Movement_MistyDownToMat
	waitmovement 0
	return

SevenIsland_House_Room2_Movement_MistyAroundPlayer:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Movement_MistyDownToMat:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Eventscript_MistyBattle:
	setvar TYPE, SET_VISITOR_STATE
	setvar ARGUMENT, FAMECHECKER_MISTY
	callnative UseBattleHouseVar
	applymovement LOCALID_MISTY, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 1
	msgbox SevenIsland_House_Room2_Text_MistyBeforeBattle, MSGBOX_DEFAULT
	release
	callnative IsChallengeModeToVarResult
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_House_Room2_Eventscript_ChallengeMistyBattle
	trainerbattle_no_intro TRAINER_MISTY_REMATCH, SevenIsland_House_Room2_Text_MistyLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_MistyExit
	release
	end

SevenIsland_House_Room2_Text_MistyBeforeBattle:
	.string "ONDINE: Mes adorables POKéMON sont\n"
	.string "prêt pour te mettre à mal!\p"
	.string "Je vais te montrer le vraie puissance\n"
	.string "des POKéMON eau! Tu es prêt?$"

SevenIsland_House_Room2_Text_MistyLoss:
	.string "ONDINE: Hmph!\nMais non!$"

SevenIsland_House_Room2_Eventscript_ChallengeMistyBattle:
	trainerbattle_no_intro TRAINER_MISTY_REMATCH_CHALLENGE, SevenIsland_House_Room2_Text_MistyLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_MistyExit
	release
	end

SevenIsland_House_Room2_Eventscript_MistyExit:
	applymovement LOCALID_MISTY, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 1
	msgbox SevenIsland_House_Room2_Text_MistyExit, MSGBOX_DEFAULT
	release
	applymovement LOCALID_MISTY, SevenIsland_House_Room2_Movement_LeaderExits
	waitmovement 0
	playse SE_EXIT
	setvar LEADER_READY, 0
	removeobject LOCALID_MISTY
	release
	end

SevenIsland_House_Room2_Text_MistyExit:
	.string "ONDINE: J'ai perdu…\p"
	.string "Je vais aller faire une petite\n"
	.string "nage autour de mon ARENE pour\l"
	.string "me changer les idées.\p"
	.string "…Je ne perdrais pas la prochaine fois!$"

@ LEADER LTSURGE
SevenIsland_House_Room2_Eventscript_LtSurge::
	lock
	faceplayer
	goto_if_eq LEADER_READY, 3, SevenIsland_House_Room2_Eventscript_LtSurgeReady
	goto_if_ne LEADER_READY, 0, SevenIsland_House_Room2_Eventscript_LtSurgeOtherLeaderReady
	msgbox SevenIsland_House_Room2_Text_LtSurge_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SevenIsland_House_Room2_Eventscript_LtSurgeDeclined
	closemessage
	getplayerxy X_COORD, Y_COORD
	call_if_eq Y_COORD, 5, SevenIsland_House_Room2_Eventscript_MoveLtSurgeLeft
	call_if_ne Y_COORD, 5, SevenIsland_House_Room2_Eventscript_MoveLtSurgeDown
	setobjectxyperm LOCALID_LT_SURGE, 7, 5
	setobjectmovementtypeinstant LOCALID_LT_SURGE, MOVEMENT_TYPE_FACE_LEFT
	setvar LEADER_READY, LOCALID_LT_SURGE
	msgbox SevenIsland_House_Room2_Text_LtSurgeSquareUp, MSGBOX_DEFAULT 
	release
	end

SevenIsland_House_Room2_Text_LtSurge_Intro:
	.string "MAJOR BOB: Salut petit!\p"
	.string "J'ai été assez étonné de savoir\n"
	.string "que tu es devenu MAITRE de la LIGUE!\p"
	.string "Aucun doute, tu as dû utiliser\n"
	.string "POKéMON electrik pour y arriver!\p"
	.string "Très bien.\p"
	.string "Viens me montrer les POKéMON\n"
	.string "que tu as élevé pendant ton périple!$"

SevenIsland_House_Room2_Text_LtSurgeSquareUp:
	.string "MAJOR BOB: Gardes-à-vous soldat!\n"
	.string "Je vais terrasser tes POKéMON!$"

SevenIsland_House_Room2_Eventscript_LtSurgeReady:
	msgbox SevenIsland_House_Room2_Text_LtSurgeSquareUp, MSGBOX_DEFAULT
	release
	getplayerxy X_COORD, Y_COORD
	call_if_eq X_COORD, 6, SevenIsland_House_Room2_Eventscript_CheckInFront
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	release
	end

SevenIsland_House_Room2_Eventscript_LtSurgeOtherLeaderReady:
	msgbox SevenIsland_House_Room2_Text_LtSurgeOtherLeader, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_LtSurgeOtherLeader:
	.string "MAJOR BOB: Les autres CHAMPIONS\n"
	.string "n'ont peut être pas ma discipline,\l"
	.string "mais ils s'entraînent aussi durement.$"

SevenIsland_House_Room2_Eventscript_LtSurgeDeclined::
	msgbox SevenIsland_House_Room2_Text_LtSurge_Declined, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_LtSurge_Declined:
	.string "Hahaha!\n"
	.string "T'as eu peur qu'on te crame hein?\p"
	.string "Si nous continuons de s'entraîner\n"
	.string "ensemble, on deviendra invincible!$" 

SevenIsland_House_Room2_Eventscript_MoveLtSurgeLeft:
	applymovement LOCALID_LT_SURGE, SevenIsland_House_Room2_Movement_LtSurgeAroundPlayer
	waitmovement 0
	return

SevenIsland_House_Room2_Eventscript_MoveLtSurgeDown:
	applymovement LOCALID_LT_SURGE, SevenIsland_House_Room2_Movement_LtSurgeToMat
	waitmovement 0
	return

SevenIsland_House_Room2_Movement_LtSurgeAroundPlayer:
	walk_left
	walk_down
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Movement_LtSurgeToMat:
	walk_down
	walk_left
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Eventscript_LtSurgeBattle:
	setvar TYPE, SET_VISITOR_STATE
	setvar ARGUMENT, FAMECHECKER_LTSURGE
	callnative UseBattleHouseVar
	applymovement LOCALID_LT_SURGE, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 0
	msgbox SevenIsland_House_Room2_Text_LtSurgeBeforeBattle, MSGBOX_DEFAULT
	release
	callnative IsChallengeModeToVarResult
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_House_Room2_Eventscript_ChallengeLtSurgeBattle
	trainerbattle_no_intro TRAINER_LT_SURGE_REMATCH, SevenIsland_House_Room2_Text_LtSurgeLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_LtSurgeExit
	release
	end

SevenIsland_House_Room2_Text_LtSurgeBeforeBattle:
	.string "MAJOR BOB: Les DRESSEURS comme toi\n"
	.string "n'avons pas besoin de parler!\p"
	.string "En avant l'ami!$"

SevenIsland_House_Room2_Text_LtSurgeLoss:
	.string "MAJOR BOB: Electrisant!$"

SevenIsland_House_Room2_Eventscript_ChallengeLtSurgeBattle:
	trainerbattle_no_intro TRAINER_LT_SURGE_REMATCH_CHALLENGE, SevenIsland_House_Room2_Text_LtSurgeLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_LtSurgeExit
	release
	end

SevenIsland_House_Room2_Eventscript_LtSurgeExit:
	applymovement LOCALID_LT_SURGE, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 0
	msgbox SevenIsland_House_Room2_Text_LtSurgeExit, MSGBOX_DEFAULT
	release
	applymovement LOCALID_LT_SURGE, SevenIsland_House_Room2_Movement_LeaderExits
	waitmovement 0
	playse SE_EXIT
	setvar LEADER_READY, 0
	removeobject LOCALID_LT_SURGE
	release
	end

SevenIsland_House_Room2_Text_LtSurgeExit:
	.string "MAJOR BOB: On dirait qu'il y a toujours\n"
	.string "un gap entre toi et moi.\l"
	.string "J'ai besoin d'y remédier!\p"
	.string "C'est la première fois que je perds\n"
	.string "comme ça depuis mon départ!\p"
	.string "Je dois retourner à ma base.\n"
	.string "Je ne peux pas laisser mes troupes\l"
	.string "sans leur MAJOR!$"

@ LEADER ERIKA
SevenIsland_House_Room2_Eventscript_Erika::
	lock
	faceplayer
	goto_if_eq LEADER_READY, 4, SevenIsland_House_Room2_Eventscript_ErikaReady
	goto_if_ne LEADER_READY, 0, SevenIsland_House_Room2_Eventscript_ErikaOtherLeaderReady
	msgbox SevenIsland_House_Room2_Text_Erika_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SevenIsland_House_Room2_Eventscript_ErikaDeclined
	closemessage
	getplayerxy X_COORD, Y_COORD
	call_if_eq Y_COORD, 3, SevenIsland_House_Room2_Eventscript_MoveErikaRight
	call_if_ne Y_COORD, 3, SevenIsland_House_Room2_Eventscript_MoveErikaDown
	setobjectxyperm LOCALID_ERIKA, 7, 5
	setobjectmovementtypeinstant LOCALID_ERIKA, MOVEMENT_TYPE_FACE_LEFT
	setvar LEADER_READY, LOCALID_ERIKA
	msgbox SevenIsland_House_Room2_Text_ErikaSquareUp, MSGBOX_DEFAULT 
	release
	end

SevenIsland_House_Room2_Text_Erika_Intro:
	.string "ERIKA: Oh, mais ça serait pas la\n"
	.string "personne qui voulait compléter le POKéDEX.\p"
	.string "j'espère que tu as pu réussir ton\n"
	.string "objectif depuis notre dernière rencontre.\p"
	.string "…Je vois. Tu as certainement été occupé.\n"
	.string "Je ne suis pas très à l'aise dans le\l"
	.string "fait de me montrer en publique…\p"
	.string "Mais les combats c'est différent.\n"
	.string "C'est pour ça que tu es venu non?$"

SevenIsland_House_Room2_Text_ErikaSquareUp:
	.string "ERIKA: Place toi en face et\n"
	.string "commençons.$"

SevenIsland_House_Room2_Eventscript_ErikaReady:
	msgbox SevenIsland_House_Room2_Text_ErikaSquareUp, MSGBOX_DEFAULT
	release
	getplayerxy X_COORD, Y_COORD
	call_if_eq X_COORD, 6, SevenIsland_House_Room2_Eventscript_CheckInFront
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	release
	end

SevenIsland_House_Room2_Eventscript_ErikaOtherLeaderReady:
	msgbox SevenIsland_House_Room2_Text_ErikaOtherLeader, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_ErikaOtherLeader:
	.string "ERIKA: …Zzz…zzz…\n"
	.string "Oh, tu te prépare pour le combat?$"

SevenIsland_House_Room2_Eventscript_ErikaDeclined::
	msgbox SevenIsland_House_Room2_Text_Erika_Declined, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_Erika_Declined:
	.string "… … … …$"

SevenIsland_House_Room2_Eventscript_MoveErikaRight:
	applymovement LOCALID_ERIKA, SevenIsland_House_Room2_Movement_ErikaAroundPlayer
	waitmovement 0
	return

SevenIsland_House_Room2_Eventscript_MoveErikaDown:
	applymovement LOCALID_ERIKA, SevenIsland_House_Room2_Movement_ErikaDownToMat
	waitmovement 0
	return

SevenIsland_House_Room2_Movement_ErikaAroundPlayer:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Movement_ErikaDownToMat:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Eventscript_ErikaBattle:
	setvar TYPE, SET_VISITOR_STATE
	setvar ARGUMENT, FAMECHECKER_ERIKA
	callnative UseBattleHouseVar
	applymovement LOCALID_ERIKA, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 1
	msgbox SevenIsland_House_Room2_Text_ErikaBeforeBattle, MSGBOX_DEFAULT
	release
	callnative IsChallengeModeToVarResult
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_House_Room2_Eventscript_ChallengeErikaBattle
	trainerbattle_no_intro TRAINER_ERIKA_REMATCH, SevenIsland_House_Room2_Text_ErikaLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_ErikaExit
	release
	end

SevenIsland_House_Room2_Text_ErikaBeforeBattle:
	.string "ERIKA: J'accepte volontieux ton\n"
	.string "défi. Je ne perdrais pas!$"

SevenIsland_House_Room2_Text_ErikaLoss:
	.string "ERIKA: Oh!\n"
	.string "On dirait que j'ai perdu… … … …$"

SevenIsland_House_Room2_Eventscript_ChallengeErikaBattle:
	trainerbattle_no_intro TRAINER_ERIKA_REMATCH_CHALLENGE, SevenIsland_House_Room2_Text_ErikaLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_ErikaExit
	release
	end

SevenIsland_House_Room2_Eventscript_ErikaExit:
	applymovement LOCALID_ERIKA, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 1
	msgbox SevenIsland_House_Room2_Text_ErikaExit, MSGBOX_DEFAULT
	release
	applymovement LOCALID_ERIKA, SevenIsland_House_Room2_Movement_LeaderExits
	waitmovement 0
	playse SE_EXIT
	setvar LEADER_READY, 0
	removeobject LOCALID_ERIKA
	release
	end

SevenIsland_House_Room2_Text_ErikaExit:
	.string "ERIKA: Tout simplement incroyable.\p"
	.string "Ce combat valait au moins\n"
	.string "dix BADGES PRISME.\p"
	.string "Ce combat m'a beaucoup inspiré.\n"
	.string "Je dois retourner à CELADOPOLE pour\l"
	.string "m'occuper de mes plantes.\p"
	.string "…A la prochaine, {PLAYER}.$"

@ LEADER KOGA
SevenIsland_House_Room2_Eventscript_Koga::
	lock
	faceplayer
	goto_if_eq LEADER_READY, 5, SevenIsland_House_Room2_Eventscript_KogaReady
	goto_if_ne LEADER_READY, 0, SevenIsland_House_Room2_Eventscript_KogaOtherLeaderReady
	msgbox SevenIsland_House_Room2_Text_Koga_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SevenIsland_House_Room2_Eventscript_KogaDeclined
	closemessage
	getplayerxy X_COORD, Y_COORD
	call_if_eq Y_COORD, 7, SevenIsland_House_Room2_Eventscript_MoveKogaRight
	call_if_ne Y_COORD, 7, SevenIsland_House_Room2_Eventscript_MoveKogaUp
	setobjectxyperm LOCALID_KOGA, 7, 5
	setobjectmovementtypeinstant LOCALID_KOGA, MOVEMENT_TYPE_FACE_LEFT
	setvar LEADER_READY, LOCALID_KOGA
	msgbox SevenIsland_House_Room2_Text_KogaSquareUp, MSGBOX_DEFAULT 
	release
	end

SevenIsland_House_Room2_Text_Koga_Intro:
	.string "KOGA: Fwahahaha!\n"
	.string "Alors gamin.\p"
	.string "On dirait que le destin nous\n"
	.string "oppose à nouveau.\p"
	.string "Tu arrives pile au bon moment.\n"
	.string "Je voulais justement tester mes\l"
	.string "nouvelles techniques de l'ombre\l"
	.string "dans un combat.\l"
	.string "Prépare toi à perdre!\p"
	.string "Fwahahaha!\n"
	.string "Qu'est-ce que tu en dis?$"

SevenIsland_House_Room2_Text_KogaSquareUp:
	.string "KOGA: Prépare toi, gamin!$"

SevenIsland_House_Room2_Eventscript_KogaReady:
	msgbox SevenIsland_House_Room2_Text_KogaSquareUp, MSGBOX_DEFAULT
	release
	getplayerxy X_COORD, Y_COORD
	call_if_eq X_COORD, 6, SevenIsland_House_Room2_Eventscript_CheckInFront
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	release
	end

SevenIsland_House_Room2_Eventscript_KogaOtherLeaderReady:
	msgbox SevenIsland_House_Room2_Text_KogaOtherLeader, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_KogaOtherLeader:
	.string "KOGA: Je devrais emmener ma fille\n"
	.string "pour apprendre des styles de\l"
	.string "combat des autres CHAMPIONS.$"

SevenIsland_House_Room2_Eventscript_KogaDeclined::
	msgbox SevenIsland_House_Room2_Text_Koga_Declined, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_Koga_Declined:
	.string "Quoi? Hmm.\p"
	.string "Comment tu as pu battre la\n"
	.string "LIGUE avec aussi peu de volonté?$"

SevenIsland_House_Room2_Eventscript_MoveKogaRight:
	applymovement LOCALID_KOGA, SevenIsland_House_Room2_Movement_KogaAroundPlayer
	waitmovement 0
	return

SevenIsland_House_Room2_Eventscript_MoveKogaUp:
	applymovement LOCALID_KOGA, SevenIsland_House_Room2_Movement_KogaToMat
	waitmovement 0
	return

SevenIsland_House_Room2_Movement_KogaAroundPlayer:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_left
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Movement_KogaToMat:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Eventscript_KogaBattle:
	setvar TYPE, SET_VISITOR_STATE
	setvar ARGUMENT, FAMECHECKER_KOGA
	callnative UseBattleHouseVar
	applymovement LOCALID_KOGA, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 0
	msgbox SevenIsland_House_Room2_Text_KogaBeforeBattle, MSGBOX_DEFAULT
	release
	callnative IsChallengeModeToVarResult
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_House_Room2_Eventscript_ChallengeKogaBattle
	trainerbattle_no_intro TRAINER_KOGA_REMATCH, SevenIsland_House_Room2_Text_KogaLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_KogaExit
	release
	end

SevenIsland_House_Room2_Text_KogaBeforeBattle:
	.string "KOGA: Fwahahaha!\p"
	.string "Aujourd'hui je ne vais pas seulement\n"
	.string "te battre, mais je vais aussi montrer\l"
	.string "ma valeur à ma fille!$"

SevenIsland_House_Room2_Text_KogaLoss:
	.string "KOGA: …Si je ne suis toujours pas\n"
	.string "assez fort pour te battre,\l"
	.string "Il ne reste qu'une chose à faire.\p"
	.string "Je dois continuer de m'entraîner.$"

SevenIsland_House_Room2_Eventscript_ChallengeKogaBattle:
	trainerbattle_no_intro TRAINER_KOGA_REMATCH_CHALLENGE, SevenIsland_House_Room2_Text_KogaLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_KogaExit
	release
	end

SevenIsland_House_Room2_Eventscript_KogaExit:
	applymovement LOCALID_KOGA, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 0
	msgbox SevenIsland_House_Room2_Text_KogaExit, MSGBOX_DEFAULT
	release
	applymovement LOCALID_KOGA, SevenIsland_House_Room2_Movement_LeaderExits
	waitmovement 0
	playse SE_EXIT
	setvar LEADER_READY, 0
	removeobject LOCALID_KOGA
	release
	end

SevenIsland_House_Room2_Text_KogaExit:
	.string "KOGA: Avec des DRESSEURS comme toi et\n"
	.string "{RIVAL}, la LIGUE POKéMON doit être\l"
	.string "une vraie démonstration de force!\l"
	.string "Vous pouvez être fier de vous!\p"
	.string "Par conséquent j'aimerais à\n"
	.string "à l'avenir rejoindre moi aussi\l"
	.string "le CONSEIL 4…\p"
	.string "…Mais je n'y arriverais jamais si je\n"
	.string "néglige mes responsabilités de CHAMPION!\p"
	.string "Je vais retourner a SAFRANIA.\n"
	.string "A bientôt, gamin.$"

@ LEADER SABRINA
SevenIsland_House_Room2_Eventscript_Sabrina::
	lock
	faceplayer
	goto_if_eq LEADER_READY, 6, SevenIsland_House_Room2_Eventscript_SabrinaReady
	goto_if_ne LEADER_READY, 0, SevenIsland_House_Room2_Eventscript_SabrinaOtherLeaderReady
	msgbox SevenIsland_House_Room2_Text_Sabrina_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SevenIsland_House_Room2_Eventscript_SabrinaDeclined
	closemessage
	getplayerxy X_COORD, Y_COORD
	call_if_eq Y_COORD, 6, SevenIsland_House_Room2_Eventscript_MoveSabrinaRight
	call_if_ne Y_COORD, 6, SevenIsland_House_Room2_Eventscript_MoveSabrinaUp
	setobjectxyperm LOCALID_SABRINA, 7, 5
	setobjectmovementtypeinstant LOCALID_SABRINA, MOVEMENT_TYPE_FACE_LEFT
	setvar LEADER_READY, LOCALID_SABRINA
	msgbox SevenIsland_House_Room2_Text_SabrinaSquareUp, MSGBOX_DEFAULT 
	release
	end

SevenIsland_House_Room2_Text_Sabrina_Intro:
	.string "MORGANE: …C'est vrai que les pouvoirs\n"
	.string "psychiques sont redoutables.\p"
	.string "Toutefois, certaines choses ne peuvent\n"
	.string "être surpassées seule.\p"
	.string "je l'ai enfin compris, grâce à ma\n"
	.string "défaite lors de notre dernier combat.\p"
	.string "Je ne me reposerais plus uniquement\n"
	.string "sur mes pouvoirs cette fois.\p"
	.string "Ma vraie force… ma volonté…\n"
	.string "Me poussent à me mesurer à toi!$"

SevenIsland_House_Room2_Text_SabrinaSquareUp:
	.string "MORGANE: Tu es destiné à te\n"
	.string "dresser contre moi dans ce combat.$"

SevenIsland_House_Room2_Eventscript_SabrinaReady:
	msgbox SevenIsland_House_Room2_Text_SabrinaSquareUp, MSGBOX_DEFAULT
	release
	getplayerxy X_COORD, Y_COORD
	call_if_eq X_COORD, 6, SevenIsland_House_Room2_Eventscript_CheckInFront
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	release
	end

SevenIsland_House_Room2_Eventscript_SabrinaOtherLeaderReady:
	msgbox SevenIsland_House_Room2_Text_SabrinaOtherLeader, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_SabrinaOtherLeader:
	.string "MORGANE: Je n'ai pas besoin de\n"
	.string "voir l'avenir pour connaître le\l"
	.string "vainqueur de ce match.$"

SevenIsland_House_Room2_Eventscript_SabrinaDeclined::
	msgbox SevenIsland_House_Room2_Text_Sabrina_Declined, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_Sabrina_Declined:
	.string "J'avais prédis que tu allais refuser,\n"
	.string "Nous nous affronterons plus tard.$"

SevenIsland_House_Room2_Eventscript_MoveSabrinaRight:
	applymovement LOCALID_SABRINA, SevenIsland_House_Room2_Movement_SabrinaAroundPlayer
	waitmovement 0
	return

SevenIsland_House_Room2_Eventscript_MoveSabrinaUp:
	applymovement LOCALID_SABRINA, SevenIsland_House_Room2_Movement_SabrinaUpToMat
	waitmovement 0
	return

SevenIsland_House_Room2_Movement_SabrinaAroundPlayer:
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Movement_SabrinaUpToMat:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Eventscript_SabrinaBattle:
	setvar TYPE, SET_VISITOR_STATE
	setvar ARGUMENT, FAMECHECKER_SABRINA
	callnative UseBattleHouseVar
	applymovement LOCALID_SABRINA, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 1
	msgbox SevenIsland_House_Room2_Text_SabrinaBeforeBattle, MSGBOX_DEFAULT
	release
	callnative IsChallengeModeToVarResult
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_House_Room2_Eventscript_ChallengeSabrinaBattle
	trainerbattle_no_intro TRAINER_SABRINA_REMATCH, SevenIsland_House_Room2_Text_SabrinaLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_SabrinaExit
	release
	end

SevenIsland_House_Room2_Text_SabrinaBeforeBattle:
	.string "MORGANE: J'ai prédis que tu serais\n"
	.string "là en regardant le futur.\p"
	.string "Mais je n'ai volontairement pas\n"
	.string "regardé qui gagnera le match.\p"
	.string "Découvrons cela tous les deux!$"

SevenIsland_House_Room2_Text_SabrinaLoss:
	.string "MORGANE: Je ne rencontrerais pas\n"
	.string "un DRESSEUR comme toi avant au moins\l"
	.string "trois ans.$"

SevenIsland_House_Room2_Eventscript_ChallengeSabrinaBattle:
	trainerbattle_no_intro TRAINER_SABRINA_REMATCH_CHALLENGE, SevenIsland_House_Room2_Text_SabrinaLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_SabrinaExit
	release
	end

SevenIsland_House_Room2_Eventscript_SabrinaExit:
	applymovement LOCALID_SABRINA, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 1
	msgbox SevenIsland_House_Room2_Text_SabrinaExit, MSGBOX_DEFAULT
	release
	applymovement LOCALID_SABRINA, SevenIsland_House_Room2_Movement_LeaderExits
	waitmovement 0
	playse SE_EXIT
	setvar LEADER_READY, 0
	removeobject LOCALID_SABRINA
	release
	end

SevenIsland_House_Room2_Text_SabrinaExit:
	.string "MORGANE: La dernière fois,\n"
	.string "J'ai vraiment été choqué de perdre\l"
	.string "contre toi.\p"
	.string "Depuis mon désir de devenir de plus\n"
	.string "forte est devenu incontrolable,\l"
	.string "un peu comme toi.\p"
	.string "Si je ne retourne pas à mon ARENE,\n"
	.string "je vais rater un nouveau\l"
	.string "challenger.\p"
	.string "Ne t'inquiète pas, {PLAYER}.\n"
	.string "Nous nous affronterons de nouveau.$"

@ LEADER BLAINE
SevenIsland_House_Room2_Eventscript_Blaine::
	lock
	faceplayer
	goto_if_eq LEADER_READY, 7, SevenIsland_House_Room2_Eventscript_BlaineReady
	goto_if_ne LEADER_READY, 0, SevenIsland_House_Room2_Eventscript_BlaineOtherLeaderReady
	msgbox SevenIsland_House_Room2_Text_Blaine_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SevenIsland_House_Room2_Eventscript_BlaineDeclined
	closemessage
	getplayerxy X_COORD, Y_COORD
	call_if_eq Y_COORD, 5, SevenIsland_House_Room2_Eventscript_MoveBlaineLeft
	call_if_ne Y_COORD, 5, SevenIsland_House_Room2_Eventscript_MoveBlaineUp
	setobjectxyperm LOCALID_BLAINE, 7, 5
	setobjectmovementtypeinstant LOCALID_BLAINE, MOVEMENT_TYPE_FACE_LEFT
	setvar LEADER_READY, LOCALID_BLAINE
	msgbox SevenIsland_House_Room2_Text_BlaineSquareUp, MSGBOX_DEFAULT 
	release
	end

SevenIsland_House_Room2_Text_Blaine_Intro:
	.string "AUGUSTE: Ah!\n"
	.string "Félicitations, jeune MAITRE!\p"
	.string "J'ai saisi l'opportunité de m'entraîner\n"
	.string "ici, avec les autres CHAMPIONS.\l"
	.string "Mais je ne peux rester loin de\l"
	.string "CRAMOIS'ILE trop longtemps.\p"
	.string "Le volcan sous mon arène montre\n"
	.string "des signes d'éruptions!\p"
	.string "Mais puisque tu as fais tout ce\n"
	.string "chemin, affrontons nous dans une\p"
	.string "bataille acharnée!$"

SevenIsland_House_Room2_Text_BlaineSquareUp:
	.string "AUGUSTE: En garde, challenger!$"

SevenIsland_House_Room2_Eventscript_BlaineReady:
	msgbox SevenIsland_House_Room2_Text_BlaineSquareUp, MSGBOX_DEFAULT
	release
	getplayerxy X_COORD, Y_COORD
	call_if_eq X_COORD, 6, SevenIsland_House_Room2_Eventscript_CheckInFront
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	release
	end

SevenIsland_House_Room2_Eventscript_BlaineOtherLeaderReady:
	msgbox SevenIsland_House_Room2_Text_BlaineOtherLeader, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_BlaineOtherLeader:
	.string "AUGUSTE: Nous, les CHAMPIONS nous\n"
	.string "ensemble tout le temps, mais c'est\l"
	.string "une bonne nouvelle d'avoir un endroit\l"
	.string "dédié pour cela.$"

SevenIsland_House_Room2_Eventscript_BlaineDeclined::
	msgbox SevenIsland_House_Room2_Text_Blaine_Declined, MSGBOX_DEFAULT
	release
	end

SevenIsland_House_Room2_Text_Blaine_Declined:
	.string "Non?\n"
	.string "Mais je suis bouillant!$"

SevenIsland_House_Room2_Eventscript_MoveBlaineLeft:
	applymovement LOCALID_BLAINE, SevenIsland_House_Room2_Movement_BlaineAroundPlayer
	waitmovement 0
	return

SevenIsland_House_Room2_Eventscript_MoveBlaineUp:
	applymovement LOCALID_BLAINE, SevenIsland_House_Room2_Movement_BlaineUpToMat
	waitmovement 0
	return

SevenIsland_House_Room2_Movement_BlaineAroundPlayer:
	walk_left
	walk_up
	walk_left
	walk_left
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Movement_BlaineUpToMat:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Eventscript_BlaineBattle:
	setvar TYPE, SET_VISITOR_STATE
	setvar ARGUMENT, FAMECHECKER_BLAINE
	callnative UseBattleHouseVar
	applymovement LOCALID_BLAINE, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 0
	msgbox SevenIsland_House_Room2_Text_BlaineBeforeBattle, MSGBOX_DEFAULT
	release
	callnative IsChallengeModeToVarResult
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_House_Room2_Eventscript_ChallengeBlaineBattle
	trainerbattle_no_intro TRAINER_BLAINE_REMATCH, SevenIsland_House_Room2_Text_BlaineLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_BlaineExit
	release
	end

SevenIsland_House_Room2_Text_BlaineBeforeBattle:
	.string "AUGUSTE: J'ai une question pour toi!\n"
	.string "Quels POKéMON vont être réduits\l"
	.string "en cendre?$"

SevenIsland_House_Room2_Text_BlaineLoss:
	.string "AUGUSTE: …Visiblement les miens, haha!$"

SevenIsland_House_Room2_Eventscript_ChallengeBlaineBattle:
	trainerbattle_no_intro TRAINER_BLAINE_REMATCH_CHALLENGE, SevenIsland_House_Room2_Text_BlaineLoss
	setvar TYPE, SET_LEVEL_GROWTH
	callnative UseBattleHouseVar
	goto SevenIsland_House_Room2_Eventscript_BlaineExit
	release
	end

SevenIsland_House_Room2_Eventscript_BlaineExit:
	applymovement LOCALID_BLAINE, SevenIsland_House_Room2_Movement_StepFastestLeft
	waitmovement 0
	textcolor 0
	msgbox SevenIsland_House_Room2_Text_BlaineExit, MSGBOX_DEFAULT
	release
	applymovement LOCALID_BLAINE, SevenIsland_House_Room2_Movement_LeaderExits
	waitmovement 0
	playse SE_EXIT
	setvar LEADER_READY, 0
	removeobject LOCALID_BLAINE
	release
	end

SevenIsland_House_Room2_Text_BlaineExit:
	.string "AUGUSTE: Haha!\n"
	.string "Quel combat!\p"
	.string "Je sens la flame au fond de moi,\n"
	.string "la volonté de devenir plus fort!\p"
	.string "Le volcan de CRAMOIS'ILE semble devenir\n"
	.string "de plus en plus actif chaque jour…\p"
	.string "Je dois rentrer et y jeter un\n"
	.string "oeil.$"

SevenIsland_House_Room2_Eventscript_CheckInFront:
	goto_if_eq Y_COORD, 5, EventScript_ReleaseEnd
	return

SevenIsland_House_Room2_Movement_LeaderExits:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_4
	set_invisible
	step_end

SevenIsland_House_Room2_Movement_StepFastestLeft:
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room2_Movement_StepFastestRight:
	walk_in_place_faster_right
	step_end
