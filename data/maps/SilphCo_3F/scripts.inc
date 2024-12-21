SilphCo_3F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_OnLoad
	.byte 0

SilphCo_3F_OnLoad::
	call_if_unset FLAG_SILPH_3F_DOOR_1, EventScript_Close3FDoor1
	call_if_unset FLAG_SILPH_3F_DOOR_2, EventScript_Close3FDoor2
	end

SilphCo_3F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_3F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_3F_Text_WhatAmIToDo
	release
	end

SilphCo_3F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_3F_Text_YouAndYourMonsSavedUs
	release
	end

SilphCo_3F_EventScript_FloorSign::
	msgbox SilphCo_3F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_3F_EventScript_Jose::
	trainerbattle_single TRAINER_SCIENTIST_JOSE, SilphCo_3F_Text_JoseIntro, SilphCo_3F_Text_JoseDefeat
	msgbox SilphCo_3F_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_3F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_25, SilphCo_3F_Text_GruntIntro, SilphCo_3F_Text_GruntDefeat
	msgbox SilphCo_3F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_3F_EventScript_WorkerMWalking::
	msgbox SilphCo_3F_Text_WorkerMWalking, MSGBOX_NPC
	end

SilphCo_3F_Text_WorkerMWalking:
	.string "Des fois, quand je bloque sur un\n"
	.string "problème, je me promène dans le bureau.\p"
	.string "Si tu prends un air sérieux et que tu\n"
	.string "marches vite, les gens pensent que\l"
	.string "tu fais quelque chose d'important!$"

SilphCo_3F_EventScript_WorkerF::
	msgbox SilphCo_3F_Text_WorkerF, MSGBOX_NPC
	end

SilphCo_3F_Text_WorkerF:
	.string "Des fois la TEAM ROCKET me\n"
	.string "manque.\p"
	.string "Au moins j'avais une bonne\n"
	.string "excuse pour ne pas travailler.$"

SilphCo_3F_EventScript_Scientist::
	lock
	msgbox SilphCo_3F_Text_Scientist
	release
	msgbox SilphCo_3F_Text_Scientist2, MSGBOX_NPC
	turnobject 7, DIR_NORTH
	end

SilphCo_3F_Text_Scientist:
	.string "Oh Oh…\n"
	.string "Non, biensur que non!\l"
	.string "Cela ne peut pas marcher…\p"
	.string "…A moins que…\p"
	.string "Je dois poser la question à l'équipe.\n"
	.string "Je te rappelle plus tard.$"

SilphCo_3F_Text_Scientist2::
	.string "Pardon, je dois passer un nouveau\n"
	.string "coup de téléphone.$"
