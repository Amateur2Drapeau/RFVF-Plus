SilphCo_2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_OnLoad
	.byte 0

SilphCo_2F_OnLoad::
	call_if_unset FLAG_SILPH_2F_DOOR_1, EventScript_Close2FDoor1
	call_if_unset FLAG_SILPH_2F_DOOR_2, EventScript_Close2FDoor2
	end

SilphCo_2F_EventScript_ThunderWaveTutor::
	goto EventScript_ThunderWaveTutor
	end

SilphCo_2F_EventScript_FloorSign::
	msgbox SilphCo_2F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_2F_EventScript_Connor::
	trainerbattle_single TRAINER_SCIENTIST_CONNOR, SilphCo_2F_Text_ConnorIntro, SilphCo_2F_Text_ConnorDefeat
	msgbox SilphCo_2F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Jerry::
	trainerbattle_single TRAINER_SCIENTIST_JERRY, SilphCo_2F_Text_JerryIntro, SilphCo_2F_Text_JerryDefeat
	msgbox SilphCo_2F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_23, SilphCo_2F_Text_Grunt1Intro, SilphCo_2F_Text_Grunt1Defeat
	msgbox SilphCo_2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_24, SilphCo_2F_Text_Grunt2Intro, SilphCo_2F_Text_Grunt2Defeat
	msgbox SilphCo_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Scientist::
	msgbox SilphCo_2F_Text_Scientist, MSGBOX_NPC
	end

SilphCo_2F_Text_Scientist:
	.string "Vu que nous ne travaillons plus\n"
	.string "sur le projet MASTER BALL,\p"
	.string "nous commençons de nouveaux\n"
	.string "projets.$"

SilphCo_2F_EventScript_WorkerF1::
	msgbox SilphCo_2F_Text_WorkerF1, MSGBOX_NPC
	end

SilphCo_2F_Text_WorkerF1:
	.string "Peut-être que notre prochaine\n"
	.string "invention sera un système de\p"
	.string "sécurité pour se protéger des\n"
	.string "gens comme la TEAM ROCKET!$"

SilphCo_2F_EventScript_WorkerF2::
	msgbox SilphCo_2F_Text_WorkerF2, MSGBOX_NPC
	end

SilphCo_2F_Text_WorkerF2:
	.string "Le dev, c’est vraiment complexe!\p"
	.string "Imagine la difficulté de coder\n"
	.string "un PORYGON!\p"
	.string "Créer un POKéMON à partir d’un\n"
	.string "code… C’est inconcevable!$"

SilphCo_2F_EventScript_Woman::
	msgbox SilphCo_2F_Text_Woman, MSGBOX_NPC
	end

SilphCo_2F_Text_Woman:
	.string "Nous passons notre temps en\n"
	.string "réunion tous les jours.\p"
	.string "J'aimerais qu'ils me laissent\n"
	.string "travailler en paix…$"

SilphCo_2F_EventScript_WorkerM::
	textcolor 3
	msgbox SilphCo_2F_Text_WorkerM
	release
	end

SilphCo_2F_Text_WorkerM:
	.string "…\p"
	.string "Il s'est endormi en travaillant!$"
