.set LOCALID_SUDOWOODO, 7

RS_BattleTower_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_OnTransition
	.byte 0

BattleFrontier_OutsideEast_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo
	end

BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne EventScript_Return
	removeobject VAR_LAST_TALKED
	return

BattleFrontier_OutsideEast_OnTransition:
	call_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_ShowSudowoodo
	end

BattleFrontier_OutsideEast_EventScript_ShowSudowoodo::
	goto_if_set FLAG_CAUGHT_SUDOWOODO, EventScript_Return
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
	return

BattleTower_Outside_EventScript_16025A::
	msgbox BattleTower_Outside_Text_199C6F, MSGBOX_SIGN
	end

BattleTower_Outside_EventScript_160263::
	msgbox BattleTower_Outside_Text_199CA4, MSGBOX_NPC
	end

BattleTower_Outside_EventScript_16026C::
	msgbox BattleTower_Outside_Text_199E9C, MSGBOX_NPC
	end

BattleTower_Outside_EventScript_160275::
	msgbox BattleTower_Outside_Text_199ED4, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_OldWoman::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone
	goto_if_set FLAG_CAUGHT_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone
	goto_if_set FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone
	msgbox BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
	turnobject 6, DIR_SOUTH //remove later
	release
	end

BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone::
	msgbox BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
	turnobject 6, DIR_SOUTH //remove later
	release
	end

BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle: //change text to match EM later
	.string "Excuse moi.\n"
	.string "Tu as une bonne vue?\p"
	.string "Il y a un arbre bizarre ici, j'ai\n"
	.string "eu l'impression de le voir gigoter.$"

BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere: //change text to match EM later
	.string "Excuse me.\n"
	.string "Tu as une bonne mémoire?\p"
	.string "Il me semble qu'il y avait un\n"
	.string "arbre bizarre ici.$"

BattleFrontier_OutsideEast_EventScript_Sudowoodo::
	lock
	faceplayer
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement LOCALID_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
	waitmovement 0
	checkitem ITEM_FRESH_WATER, 1
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_OutsideEast_EventScript_AskWaterSudowoodo
	release
	end

BattleFrontier_OutsideEast_EventScript_AskWaterSudowoodo::
	msgbox BattleFrontier_OutsideEast_Text_UseFreshWater MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_OutsideEast_EventScript_WaterSudowoodo
	release
	end

BattleFrontier_OutsideEast_Text_UseFreshWater::
	.string "C'est arbre est bizarre.\n"
	.string "L'aroser avec de l'EAU FRAICHE?$"

BattleFrontier_OutsideEast_EventScript_WaterSudowoodo::
	lock
	faceplayer
	removeitem ITEM_FRESH_WATER, 1
	playse SE_SUDOWOODO_SHAKE
	applymovement LOCALID_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShakeAngry
	waitmovement 0
	applymovement LOCALID_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShakeAngry
	waitmovement 0
	applymovement LOCALID_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShakeAngry
	waitmovement 0
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_SUDOWOODO, 2
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_SUDOWOODO
	setwildbattle SPECIES_SUDOWOODO, 40, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BattleFrontier_OutsideEast_EventScript_RanFromSudowoodo
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BattleFrontier_OutsideEast_EventScript_RanFromSudowoodo
	setflag FLAG_CAUGHT_SUDOWOODO
	release
	end

gText_Sudowoodo_Attacked::
	.string "L'arbre bizarre n'a pas l'air d'aimer\n"
	.string "l'EAU FRAICHE!\p"
	.string "L'arbre bizarre vous attaque!$"

BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo::
	setflag FLAG_DEFEATED_SUDOWOODO
	goto BattleFrontier_OutsideEast_EventScript_RanFromSudowoodo
	end

BattleFrontier_OutsideEast_EventScript_RanFromSudowoodo::
	fadescreenswapbuffers FADE_TO_BLACK
    removeobject VAR_LAST_TALKED
    fadescreenswapbuffers FADE_FROM_BLACK
    msgbox Text_WeirdTreeFledSomewhere
    release
    end

Text_WeirdTreeFledSomewhere::
	.string "L'arbre bizarre s'est enfuit…$"

BattleFrontier_OutsideEast_Movement_SudowoodoShake:
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end

BattleFrontier_OutsideEast_Movement_SudowoodoShakeAngry:
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_2
	face_down
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_2
	face_down
	step_end
