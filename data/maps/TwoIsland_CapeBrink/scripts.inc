TwoIsland_CapeBrink_MapScripts::
	.byte 0

CapeBrink_EventScript_Helena::
	trainerbattle_single TRAINER_PKMN_RANGER_HELENA, CapeBrink_Text_HelenaIntro, CapeBrink_Text_HelenaDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq CapeBrink_EventScript_HelenaRematch
	msgbox CapeBrink_Text_HelenaPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_EventScript_HelenaRematch::
	trainerbattle_rematch TRAINER_PKMN_RANGER_HELENA, CapeBrink_Text_HelenaRematchIntro, CapeBrink_Text_HelenaDefeat
	msgbox CapeBrink_Text_HelenaPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_Text_HelenaIntro:
	.string "Je suis à la recherche de déchets,\n"
	.string "Mais j'ai le temps pour un p'ti combat.$"

CapeBrink_Text_HelenaDefeat:
	.string "Je n'en peux plus!$"

CapeBrink_Text_HelenaPostBattle:
	.string "C'est important de nettoyer les\n"
	.string "océans.\p"
	.string "Essaye d'acheter des objets qui\n"
	.string "sont rechargeables ou réutilisables!\l"
	.string "Histoire de laisser moins de déchets.$"

CapeBrink_Text_HelenaRematchIntro:
	.string "J'étais à la recherche de déchets,\n"
	.string "mais j'ai trouvé un DRESSEUR!$"

CapeBrink_EventScript_Atticus::
	trainerbattle_single TRAINER_COOLTRAINER_ATTICUS, CapeBrink_Text_AtticusIntro, CapeBrink_Text_AtticusDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq CapeBrink_EventScript_AtticusRematch
	msgbox CapeBrink_Text_AtticusPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_EventScript_AtticusRematch::
	trainerbattle_rematch TRAINER_COOLTRAINER_ATTICUS, CapeBrink_Text_AtticusRematchIntro, CapeBrink_Text_AtticusDefeat
	msgbox CapeBrink_Text_AtticusPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_Text_AtticusIntro:
	.string "Il ne se passe absolument rien\n"
	.string "sur l'ILE 2…\l"
	.string "He je m'ennuie, viens te battre!$"

CapeBrink_Text_AtticusDefeat:
	.string "…Et c'est reparti pour s'ennuyer…$"

CapeBrink_Text_AtticusPostBattle:
	.string "Les DRESSEURS viennent ici pour\n"
	.string "s'affronter.\p"
	.string "De toute façon, sur cette ILE\n"
	.string "il n'y a rien d'autre à faire.$"

CapeBrink_Text_AtticusRematchIntro:
	.string "…Baillement…\n"
	.string "…Quel ennuie…\p"
	.string "Oh, un combat?\n"
	.string "Je suis partant! Allons-y!$"

CapeBrink_EventScript_Deforest::
	trainerbattle_single TRAINER_FISHERMAN_DEFOREST, CapeBrink_Text_DeforestIntro, CapeBrink_Text_DeforestDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq CapeBrink_EventScript_DeforestRematch
	msgbox CapeBrink_Text_DeforestPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_EventScript_DeforestRematch::
	trainerbattle_rematch TRAINER_FISHERMAN_DEFOREST, CapeBrink_Text_DeforestRematchIntro, CapeBrink_Text_DeforestRematchDefeat
	msgbox CapeBrink_Text_DeforestPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_Text_DeforestIntro:
	.string "Aie! Rien au bout de la ligne!\p"
	.string "Je vais passer mes nerfs sur\n"
	.string "tes POKéMON!$"

CapeBrink_Text_DeforestDefeat:
	.string "Comme un poisson hors de l'eau!$"

CapeBrink_Text_DeforestPostBattle:
	.string "Ces rapides rendent la pêche\n"
	.string "impossible, mais je n'ai rien de\l"
	.string "mieux à faire donc continuons.$"

CapeBrink_Text_DeforestRematchIntro:
	.string "Tu veux te battre de nouveau?\n"
	.string "De toute façon je n'ai rien à faire.$"

