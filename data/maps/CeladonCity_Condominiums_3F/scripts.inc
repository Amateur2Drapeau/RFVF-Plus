CeladonCity_Condominiums_3F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonCity_Condominiums_3F_OnFrame
	.byte 0

CeladonCity_Condominiums_3F_OnFrame::
	map_script_2 VAR_TEMP_0, 2, CeladonCity_Condominiums_3F_EventScript_CheckMysticTicket
	.2byte 0

CeladonCity_Condominiums_3F_EventScript_Programmer::
	msgbox CeladonCity_Condominiums_3F_Text_ImTheProgrammer, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_GraphicArtist::
	msgbox CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_Writer::
	msgbox CeladonCity_Condominiums_3F_Text_IWroteTheStory, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_Designer::
	lock
	faceplayer
	specialvar VAR_RESULT, HasAllKantoMons
	goto_if_eq VAR_RESULT, TRUE, CeladonCity_Condominiums_3F_EventScript_CompletedPokedex
	msgbox CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex
	release
	end

CeladonCity_Condominiums_3F_EventScript_CompletedPokedex::
	goto CeladonCity_Condominiums_3F_EventScript_ShowDiploma
	end

CeladonCity_Condominiums_3F_EventScript_ShowDiploma::
	message CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations
	waitmessage
	delay 60
	goto_if_questlog EventScript_ReleaseEnd
	setvar VAR_TEMP_0, 2
	special ShowDiploma
	waitstate
CeladonCity_Condominiums_3F_EventScript_CheckMysticTicket::
	setvar VAR_TEMP_0, 0
	checkitem ITEM_MYSTIC_TICKET, 1
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_Condominiums_3F_EventScript_GiveMysticTicket
	release
	end

CeladonCity_Condominiums_3F_EventScript_GiveMysticTicket::
	goto_if_unset FLAG_SYS_RECEIVED_EXTENDED_DEX, CeladonCity_Condominiums_3F_EventScript_CantGiveMysticTicket
	textcolor 0
	msgbox CeladonCity_Condominiums_3F_Text_GiveMysticTicket
	textcolor 3
	giveitem ITEM_MYSTIC_TICKET, 1
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	textcolor 0
	msgbox CeladonCity_Condominiums_3F_Text_ExplainMysticTicket
	release
	end

CeladonCity_Condominiums_3F_EventScript_CantGiveMysticTicket::
	textcolor 0
	msgbox CeladonCity_Condominiums_3F_Text_CantGiveMysticTicket
	release
	end

CeladonCity_Condominiums_3F_Text_CantGiveMysticTicket:
	.string "J'ai un cadeau pour t'aider à\n"
	.string "remplir ton POKéDEX, mais il\l"
	.string "faudrait mieux attendre que ton\p"
	.string "POKéDEX soit amélioré. Reviens me\n"
	.string "voir quand il pourra enregistrer\p"
	.string "plus de POKéMON.$"

CeladonCity_Condominiums_3F_Text_GiveMysticTicket:
	.string "Voici un petit cadeau pour\n"
	.string "remplir ton POKéDEX.$"

CeladonCity_Condominiums_3F_Text_ExplainMysticTicket:
	.string "Apporte ce ticket au marin de\n"
	.string "CARMIN SUR MER.\p"
	.string "Il pourra t'emmener au ROC NOMBRI\n"
	.string "entre l'ILE 4 et l'ILE 5.\p"
	.string "En tant que passioné de POKéMON\n"
	.string "rares je pense que tu vas bien\p"
	.string "t'amuser!$"

CeladonCity_Condominiums_3F_EventScript_DevelopmentRoomSign::
	msgbox CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom, MSGBOX_SIGN
	end

CeladonCity_Condominiums_3F_EventScript_Computer1::
	msgbox CeladonCity_Condominiums_3F_Text_ItsTheGameProgram, MSGBOX_SIGN
	end

CeladonCity_Condominiums_3F_EventScript_Computer2::
	msgbox CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame, MSGBOX_SIGN
	end

CeladonCity_Condominiums_3F_EventScript_Computer3::
	msgbox CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding, MSGBOX_SIGN
	end

