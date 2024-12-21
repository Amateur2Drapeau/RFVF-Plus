SafariZone_NorthWest_RestHouse_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD SafariZone_NorthWest_RestHouse_MapScript_MakePC
	.byte 0

SafariZone_NorthWest_RestHouse_MapScript_MakePC::
	setmetatile 2, 0, 0x300, 1
	setmetatile 2, 1, 0x062, 1
	setmetatile 2, 2, 0x301, 0
	setmetatile 4, 0, 0x2C8, 1
	setmetatile 4, 1, 0x2CA, 1
	setmetatile 5, 0, 0x2C9, 1
	setmetatile 5, 1, 0x2CB, 1
	end

SafariZone_NorthWest_RestHouse_EventScript_OldWoman::
	msgbox SafariZone_NorthWest_RestHouse_Text_OldWoman, MSGBOX_NPC
	end

SafariZone_NorthWest_RestHouse_Text_OldWoman::
	.string "Mon petit-fils a beaucoup d'énergie,\n"
	.string "mais arriver jusqu'ici m'a épuisé!$"

SafariZone_NorthWest_RestHouse_EventScript_LittleBoy::
	msgbox SafariZone_NorthWest_RestHouse_Text_LittleBoy, MSGBOX_NPC
	end

SafariZone_NorthWest_RestHouse_Text_LittleBoy::
	.string "Ma grand-mère et moi sommes ici pour\n"
	.string "voir les nouveaux POKéMON!\p"
	.string "Il y en a beaucoup dont je n'avais\n"
	.string "jamais entendu parlé avant!$"

SafariZone_NorthWest_RestHouse_EventScript_SuperNerd::
	msgbox SafariZone_NorthWest_RestHouse_Text_SuperNerd, MSGBOX_NPC
	end

SafariZone_NorthWest_RestHouse_Text_SuperNerd::
	.string "J'ai vu un drôle de POKéMON\n"
	.string "se cacher derrière les rochers\l"
	.string "derrière nous.\p"
	.string "Dommage je n'ai pas de POKéMON\n"
	.string "avec ECLATE-ROC!$"

SafariZone_NorthWest_RestHouse_EventScript_Lass::
	msgbox SafariZone_NorthWest_RestHouse_Text_Lass, MSGBOX_NPC
	end

SafariZone_NorthWest_RestHouse_Text_Lass::
	.string "Ces ABRI sont trop cool.\n"
	.string "J'adore me reposer ici.\p"
	.string "Nos pas ne sont pas compté ici.\n"
	.string "On peut se reposer gratuitement!$"

SafariZone_NorthWest_RestHouse_EventScript_Worker::
	msgbox SafariZone_NorthWest_RestHouse_Text_Worker, MSGBOX_NPC
	end

SafariZone_NorthWest_RestHouse_Text_Worker::
	.string "Nous pensions devoir aménager la\n"
	.string "zone pour la rendre habitable\l"
	.string "pour les POKéMON.\p"
	.string "Mais on a coupé des arbres et\n"
	.string "avons découvert un superbe endroit.\p"
	.string "Nous avons amené des POKéMON rare\n"
	.string "par la suite.$"

SafariZone_NorthWest_RestHouse_EventScript_Clipboard::
	msgbox SafariZone_NorthWest_RestHouse_Text_Clipboard, MSGBOX_NPC
	end

SafariZone_NorthWest_RestHouse_Text_Clipboard::
	.string "Voici un message du GARDIEN DU\n"
	.string "PARC SAFARI.\p"
	.string "“J'ai entendu dire que le SAFARI\n"
	.string "à HOENN à ouvert une nouvelle zone\l"
	.string "avec des POKéMON exotiques!\p"
	.string "Je ne permettrais pas a notre PARC\n"
	.string "de devenir ringard!\p"
	.string "J'ai engagé une équipe de chercheur\n"
	.string "pour ajouter une extension au PARC.\p"
	.string "Si des personnes sont intéressées pour\n"
	.string "aider, rendez-vous au bureau.”\p"
	.string "- GARDIEN DU PARC$"

SafariZone_NorthWest_RestHouse_EventScript_Stepmonger::
	callnative SafariZoneCheckSteps
	goto_if_eq VAR_RESULT, 600, SafariZone_NorthWest_RestHouse_EventScript_StepmongerFull
	msgbox SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_0
	showmoneybox 0, 0
	msgbox SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_2
	checkmoney 750
	goto_if_eq VAR_RESULT, FALSE, SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_5
	removemoney 750
	updatemoneybox
	textcolor 3
	playfanfare MUS_LEVEL_UP
	msgbox SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_3
	waitfanfare
	call EventScript_RestorePrevTextColor
	msgbox SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_4, MSGBOX_NPC
	hidemoneybox
	callnative SafariZoneRefillSteps
	release
	end

SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_2:
	msgbox SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_2, MSGBOX_NPC
	hidemoneybox
	end

SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_5:
	msgbox FuchsiaCity_SafariZone_Entrance_Text_OopsNotEnoughMoney
	hidemoneybox
	release
	end

SafariZone_NorthWest_RestHouse_EventScript_StepmongerFull:
	msgbox SafariZone_NorthWest_RestHouse_Text_StepmongerFull, MSGBOX_NPC
	end

SafariZone_NorthWest_RestHouse_Text_StepmongerFull:
	.string "Bienvenue dans la ZONE 4!\nVotre compteur de pas est plein.\pNous ne comptons pas le temps\npassé dans les ABRIS.\pReviens quand il te manquera\ndes pas!$"

SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_0:
	.string "Bienvenue dans la ZONE 4!\nTu as besoin de plus de pas?$"

SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_1:
	.string "Je peux recharger tes pas\npour ¥750.\pTu veux une recharge?$"

SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_2:
	.string "Ok, je te souhaite bonne chance\nopour ton SAFARI!$"

SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_3:
	.string "Le compteur de pas de {PLAYER} a\n"
	.string "été rechargé!$"

SafariZone_NorthWest_RestHouse_EventScript_Stepmonger_Text_4:
	.string "Vos pas sont rechargés!\nBonne chance pour ton excursion!$"
