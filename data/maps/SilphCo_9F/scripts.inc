SilphCo_9F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_9F_OnLoad
	.byte 0

SilphCo_9F_OnLoad::
	call_if_unset FLAG_SILPH_9F_DOOR_1, EventScript_Close9FDoor1
	call_if_unset FLAG_SILPH_9F_DOOR_2, EventScript_Close9FDoor2
	call_if_unset FLAG_SILPH_9F_DOOR_3, EventScript_Close9FDoor3
	call_if_unset FLAG_SILPH_9F_DOOR_4, EventScript_Close9FDoor4
	end

SilphCo_9F_EventScript_HealWoman::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_9F_EventScript_HealWomanRocketsGone
	msgbox SilphCo_9F_Text_YouShouldTakeQuickNap
	closemessage
	call EventScript_OutOfCenterPartyHeal
	msgbox SilphCo_9F_Text_DontGiveUp
	release
	end

SilphCo_9F_EventScript_HealWomanRocketsGone::
	msgbox SilphCo_9F_Text_ThankYouSoMuch
	release
	end

SilphCo_9F_EventScript_FloorSign::
	msgbox SilphCo_9F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_9F_EventScript_Ed::
	trainerbattle_single TRAINER_SCIENTIST_ED, SilphCo_9F_Text_EdIntro, SilphCo_9F_Text_EdDefeat
	msgbox SilphCo_9F_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_9F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_37, SilphCo_9F_Text_Grunt1Intro, SilphCo_9F_Text_Grunt1Defeat
	msgbox SilphCo_9F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_9F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_38, SilphCo_9F_Text_Grunt2Intro, SilphCo_9F_Text_Grunt2Defeat
	msgbox SilphCo_9F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_9F_EventScript_Woman::
	msgbox SilphCo_9F_Text_Woman, MSGBOX_NPC
	end

SilphCo_9F_Text_Woman:
	.string "Oh, bonjour.\n"
	.string "Tes parents travaillent ici ?\p"
	.string "La SYLPHE SARL fournit une garde\n"
	.string "d’enfants pour les employés.\p"
	.string "Par chance, nous étions en voyage\n"
	.string "quand la TEAM ROCKET a attaqué.$"

SilphCo_9F_EventScript_GBAKid::
	msgbox SilphCo_9F_Text_GBAKid, MSGBOX_NPC
	end

SilphCo_9F_Text_GBAKid:
	.string "Eh, mais c’est toi le DRESSEUR\n"
	.string "qui a arrêté la TEAM ROCKET?\l"
	.string "Pourquoi es-tu revenu ici?\p"
	.string "Tu as oublié des objets que la\n"
	.string "TEAM ROCKET aurait fait tomber?$"

SilphCo_9F_EventScript_LittleGirl::
	msgbox SilphCo_9F_Text_LittleGirl, MSGBOX_NPC
	end

SilphCo_9F_Text_LittleGirl:
	.string "Si un sale type rentre dans cette\n"
	.string "pièce, tu sais ce que je ferais?\p"
	.string "Je lui dirais de dégager, et je\n"
	.string "serais très autoritaire!\l"
	.string "Comme ça, il m’écoutera!$"

SilphCo_9F_EventScript_LittleBoy::
	msgbox SilphCo_9F_Text_LittleBoy, MSGBOX_NPC
	end

SilphCo_9F_Text_LittleBoy:
	.string "Quel est ton POKéMON préféré?\p"
	.string "Je n’en ai pas perso, mais il y\n"
	.string "en a un que j’aime beaucoup.\p"
	.string "…\n"
	.string "C’est OTARIA…$"

SilphCo_9F_EventScript_SeelGirl::
	msgbox SilphCo_9F_Text_SeelGirl, MSGBOX_NPC
	end

SilphCo_9F_Text_SeelGirl:
	.string "OTARIA est jalouse quand je passe\n"
	.string "du temps avec d’autres enfants.\p"
	.string "Mon copain est jaloux quand je passe\n"
	.string "du temps avec OTARIA.\p"
	.string "Je ne peux rien faire!$"

SilphCo_9F_EventScript_Newbie::
	msgbox SilphCo_9F_Text_Newbie, MSGBOX_NPC
	end

SilphCo_9F_Text_Newbie:
	.string "Je suis nouveau ici.\n"
	.string "Il est difficile de s’y retrouver.\p"
	.string "Et qui a décidé que ces \n"
	.string "téléporteurs étaient une\l"
	.string "bonne idée?\p"
	.string "J’ai essayé d’aller à la fontaine\n"
	.string "à eau et je me suis retrouvé 4\l"
	.string "étages trop bas.$"

SilphCo_9F_EventScript_WorkerF::
	msgbox SilphCo_9F_Text_WorkerF
	release
	end

SilphCo_9F_Text_WorkerF:
	.string "Je n’arrive pas à croire que tu\n"
	.string "as battu tous ces sbires ROCKETS.\p"
	.string "Tu es tellement courageux!$"

SilphCo_9F_EventScript_BragWorkerM::
	msgbox SilphCo_9F_Text_BragWorkerM
	release
	end

SilphCo_9F_Text_BragWorkerM:
	.string "ROUCOUL et moi avons terrassé\n"
	.string "deux sbires à nous seuls!\p"
	.string "Ils avaient deux gros RHINOFÉROS et\n"
	.string "quatre énormes LÉVIATOR!\p"
	.string "Mais cela n’a servi à rien, ROUCOUL\n"
	.string "et moi, on les a tous éclatés.\p"
	.string "Je doute qu’ils reviendront de\n"
	.string "si tôt.$"

SilphCo_9F_EventScript_Scientist::
	msgbox SilphCo_9F_Text_Scientist, MSGBOX_NPC
	end

SilphCo_9F_Text_Scientist:
	.string "Dans mes souvenirs, c’était plutôt\p"
	.string "un seul sbire ROCKET avec un\n"
	.string "RATTATA et un NOSFÉRAPTI.\p"
	.string "ROUCOUL n’a pas tenu 2 secondes, et\n"
	.string "le sbire a dit que ça ne valait pas\p"
	.string "le coup de le voler. Ensuite, tu t’es\n"
	.string "caché dans un casier.$"
