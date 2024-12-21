SilphCo_10F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
	.byte 0

SilphCo_10F_OnLoad::
	call_if_unset FLAG_SILPH_10F_DOOR, EventScript_Close10FDoor
	end

SilphCo_10F_EventScript_WorkerF::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_10F_EventScript_WorkerFRocketsGone
	msgbox SilphCo_10F_Text_WaaaImScared
	release
	end

SilphCo_10F_EventScript_WorkerFRocketsGone::
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
	release
	end

SilphCo_10F_EventScript_FloorSign::
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_10F_EventScript_Travis::
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_10F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_10F_EventScript_WorkerBro::
	msgbox SilphCo_10F_Text_WorkerBro, MSGBOX_NPC
	end

SilphCo_10F_Text_WorkerBro:
	.string "Je suis l'un des 4 FRERES de la\n"
    .string "SYLPHE!\p"
	.string "Je suis concierge!\n"
	.string "Je garde cet endroit propre!$"

SilphCo_10F_EventScript_WorkerM::
	msgbox SilphCo_10F_Text_WorkerM, MSGBOX_NPC
	end

SilphCo_10F_Text_WorkerM:
	.string "Ahh!\n"
	.string "Tu m'as fais peur!\p"
	.string "…\n"
	.string "Qu'et-ce que je fais?\l"
	.string "…Ok, tu m'as eu.\p"
	.string "Je n'ai jamais voulu être un employé\n"
	.string "de bureau, je voulais être un artiste!\p"
	.string "Je remplace certaines peintures ici\n"
	.string "par les miennes pour voir si\l"
	.string "les gens les aiment.\p"
	.string "Ne t'inquiète pas, j'ai déposé\n"
	.string "les anciennes dans le stockage.\p"
	.string "Je ne ramènerais jamais chez moi\n"
	.string "des oeuvres aussi insipides.$"

SilphCo_10F_EventScript_Painting::
	goto_if_unset FLAG_HIDE_SAFFRON_CIVILIANS, SilphCo_10F_EventScript_NewPainting
	msgbox Text_Painting, MSGBOX_SIGN
	end

SilphCo_10F_EventScript_NewPainting::
	msgbox SilphCo_10F_Text_NewPainting, MSGBOX_SIGN
	end

SilphCo_10F_Text_NewPainting:
	.string "C'est une magnifique peinture d'une\n"
	.string "plaine avec un coucher de soleil.$"
