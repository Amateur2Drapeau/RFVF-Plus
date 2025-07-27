EventScript_PkmnCenterNurse::
	goto_if_questlog EventScript_ReleaseEnd
	callnative CheckTrainerCardStars
	compare VAR_RESULT, 2
	goto_if_ge EventScript_PkmnCenterNurseTrainerCard
	message Text_WelcomeWantToHealPkmn
	waitmessage
	multichoice 19, 8, MULTICHOICE_YES_NO, FALSE | (TRUE << 1)
	switch VAR_RESULT
	case 0, EventScript_PkmnCenterNurse_HealPkmn
	case 1 EventScript_PkmnCenterNurse_Goodbye
	case SCR_MENU_CANCEL, EventScript_PkmnCenterNurse_Goodbye
	end

EventScript_PkmnCenterNurse_HealPkmn::
	incrementgamestat GAME_STAT_USED_POKECENTER
	message Text_TakeYourPkmnForFewSeconds
	waitmessage
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	special SetUsedPkmnCenterQuestLogEvent
	goto EventScript_PkmnCenterNurse_ReturnPkmn
	end

EventScript_PkmnCenterNurse_TakeAndHealPkmn::
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	callnative CableClub_OnResumeFunc
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	return

EventScript_PkmnCenterNurse_CheckTrainerTowerAndUnionRoom::
	specialvar VAR_RESULT, IsPlayerNotInTrainerTowerLobby
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_ReturnPkmn
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
	copyvar VAR_0x8008, VAR_RESULT
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUionRoom
	end

EventScript_PkmnCenterNurse_ReturnPkmn::
	message Text_RestoredPkmnToFullHealth
	waitmessage
	applymovement VAR_LAST_TALKED, Movement_Bow
	waitmovement 0
	msgbox Text_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_PlayerWaitingInUionRoom::
	goto_if_set FLAG_SYS_INFORMED_OF_LOCAL_WIRELESS_PLAYER, EventScript_PkmnCenterNurse_ReturnPkmn
	msgbox Text_RestoredPkmnToFullHealth
	setflag FLAG_SYS_INFORMED_OF_LOCAL_WIRELESS_PLAYER
	message Text_PlayerIsPlayingRightNowGoForIt
	waitmessage
	applymovement VAR_LAST_TALKED, Movement_Bow
	waitmovement 0
	msgbox Text_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_Goodbye::
	msgbox Text_WeHopeToSeeYouAgain
	return

Movement_Bow::
	nurse_joy_bow
	delay_4
	step_end

EventScript_PkmnCenterNurseTrainerCard::
	goto_if_unset FLAG_SHOWN_COPPER_CARD_TO_NURSE, EventScript_PkmnCenterNurseTrainerCardFirst
	message Text_WelcomeTrainerCard
	waitmessage
	multichoice 19, 8, MULTICHOICE_YES_NO, FALSE | (TRUE << 1)
	switch VAR_RESULT
	case 0, EventScript_PkmnCenterNurse_HealPkmnTrainerCard
	case 1 EventScript_PkmnCenterNurse_Goodbye
	case SCR_MENU_CANCEL, EventScript_PkmnCenterNurse_Goodbye
	end

EventScript_PkmnCenterNurseTrainerCardFirst::
	message Text_WelcomeTrainerCardFirst
	waitmessage
	setflag FLAG_SHOWN_COPPER_CARD_TO_NURSE
	multichoice 19, 8, MULTICHOICE_YES_NO, FALSE | (TRUE << 1)
	switch VAR_RESULT
	case 0, EventScript_PkmnCenterNurse_HealPkmnTrainerCard
	case 1 EventScript_PkmnCenterNurse_Goodbye
	case SCR_MENU_CANCEL, EventScript_PkmnCenterNurse_Goodbye
	end

EventScript_PkmnCenterNurse_HealPkmnTrainerCard::
	incrementgamestat GAME_STAT_USED_POKECENTER
	message Text_TakeYourPkmnForFewSecondsTrainerCard
	waitmessage
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	special SetUsedPkmnCenterQuestLogEvent
	goto EventScript_PkmnCenterNurse_ReturnPkmnTrainerCard
	end

EventScript_PkmnCenterNurse_ReturnPkmnTrainerCard::
	applymovement VAR_LAST_TALKED, Movement_Bow
	waitmovement 0
	msgbox Text_WeHopeToSeeYouAgain
	return

Text_WelcomeTrainerCardFirst::
    .string "Bienvenue au CENTRE POKéMON!\p"
    .string "Souhaites-tu que je…\n"
    .string "C-cette CARTE DRESSEUR!\p"
    .string "Cette couleur incroyable!\n"
    .string "Et toutes ces étoiles!\p"
    .string "J’ai vu plusieurs DRESSEURS avec\n"
    .string "des CARTES BRONZE jusqu’ici…\p"
    .string "Mais tu es le premier à les\n"
    .string "surpasser avec cette carte.\p"
    .string "S’il te plaît, {PLAYER}, accorde-moi\n"
    .string "l’honneur de soigner ton équipe!$"

Text_TakeYourPkmnForFewSecondsTrainerCard::
    .string "Je vais prendre tes POKéMON\n"
    .string "quelques secondes avec plaisir.$"

Text_WelcomeTrainerCard::
    .string "Ravi de te voir, {PLAYER}!\n"
    .string "Comme d’habitude, n’est-ce pas?$"

EventScript_SoftlockClerk::
	goto_if_set FLAG_TEMP_7, EventScript_SoftlockClerk_GaveAlready
	msgbox Text_SoftlockClerk_Initial, MSGBOX_NPC
	textcolor 3
	checkitemspace ITEM_POKE_BALL, 5
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SoftlockClerk_NoRoom
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
	setflag FLAG_TEMP_7
	release
	end

EventScript_SoftlockClerk_GaveAlready::
	msgbox Text_SoftlockClerk_GaveAlready, MSGBOX_NPC
	end

EventScript_SoftlockClerk_NoRoom::
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis, MSGBOX_NPC
	end

Text_SoftlockClerk_Initial::
    .string "Bonjour, DRESSEUR!\p"
    .string "Nous avons un partenariat avec\n"
    .string "le CENTRE POKéMON pour un cadeau!\p"
    .string "Félicitations, tu es l’heureux\n"
    .string "gagnant! Profite bien du lot!$"

Text_SoftlockClerk_GaveAlready::
    .string "Bonjour, DRESSEUR!\n"
    .string "Utilise bien ces BALLS!$"