CapeBrink_Text_DeforestRematchDefeat:
	.string "Pourquoi mon TETARTE n'évolue pas\n"
	.string "en TARPAUD?$"

CapeBrink_EventScript_Spedo::
	trainerbattle_single TRAINER_BIRD_KEEPER_SPEDO, CapeBrink_Text_SpedoIntro, CapeBrink_Text_SpedoDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq CapeBrink_EventScript_SpedoRematch
	msgbox CapeBrink_Text_SpedoPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_EventScript_SpedoRematch::
	trainerbattle_rematch TRAINER_BIRD_KEEPER_SPEDO, CapeBrink_Text_SpedoRematchIntro, CapeBrink_Text_SpedoDefeat
	msgbox CapeBrink_Text_SpedoPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_Text_SpedoIntro:
	.string "On est peut être pas capable de\n"
	.string "nager, mais on peut voler!$"

CapeBrink_Text_SpedoDefeat:
	.string "On va se crasher!$"

CapeBrink_Text_SpedoPostBattle:
	.string "Même si c'est trop dangereux de\n"
	.string "mettre les pieds dans l'eau, je\l"
	.string "m'amuse en venant à la plage.$"

CapeBrink_Text_SpedoRematchIntro:
	.string "Je ne peux ni nager ni utiliser\n"
	.string "SURF, battons nous alors!$"

CapeBrink_EventScript_Caspara::
	trainerbattle_single TRAINER_COOLTRAINER_CASPARA, CapeBrink_Text_CasparaIntro, CapeBrink_Text_CasparaDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq CapeBrink_EventScript_CasparaRematch
	msgbox CapeBrink_Text_CasparaPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_EventScript_CasparaRematch::
	trainerbattle_rematch TRAINER_COOLTRAINER_CASPARA, CapeBrink_Text_CasparaRematchIntro, CapeBrink_Text_CasparaDefeat
	msgbox CapeBrink_Text_CasparaPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_Text_CasparaIntro:
	.string "He! Tu me caches le soleil!\n"
	.string "Bouge de là gamin!$"

CapeBrink_Text_CasparaDefeat:
	.string "Super, maintenant bouge d'ici.$"

CapeBrink_Text_CasparaPostBattle:
	.string "Le soleil est très dangereux,\n"
	.string "surtout sans crème solaire.\p"
	.string "Des fois je me demande si c'est\n"
	.string "rentable de bronzer comme ça.$"

CapeBrink_Text_CasparaRematchIntro:
	.string "Tu n'as pas besoin de venir\n"
	.string "m'importuner, cette chaise est libre.\p"
	.string "Encore un combat?\n"
	.string "…Si ça te fait dégager allons-y!$"

CapeBrink_EventScript_Sedef::
	trainerbattle_single TRAINER_SWIMMER_FEMALE_SEDEF, CapeBrink_Text_SedefIntro, CapeBrink_Text_SedefDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq CapeBrink_EventScript_SedefRematch
	msgbox CapeBrink_Text_SedefPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_EventScript_SedefRematch::
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_SEDEF, CapeBrink_Text_SedefRematchIntro, CapeBrink_Text_SedefDefeat
	msgbox CapeBrink_Text_SedefPostBattle, MSGBOX_AUTOCLOSE
	end

CapeBrink_Text_SedefIntro:
	.string "Je suis le meilleur nageur au monde!\n"
	.string "Je vais couler tes POKéMON!$"

CapeBrink_Text_SedefDefeat:
	.string "Je suis dans les rapides!$"

CapeBrink_Text_SedefPostBattle:
	.string "Je peux facilement nager dans ces\n"
	.string "courants, mais je préfère rester ici.$"

CapeBrink_Text_SedefRematchIntro:
	.string "Je suis le plus grand chilleur au monde!\n"
	.string "Je peux te battre en somnolant!$"

CapeBrink_EventScript_Tuber::
	msgbox CapeBrink_Text_Tuber, MSGBOX_NPC
	end

CapeBrink_Text_Tuber:
	.string "Cette plage est célèbre pour\n"
	.string "attirer des DRESSEURS redoutables.\p"
	.string "Je préfère regarder les combats\n"
	.string "d'en haut personnellement.$"