CeladonCity_Condominiums_3F_EventScript_TitleGiver::
	lock
	faceplayer
	callnative CheckHasAnyMasterTitle
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_Condominiums_3F_EventScript_TitleGiver_NoTitles
	callnative CheckCurrentMasterTitle
	compare VAR_RESULT, 0
	call_if_eq CeladonCity_Condominiums_3F_EventScript_TitleGiver_NoTitleSelected
	compare VAR_RESULT, 0
	call_if_ne CeladonCity_Condominiums_3F_EventScript_TitleGiver_TitleSelected
	setvar VAR_0x8004, LISTMENU_MASTER_TRAINER_TITLES
	special ListMenu
	waitstate
	switch VAR_RESULT
	case 0, CeladonCity_Condominiums_3F_EventScript_TitleGiver_ChoseNoTitle
	case 152, CeladonCity_Condominiums_3F_EventScript_TitleGiver_ChoseGrandMaster
	case 153, CeladonCity_Condominiums_3F_EventScript_TitleGiver_PressedB
	// chose an actual mon
	callnative SetCurrentMasterTitle
	bufferspeciesname STR_VAR_2, VAR_RESULT
	msgbox CeladonCity_Condominiums_3F_Text_TitleGiver_ChoseMonMaster, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_TitleGiver_NoTitles:
	msgbox CeladonCity_Condominiums_3F_Text_TitleGiver_NoTitles, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_TitleGiver_NoTitleSelected:
	msgbox CeladonCity_Condominiums_3F_Text_TitleGiver_WelcomeNoTitle
	return

CeladonCity_Condominiums_3F_EventScript_TitleGiver_TitleSelected:
	compare VAR_RESULT, 152
	call_if_eq CeladonCity_Condominiums_3F_EventScript_TitleGiver_BufferGrand
	compare VAR_RESULT, 152
	call_if_ne CeladonCity_Condominiums_3F_EventScript_TitleGiver_BufferSpecies
	msgbox CeladonCity_Condominiums_3F_Text_TitleGiver_WelcomeTitle
	return

CeladonCity_Condominiums_3F_EventScript_TitleGiver_BufferGrand:
	bufferstring 1, CeladonCity_Condominiums_3F_EventScript_TitleGiver_Grand
	return

CeladonCity_Condominiums_3F_EventScript_TitleGiver_BufferSpecies:
	bufferspeciesname STR_VAR_2, VAR_RESULT
	return

CeladonCity_Condominiums_3F_EventScript_TitleGiver_ChoseNoTitle:
	callnative SetCurrentMasterTitle
	msgbox CeladonCity_Condominiums_3F_Text_TitleGiver_ChoseNoTitles, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_TitleGiver_ChoseGrandMaster:
	callnative SetCurrentMasterTitle
	msgbox CeladonCity_Condominiums_3F_Text_TitleGiver_ChoseGrandMaster, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_TitleGiver_PressedB:
	msgbox CeladonCity_Condominiums_3F_Text_TitleGiver_PressedB, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_Text_TitleGiver_NoTitles:
	.string "Bienvenue!\p"
	.string "Tu ne vas pas comprendre de quoi\n"
	.string "je parle mais reviens me voir\l"
	.string "quand tu auras gagné des titres!$"

CeladonCity_Condominiums_3F_Text_TitleGiver_WelcomeNoTitle:
	.string "Bienvenue!\p"
	.string "Ou voudrais-tu que je t'appelle\n"
	.string "en utilisant un titre?$"

CeladonCity_Condominiums_3F_Text_TitleGiver_WelcomeTitle:
	.string "Bienvenue, MAITRE {STR_VAR_2}!\p"
	.string "Ou voudrais-tu que je t'appelle\n"
	.string "par un autre titre?$"

CeladonCity_Condominiums_3F_Text_TitleGiver_ChoseNoTitles:
	.string "Oh, tu ne veux pas de titre?\n"
	.string "J'imagine que tu n'en a pas besoin!$"

CeladonCity_Condominiums_3F_Text_TitleGiver_ChoseGrandMaster:
	.string "Yo, GRAND MAITRE!\n"
	.string "Un titre qui te convient bien!$"

CeladonCity_Condominiums_3F_Text_TitleGiver_PressedB:
	.string "Oh, tu ne vas pas changer\n"
	.string "ton titre?\p"
	.string "J'imagine que tu dois beaucoup\n"
	.string "aimer celui que tu as actuellement!$"

CeladonCity_Condominiums_3F_Text_TitleGiver_ChoseMonMaster:
	.string "Yo, MAITRE {STR_VAR_2}!\n"
	.string "Un titre qui te convient bien!$"

CeladonCity_Condominiums_3F_EventScript_TitleGiver_Grand:
	.string "GRAND$"

