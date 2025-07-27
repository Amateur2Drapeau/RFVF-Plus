.equ BEAUTY, 0
.equ LASS, 0
.equ SWIMMER, 0
.equ BIRD_KEEPER, 1
.equ COOLTRAINER, 1
.equ BLACK_BELT, 2
.equ HIKER, 2
.equ BUG_CATCHER, 3
.equ YOUNGSTER, 3
.equ PSYCHIC, 4
.equ SCIENTIST, 4
.equ TRAINER, VAR_0x8009
.equ CLASS, VAR_0x8006
.equ HAVE_TITLE, VAR_0x8007

MasterTrainer_EventScript_Bulbasaur::
    bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
    setvar TRAINER, SPECIES_BULBASAUR
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_BULBASAUR, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_BULBASAUR, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Ivysaur::
    bufferspeciesname STR_VAR_1, SPECIES_IVYSAUR
    setvar TRAINER, SPECIES_IVYSAUR
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_IVYSAUR, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_IVYSAUR, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_IVYSAUR
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Venusaur::
    bufferspeciesname STR_VAR_1, SPECIES_VENUSAUR
    setvar TRAINER, SPECIES_VENUSAUR
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_VENUSAUR, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_VENUSAUR, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_VENUSAUR
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Charmander::
    bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
    setvar TRAINER, SPECIES_CHARMANDER
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_CHARMANDER, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_CHARMANDER, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Charmeleon::
    bufferspeciesname STR_VAR_1, SPECIES_CHARMELEON
    setvar TRAINER, SPECIES_CHARMELEON
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_CHARMELEON, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_CHARMELEON, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_CHARMELEON
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Charizard::
    bufferspeciesname STR_VAR_1, SPECIES_CHARIZARD
    setvar TRAINER, SPECIES_CHARIZARD
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_CHARIZARD, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_CHARIZARD, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_CHARIZARD
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Squirtle::
    bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
    setvar TRAINER, SPECIES_SQUIRTLE
    setvar CLASS, BEAUTY
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SQUIRTLE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SQUIRTLE, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Wartortle::
    bufferspeciesname STR_VAR_1, SPECIES_WARTORTLE
    setvar TRAINER, SPECIES_WARTORTLE
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_WARTORTLE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_WARTORTLE, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_WARTORTLE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Blastoise::
    bufferspeciesname STR_VAR_1, SPECIES_BLASTOISE
    setvar TRAINER, SPECIES_BLASTOISE
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_BLASTOISE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_BLASTOISE, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_BLASTOISE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Caterpie::
    bufferspeciesname STR_VAR_1, SPECIES_CATERPIE
    setvar TRAINER, SPECIES_CATERPIE
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_CATERPIE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_CATERPIE, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_CATERPIE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Metapod::
    bufferspeciesname STR_VAR_1, SPECIES_METAPOD
    setvar TRAINER, SPECIES_METAPOD
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_METAPOD, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_METAPOD, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_METAPOD
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Butterfree::
    bufferspeciesname STR_VAR_1, SPECIES_BUTTERFREE
    setvar TRAINER, SPECIES_BUTTERFREE
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_BUTTERFREE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_BUTTERFREE, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_BUTTERFREE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Weedle::
    bufferspeciesname STR_VAR_1, SPECIES_WEEDLE
    setvar TRAINER, SPECIES_WEEDLE
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_WEEDLE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_WEEDLE, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_WEEDLE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Kakuna::
    bufferspeciesname STR_VAR_1, SPECIES_KAKUNA
    setvar TRAINER, SPECIES_KAKUNA
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_KAKUNA, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_KAKUNA, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_KAKUNA
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Beedrill::
    bufferspeciesname STR_VAR_1, SPECIES_BEEDRILL
    setvar TRAINER, SPECIES_BEEDRILL
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_BEEDRILL, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_BEEDRILL, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_BEEDRILL
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Pidgey::
    bufferspeciesname STR_VAR_1, SPECIES_PIDGEY
    setvar TRAINER, SPECIES_PIDGEY
    setvar CLASS, BIRD_KEEPER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PIDGEY, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PIDGEY, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PIDGEY
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Pidgeotto::
    bufferspeciesname STR_VAR_1, SPECIES_PIDGEOTTO
    setvar TRAINER, SPECIES_PIDGEOTTO
    setvar CLASS, BIRD_KEEPER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PIDGEOTTO, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PIDGEOTTO, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PIDGEOTTO
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Pidgeot::
    bufferspeciesname STR_VAR_1, SPECIES_PIDGEOT
    setvar TRAINER, SPECIES_PIDGEOT
    setvar CLASS, BIRD_KEEPER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PIDGEOT, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PIDGEOT, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PIDGEOT
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Rattata::
    bufferspeciesname STR_VAR_1, SPECIES_RATTATA
    setvar TRAINER, SPECIES_RATTATA
    setvar CLASS, YOUNGSTER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_RATTATA, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_RATTATA, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_RATTATA
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Raticate::
    bufferspeciesname STR_VAR_1, SPECIES_RATICATE
    setvar TRAINER, SPECIES_RATICATE
    setvar CLASS, YOUNGSTER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_RATICATE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_RATICATE, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_RATICATE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Spearow::
    bufferspeciesname STR_VAR_1, SPECIES_SPEAROW
    setvar TRAINER, SPECIES_SPEAROW
    setvar CLASS, BIRD_KEEPER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SPEAROW, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SPEAROW, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SPEAROW
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Fearow::
    bufferspeciesname STR_VAR_1, SPECIES_FEAROW
    setvar TRAINER, SPECIES_FEAROW
    setvar CLASS, BIRD_KEEPER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_FEAROW, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_FEAROW, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_FEAROW
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Ekans::
    bufferspeciesname STR_VAR_1, SPECIES_EKANS
    setvar TRAINER, SPECIES_EKANS
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_EKANS, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_EKANS, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_EKANS
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Arbok::
    bufferspeciesname STR_VAR_1, SPECIES_ARBOK
    setvar TRAINER, SPECIES_ARBOK
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ARBOK, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_ARBOK, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_ARBOK
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Pikachu::
    bufferspeciesname STR_VAR_1, SPECIES_PIKACHU
    setvar TRAINER, SPECIES_PIKACHU
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PIKACHU, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PIKACHU, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PIKACHU
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Raichu::
    bufferspeciesname STR_VAR_1, SPECIES_RAICHU
    setvar TRAINER, SPECIES_RAICHU
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_RAICHU, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_RAICHU, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_RAICHU
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Sandshrew::
    bufferspeciesname STR_VAR_1, SPECIES_SANDSHREW
    setvar TRAINER, SPECIES_SANDSHREW
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SANDSHREW, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SANDSHREW, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SANDSHREW
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Sandslash::
    bufferspeciesname STR_VAR_1, SPECIES_SANDSLASH
    setvar TRAINER, SPECIES_SANDSLASH
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SANDSLASH, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SANDSLASH, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SANDSLASH
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_NidoranF::
    bufferspeciesname STR_VAR_1, SPECIES_NIDORAN_F
    setvar TRAINER, SPECIES_NIDORAN_F
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_NIDORAN_F, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_NIDORAN_F, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_NIDORAN_F
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Nidorina::
    bufferspeciesname STR_VAR_1, SPECIES_NIDORINA
    setvar TRAINER, SPECIES_NIDORINA
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_NIDORINA, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_NIDORINA, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_NIDORINA
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Nidoqueen::
    bufferspeciesname STR_VAR_1, SPECIES_NIDOQUEEN
    setvar TRAINER, SPECIES_NIDOQUEEN
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_NIDOQUEEN, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_NIDOQUEEN, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_NIDOQUEEN
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_NidoranM::
    bufferspeciesname STR_VAR_1, SPECIES_NIDORAN_M
    setvar TRAINER, SPECIES_NIDORAN_M
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_NIDORAN_M, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_NIDORAN_M, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_NIDORAN_M
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Nidorino::
    bufferspeciesname STR_VAR_1, SPECIES_NIDORINO
    setvar TRAINER, SPECIES_NIDORINO
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_NIDORINO, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_NIDORINO, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_NIDORINO
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Nidoking::
    bufferspeciesname STR_VAR_1, SPECIES_NIDOKING
    setvar TRAINER, SPECIES_NIDOKING
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_NIDOKING, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_NIDOKING, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_NIDOKING
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Clefairy::
    bufferspeciesname STR_VAR_1, SPECIES_CLEFAIRY
    setvar TRAINER, SPECIES_CLEFAIRY
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_CLEFAIRY, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_CLEFAIRY, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_CLEFAIRY
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Clefable::
    bufferspeciesname STR_VAR_1, SPECIES_CLEFABLE
    setvar TRAINER, SPECIES_CLEFABLE
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_CLEFABLE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_CLEFABLE, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_CLEFABLE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Vulpix::
    bufferspeciesname STR_VAR_1, SPECIES_VULPIX
    setvar TRAINER, SPECIES_VULPIX
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_VULPIX, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_VULPIX, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_VULPIX
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Ninetales::
    bufferspeciesname STR_VAR_1, SPECIES_NINETALES
    setvar TRAINER, SPECIES_NINETALES
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_NINETALES, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_NINETALES, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_NINETALES
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Jigglypuff::
    bufferspeciesname STR_VAR_1, SPECIES_JIGGLYPUFF
    setvar TRAINER, SPECIES_JIGGLYPUFF
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_JIGGLYPUFF, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_JIGGLYPUFF, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_JIGGLYPUFF
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Wigglytuff::
    bufferspeciesname STR_VAR_1, SPECIES_WIGGLYTUFF
    setvar TRAINER, SPECIES_WIGGLYTUFF
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_WIGGLYTUFF, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_WIGGLYTUFF, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_WIGGLYTUFF
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Zubat::
    bufferspeciesname STR_VAR_1, SPECIES_ZUBAT
    setvar TRAINER, SPECIES_ZUBAT
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ZUBAT, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_ZUBAT, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_ZUBAT
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Golbat::
    bufferspeciesname STR_VAR_1, SPECIES_GOLBAT
    setvar TRAINER, SPECIES_GOLBAT
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GOLBAT, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GOLBAT, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GOLBAT
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Oddish::
    bufferspeciesname STR_VAR_1, SPECIES_ODDISH
    setvar TRAINER, SPECIES_ODDISH
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ODDISH, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_ODDISH, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_ODDISH
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Gloom::
    bufferspeciesname STR_VAR_1, SPECIES_GLOOM
    setvar TRAINER, SPECIES_GLOOM
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GLOOM, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GLOOM, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GLOOM
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Vileplume::
    bufferspeciesname STR_VAR_1, SPECIES_VILEPLUME
    setvar TRAINER, SPECIES_VILEPLUME
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_VILEPLUME, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_VILEPLUME, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_VILEPLUME
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Paras::
    bufferspeciesname STR_VAR_1, SPECIES_PARAS
    setvar TRAINER, SPECIES_PARAS
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PARAS, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PARAS, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PARAS
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Parasect::
    bufferspeciesname STR_VAR_1, SPECIES_PARASECT
    setvar TRAINER, SPECIES_PARASECT
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PARASECT, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PARASECT, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PARASECT
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Venonat::
    bufferspeciesname STR_VAR_1, SPECIES_VENONAT
    setvar TRAINER, SPECIES_VENONAT
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_VENONAT, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_VENONAT, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_VENONAT
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Venomoth::
    bufferspeciesname STR_VAR_1, SPECIES_VENOMOTH
    setvar TRAINER, SPECIES_VENOMOTH
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_VENOMOTH, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_VENOMOTH, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_VENOMOTH
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Diglett::
    bufferspeciesname STR_VAR_1, SPECIES_DIGLETT
    setvar TRAINER, SPECIES_DIGLETT
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DIGLETT, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_DIGLETT, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_DIGLETT
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Dugtrio::
    bufferspeciesname STR_VAR_1, SPECIES_DUGTRIO
    setvar TRAINER, SPECIES_DUGTRIO
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DUGTRIO, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_DUGTRIO, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_DUGTRIO
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Meowth::
    bufferspeciesname STR_VAR_1, SPECIES_MEOWTH
    setvar TRAINER, SPECIES_MEOWTH
    setvar CLASS, YOUNGSTER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MEOWTH, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MEOWTH, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MEOWTH
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Persian::
    bufferspeciesname STR_VAR_1, SPECIES_PERSIAN
    setvar TRAINER, SPECIES_PERSIAN
    setvar CLASS, YOUNGSTER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PERSIAN, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PERSIAN, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PERSIAN
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Psyduck::
    bufferspeciesname STR_VAR_1, SPECIES_PSYDUCK
    setvar TRAINER, SPECIES_PSYDUCK
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PSYDUCK, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PSYDUCK, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PSYDUCK
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Golduck::
    bufferspeciesname STR_VAR_1, SPECIES_GOLDUCK
    setvar TRAINER, SPECIES_GOLDUCK
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GOLDUCK, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GOLDUCK, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GOLDUCK
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Mankey::
    bufferspeciesname STR_VAR_1, SPECIES_MANKEY
    setvar TRAINER, SPECIES_MANKEY
    setvar CLASS, BLACK_BELT
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MANKEY, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MANKEY, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MANKEY
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Primeape::
    bufferspeciesname STR_VAR_1, SPECIES_PRIMEAPE
    setvar TRAINER, SPECIES_PRIMEAPE
    setvar CLASS, BLACK_BELT
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PRIMEAPE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PRIMEAPE, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PRIMEAPE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Growlithe::
    bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
    setvar TRAINER, SPECIES_GROWLITHE
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GROWLITHE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GROWLITHE, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Arcanine::
    bufferspeciesname STR_VAR_1, SPECIES_ARCANINE
    setvar TRAINER, SPECIES_ARCANINE
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ARCANINE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_ARCANINE, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_ARCANINE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Poliwag::
    bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
    setvar TRAINER, SPECIES_POLIWAG
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_POLIWAG, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_POLIWAG, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Poliwhirl::
    bufferspeciesname STR_VAR_1, SPECIES_POLIWHIRL
    setvar TRAINER, SPECIES_POLIWHIRL
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_POLIWHIRL, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_POLIWHIRL, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_POLIWHIRL
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Poliwrath::
    bufferspeciesname STR_VAR_1, SPECIES_POLIWRATH
    setvar TRAINER, SPECIES_POLIWRATH
    setvar CLASS, BLACK_BELT
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_POLIWRATH, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_POLIWRATH, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_POLIWRATH
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Abra::
    bufferspeciesname STR_VAR_1, SPECIES_ABRA
    setvar TRAINER, SPECIES_ABRA
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ABRA, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_ABRA, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_ABRA
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Kadabra::
    bufferspeciesname STR_VAR_1, SPECIES_KADABRA
    setvar TRAINER, SPECIES_KADABRA
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_KADABRA, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_KADABRA, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_KADABRA
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Alakazam::
    bufferspeciesname STR_VAR_1, SPECIES_ALAKAZAM
    setvar TRAINER, SPECIES_ALAKAZAM
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ALAKAZAM, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_ALAKAZAM, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_ALAKAZAM
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Machop::
    bufferspeciesname STR_VAR_1, SPECIES_MACHOP
    setvar TRAINER, SPECIES_MACHOP
    setvar CLASS, BLACK_BELT
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MACHOP, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MACHOP, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MACHOP
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Machoke::
    bufferspeciesname STR_VAR_1, SPECIES_MACHOKE
    setvar TRAINER, SPECIES_MACHOKE
    setvar CLASS, BLACK_BELT
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MACHOKE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MACHOKE, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MACHOKE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Machamp::
    bufferspeciesname STR_VAR_1, SPECIES_MACHAMP
    setvar TRAINER, SPECIES_MACHAMP
    setvar CLASS, BLACK_BELT
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MACHAMP, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MACHAMP, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MACHAMP
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Bellsprout::
    bufferspeciesname STR_VAR_1, SPECIES_BELLSPROUT
    setvar TRAINER, SPECIES_BELLSPROUT
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_BELLSPROUT, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_BELLSPROUT, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_BELLSPROUT
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Weepinbell::
    bufferspeciesname STR_VAR_1, SPECIES_WEEPINBELL
    setvar TRAINER, SPECIES_WEEPINBELL
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_WEEPINBELL, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_WEEPINBELL, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_WEEPINBELL
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Victreebel::
    bufferspeciesname STR_VAR_1, SPECIES_VICTREEBEL
    setvar TRAINER, SPECIES_VICTREEBEL
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_VICTREEBEL, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_VICTREEBEL, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_VICTREEBEL
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Tentacool::
    bufferspeciesname STR_VAR_1, SPECIES_TENTACOOL
    setvar TRAINER, SPECIES_TENTACOOL
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_TENTACOOL, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_TENTACOOL, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_TENTACOOL
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Tentacruel::
    bufferspeciesname STR_VAR_1, SPECIES_TENTACRUEL
    setvar TRAINER, SPECIES_TENTACRUEL
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_TENTACRUEL, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_TENTACRUEL, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_TENTACRUEL
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Geodude::
    bufferspeciesname STR_VAR_1, SPECIES_GEODUDE
    setvar TRAINER, SPECIES_GEODUDE
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GEODUDE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GEODUDE, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GEODUDE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Graveler::
    bufferspeciesname STR_VAR_1, SPECIES_GRAVELER
    setvar TRAINER, SPECIES_GRAVELER
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GRAVELER, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GRAVELER, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GRAVELER
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Golem::
    bufferspeciesname STR_VAR_1, SPECIES_GOLEM
    setvar TRAINER, SPECIES_GOLEM
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GOLEM, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GOLEM, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GOLEM
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Ponyta::
    bufferspeciesname STR_VAR_1, SPECIES_PONYTA
    setvar TRAINER, SPECIES_PONYTA
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PONYTA, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PONYTA, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PONYTA
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Rapidash::
    bufferspeciesname STR_VAR_1, SPECIES_RAPIDASH
    setvar TRAINER, SPECIES_RAPIDASH
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_RAPIDASH, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_RAPIDASH, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_RAPIDASH
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Slowpoke::
    bufferspeciesname STR_VAR_1, SPECIES_SLOWPOKE
    setvar TRAINER, SPECIES_SLOWPOKE
    setvar CLASS, BEAUTY
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SLOWPOKE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SLOWPOKE, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SLOWPOKE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Slowbro::
    bufferspeciesname STR_VAR_1, SPECIES_SLOWBRO
    setvar TRAINER, SPECIES_SLOWBRO
    setvar CLASS, BEAUTY
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SLOWBRO, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SLOWBRO, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SLOWBRO
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Magnemite::
    bufferspeciesname STR_VAR_1, SPECIES_MAGNEMITE
    setvar TRAINER, SPECIES_MAGNEMITE
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MAGNEMITE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MAGNEMITE, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MAGNEMITE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Magneton::
    bufferspeciesname STR_VAR_1, SPECIES_MAGNETON
    setvar TRAINER, SPECIES_MAGNETON
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MAGNETON, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MAGNETON, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MAGNETON
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Farfetchd::
    bufferspeciesname STR_VAR_1, SPECIES_FARFETCHD
    setvar TRAINER, SPECIES_FARFETCHD
    setvar CLASS, BIRD_KEEPER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_FARFETCHD, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_FARFETCHD, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_FARFETCHD
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Doduo::
    bufferspeciesname STR_VAR_1, SPECIES_DODUO
    setvar TRAINER, SPECIES_DODUO
    setvar CLASS, BIRD_KEEPER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DODUO, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_DODUO, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_DODUO
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Dodrio::
    bufferspeciesname STR_VAR_1, SPECIES_DODRIO
    setvar TRAINER, SPECIES_DODRIO
    setvar CLASS, BIRD_KEEPER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DODRIO, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_DODRIO, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_DODRIO
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Seel::
    bufferspeciesname STR_VAR_1, SPECIES_SEEL
    setvar TRAINER, SPECIES_SEEL
    setvar CLASS, BEAUTY
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SEEL, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SEEL, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SEEL
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Dewgong::
    bufferspeciesname STR_VAR_1, SPECIES_DEWGONG
    setvar TRAINER, SPECIES_DEWGONG
    setvar CLASS, BEAUTY
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DEWGONG, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_DEWGONG, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_DEWGONG
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Grimer::
    bufferspeciesname STR_VAR_1, SPECIES_GRIMER
    setvar TRAINER, SPECIES_GRIMER
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GRIMER, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GRIMER, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GRIMER
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Muk::
    bufferspeciesname STR_VAR_1, SPECIES_MUK
    setvar TRAINER, SPECIES_MUK
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MUK, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MUK, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MUK
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Shellder::
    bufferspeciesname STR_VAR_1, SPECIES_SHELLDER
    setvar TRAINER, SPECIES_SHELLDER
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SHELLDER, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SHELLDER, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SHELLDER
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Cloyster::
    bufferspeciesname STR_VAR_1, SPECIES_CLOYSTER
    setvar TRAINER, SPECIES_CLOYSTER
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_CLOYSTER, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_CLOYSTER, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_CLOYSTER
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Gastly::
    bufferspeciesname STR_VAR_1, SPECIES_GASTLY
    setvar TRAINER, SPECIES_GASTLY
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GASTLY, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GASTLY, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GASTLY
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Haunter::
    bufferspeciesname STR_VAR_1, SPECIES_HAUNTER
    setvar TRAINER, SPECIES_HAUNTER
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_HAUNTER, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_HAUNTER, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_HAUNTER
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Gengar::
    bufferspeciesname STR_VAR_1, SPECIES_GENGAR
    setvar TRAINER, SPECIES_GENGAR
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GENGAR, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GENGAR, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GENGAR
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Onix::
    bufferspeciesname STR_VAR_1, SPECIES_ONIX
    setvar TRAINER, SPECIES_ONIX
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ONIX, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_ONIX, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_ONIX
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Drowzee::
    bufferspeciesname STR_VAR_1, SPECIES_DROWZEE
    setvar TRAINER, SPECIES_DROWZEE
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DROWZEE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_DROWZEE, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_DROWZEE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Hypno::
    bufferspeciesname STR_VAR_1, SPECIES_HYPNO
    setvar TRAINER, SPECIES_HYPNO
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_HYPNO, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_HYPNO, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_HYPNO
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Krabby::
    bufferspeciesname STR_VAR_1, SPECIES_KRABBY
    setvar TRAINER, SPECIES_KRABBY
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_KRABBY, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_KRABBY, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_KRABBY
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Kingler::
    bufferspeciesname STR_VAR_1, SPECIES_KINGLER
    setvar TRAINER, SPECIES_KINGLER
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_KINGLER, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_KINGLER, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_KINGLER
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Voltorb::
    bufferspeciesname STR_VAR_1, SPECIES_VOLTORB
    setvar TRAINER, SPECIES_VOLTORB
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_VOLTORB, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_VOLTORB, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_VOLTORB
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Electrode::
    bufferspeciesname STR_VAR_1, SPECIES_ELECTRODE
    setvar TRAINER, SPECIES_ELECTRODE
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ELECTRODE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_ELECTRODE, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_ELECTRODE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Exeggcute::
    bufferspeciesname STR_VAR_1, SPECIES_EXEGGCUTE
    setvar TRAINER, SPECIES_EXEGGCUTE
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_EXEGGCUTE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_EXEGGCUTE, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_EXEGGCUTE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Exeggutor::
    bufferspeciesname STR_VAR_1, SPECIES_EXEGGUTOR
    setvar TRAINER, SPECIES_EXEGGUTOR
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_EXEGGUTOR, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_EXEGGUTOR, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_EXEGGUTOR
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Cubone::
    bufferspeciesname STR_VAR_1, SPECIES_CUBONE
    setvar TRAINER, SPECIES_CUBONE
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_CUBONE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_CUBONE, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_CUBONE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Marowak::
    bufferspeciesname STR_VAR_1, SPECIES_MAROWAK
    setvar TRAINER, SPECIES_MAROWAK
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MAROWAK, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MAROWAK, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MAROWAK
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Hitmonlee::
    bufferspeciesname STR_VAR_1, SPECIES_HITMONLEE
    setvar TRAINER, SPECIES_HITMONLEE
    setvar CLASS, BLACK_BELT
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_HITMONLEE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_HITMONLEE, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_HITMONLEE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Hitmonchan::
    bufferspeciesname STR_VAR_1, SPECIES_HITMONCHAN
    setvar TRAINER, SPECIES_HITMONCHAN
    setvar CLASS, BLACK_BELT
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_HITMONCHAN, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_HITMONCHAN, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_HITMONCHAN
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Lickitung::
    bufferspeciesname STR_VAR_1, SPECIES_LICKITUNG
    setvar TRAINER, SPECIES_LICKITUNG
    setvar CLASS, YOUNGSTER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_LICKITUNG, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_LICKITUNG, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_LICKITUNG
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Koffing::
    bufferspeciesname STR_VAR_1, SPECIES_KOFFING
    setvar TRAINER, SPECIES_KOFFING
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_KOFFING, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_KOFFING, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_KOFFING
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Weezing::
    bufferspeciesname STR_VAR_1, SPECIES_WEEZING
    setvar TRAINER, SPECIES_WEEZING
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_WEEZING, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_WEEZING, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_WEEZING
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Rhyhorn::
    bufferspeciesname STR_VAR_1, SPECIES_RHYHORN
    setvar TRAINER, SPECIES_RHYHORN
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_RHYHORN, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_RHYHORN, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_RHYHORN
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Rhydon::
    bufferspeciesname STR_VAR_1, SPECIES_RHYDON
    setvar TRAINER, SPECIES_RHYDON
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_RHYDON, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_RHYDON, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_RHYDON
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Chansey::
    bufferspeciesname STR_VAR_1, SPECIES_CHANSEY
    setvar TRAINER, SPECIES_CHANSEY
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_CHANSEY, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_CHANSEY, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_CHANSEY
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Tangela::
    bufferspeciesname STR_VAR_1, SPECIES_TANGELA
    setvar TRAINER, SPECIES_TANGELA
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_TANGELA, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_TANGELA, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_TANGELA
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Kangaskhan::
    bufferspeciesname STR_VAR_1, SPECIES_KANGASKHAN
    setvar TRAINER, SPECIES_KANGASKHAN
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_KANGASKHAN, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_KANGASKHAN, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_KANGASKHAN
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Horsea::
    bufferspeciesname STR_VAR_1, SPECIES_HORSEA
    setvar TRAINER, SPECIES_HORSEA
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_HORSEA, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_HORSEA, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_HORSEA
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Seadra::
    bufferspeciesname STR_VAR_1, SPECIES_SEADRA
    setvar TRAINER, SPECIES_SEADRA
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SEADRA, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SEADRA, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SEADRA
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Goldeen::
    bufferspeciesname STR_VAR_1, SPECIES_GOLDEEN
    setvar TRAINER, SPECIES_GOLDEEN
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GOLDEEN, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GOLDEEN, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GOLDEEN
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Seaking::
    bufferspeciesname STR_VAR_1, SPECIES_SEAKING
    setvar TRAINER, SPECIES_SEAKING
    setvar CLASS, SWIMMER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SEAKING, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SEAKING, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SEAKING
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Staryu::
    bufferspeciesname STR_VAR_1, SPECIES_STARYU
    setvar TRAINER, SPECIES_STARYU
    setvar CLASS, BEAUTY
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_STARYU, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_STARYU, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_STARYU
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Starmie::
    bufferspeciesname STR_VAR_1, SPECIES_STARMIE
    setvar TRAINER, SPECIES_STARMIE
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_STARMIE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_STARMIE, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_STARMIE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_MrMime::
    bufferspeciesname STR_VAR_1, SPECIES_MR_MIME
    setvar TRAINER, SPECIES_MR_MIME
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MR_MIME, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MR_MIME, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MR_MIME
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Scyther::
    bufferspeciesname STR_VAR_1, SPECIES_SCYTHER
    setvar TRAINER, SPECIES_SCYTHER
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SCYTHER, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SCYTHER, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SCYTHER
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Jynx::
    bufferspeciesname STR_VAR_1, SPECIES_JYNX
    setvar TRAINER, SPECIES_JYNX
    setvar CLASS, PSYCHIC
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_JYNX, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_JYNX, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_JYNX
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Electabuzz::
    bufferspeciesname STR_VAR_1, SPECIES_ELECTABUZZ
    setvar TRAINER, SPECIES_ELECTABUZZ
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ELECTABUZZ, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_ELECTABUZZ, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_ELECTABUZZ
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Magmar::
    bufferspeciesname STR_VAR_1, SPECIES_MAGMAR
    setvar TRAINER, SPECIES_MAGMAR
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MAGMAR, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MAGMAR, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MAGMAR
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Pinsir::
    bufferspeciesname STR_VAR_1, SPECIES_PINSIR
    setvar TRAINER, SPECIES_PINSIR
    setvar CLASS, BUG_CATCHER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PINSIR, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PINSIR, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PINSIR
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Tauros::
    bufferspeciesname STR_VAR_1, SPECIES_TAUROS
    setvar TRAINER, SPECIES_TAUROS
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_TAUROS, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_TAUROS, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_TAUROS
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Magikarp::
    bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
    setvar TRAINER, SPECIES_MAGIKARP
    setvar CLASS, YOUNGSTER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MAGIKARP, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_MAGIKARP, Text_BugCatcherYoungster_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Gyarados::
    bufferspeciesname STR_VAR_1, SPECIES_GYARADOS
    setvar TRAINER, SPECIES_GYARADOS
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_GYARADOS, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_GYARADOS, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_GYARADOS
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Lapras::
    bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
    setvar TRAINER, SPECIES_LAPRAS
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_LAPRAS, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_LAPRAS, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Ditto::
    bufferspeciesname STR_VAR_1, SPECIES_DITTO
    setvar TRAINER, SPECIES_DITTO
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DITTO, MasterTrainer_EventScript_HaveTitleNoBattle
    call MasterTrainer_EventScript_NoBattleContinue
    settrainerflag MASTER_DITTO
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_Eevee::
    bufferspeciesname STR_VAR_1, SPECIES_EEVEE
    setvar TRAINER, SPECIES_EEVEE
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_EEVEE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_EEVEE, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_EEVEE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Vaporeon::
    bufferspeciesname STR_VAR_1, SPECIES_VAPOREON
    setvar TRAINER, SPECIES_VAPOREON
    setvar CLASS, LASS
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_VAPOREON, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_VAPOREON, Text_BeautyLass_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_VAPOREON
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Jolteon::
    bufferspeciesname STR_VAR_1, SPECIES_JOLTEON
    setvar TRAINER, SPECIES_JOLTEON
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_JOLTEON, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_JOLTEON, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_JOLTEON
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Flareon::
    bufferspeciesname STR_VAR_1, SPECIES_FLAREON
    setvar TRAINER, SPECIES_FLAREON
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_FLAREON, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_FLAREON, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_FLAREON
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Porygon::
    bufferspeciesname STR_VAR_1, SPECIES_PORYGON
    setvar TRAINER, SPECIES_PORYGON
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_PORYGON, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_PORYGON, Text_PsychicScientist_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_PORYGON
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Omanyte::
    bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
    setvar TRAINER, SPECIES_OMANYTE
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_OMANYTE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_OMANYTE, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Omastar::
    bufferspeciesname STR_VAR_1, SPECIES_OMASTAR
    setvar TRAINER, SPECIES_OMASTAR
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_OMASTAR, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_OMASTAR, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_OMASTAR
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Kabuto::
    bufferspeciesname STR_VAR_1, SPECIES_KABUTO
    setvar TRAINER, SPECIES_KABUTO
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_KABUTO, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_KABUTO, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_KABUTO
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Kabutops::
    bufferspeciesname STR_VAR_1, SPECIES_KABUTOPS
    setvar TRAINER, SPECIES_KABUTOPS
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_KABUTOPS, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_KABUTOPS, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_KABUTOPS
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Aerodactyl::
    bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
    setvar TRAINER, SPECIES_AERODACTYL
    setvar CLASS, HIKER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_AERODACTYL, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_AERODACTYL, Text_BlackBeltHiker_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Snorlax::
    bufferspeciesname STR_VAR_1, SPECIES_SNORLAX
    setvar TRAINER, SPECIES_SNORLAX
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_SNORLAX, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_SNORLAX, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_SNORLAX
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Articuno::
    bufferspeciesname STR_VAR_1, SPECIES_ARTICUNO
    setvar TRAINER, SPECIES_ARTICUNO
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ARTICUNO, MasterTrainer_EventScript_HaveTitleNoBattle
    call MasterTrainer_EventScript_NoBattleContinue
    settrainerflag MASTER_ARTICUNO
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_Zapdos::
    bufferspeciesname STR_VAR_1, SPECIES_ZAPDOS
    setvar TRAINER, SPECIES_ZAPDOS
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_ZAPDOS, MasterTrainer_EventScript_HaveTitleNoBattle
    call MasterTrainer_EventScript_NoBattleContinue
    settrainerflag MASTER_ZAPDOS
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_Moltres::
    bufferspeciesname STR_VAR_1, SPECIES_MOLTRES
    setvar TRAINER, SPECIES_MOLTRES
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MOLTRES, MasterTrainer_EventScript_HaveTitleNoBattle
    call MasterTrainer_EventScript_NoBattleContinue
    settrainerflag MASTER_MOLTRES
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_Dratini::
    bufferspeciesname STR_VAR_1, SPECIES_DRATINI
    setvar TRAINER, SPECIES_DRATINI
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DRATINI, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_DRATINI, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_DRATINI
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Dragonair::
    bufferspeciesname STR_VAR_1, SPECIES_DRAGONAIR
    setvar TRAINER, SPECIES_DRAGONAIR
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DRAGONAIR, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_DRAGONAIR, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_DRAGONAIR
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Dragonite::
    bufferspeciesname STR_VAR_1, SPECIES_DRAGONITE
    setvar TRAINER, SPECIES_DRAGONITE
    setvar CLASS, COOLTRAINER
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_DRAGONITE, MasterTrainer_EventScript_HaveTitle
    call MasterTrainer_EventScript_DetermineScript
    trainerbattle_no_intro MASTER_DRAGONITE, Text_BirdKeeperCooltrainer_BattleLoss
    bufferspeciesname STR_VAR_1, SPECIES_DRAGONITE
    goto MasterTrainer_EventScript_DetermineContinueScript

MasterTrainer_EventScript_Mewtwo::
    bufferspeciesname STR_VAR_1, SPECIES_MEWTWO
    setvar TRAINER, SPECIES_MEWTWO
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MEWTWO, MasterTrainer_EventScript_HaveTitleNoBattle
    call MasterTrainer_EventScript_NoBattleContinue
    settrainerflag MASTER_MEWTWO
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_Mew::
    bufferspeciesname STR_VAR_1, SPECIES_MEW
    setvar TRAINER, SPECIES_MEW
    setvar CLASS, SCIENTIST
    setflag FLAG_MASTER_TRAINER_BATTLE
	setvar HAVE_TITLE, FALSE
    call_if_defeated MASTER_MEW, MasterTrainer_EventScript_HaveTitleNoBattle
    call MasterTrainer_EventScript_NoBattleContinue
    settrainerflag MASTER_MEW
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_HaveTitle:
    setvar HAVE_TITLE, TRUE
    return

MasterTrainer_EventScript_HaveTitleNoBattle:
    msgbox Text_Scientist_HaveTitleNoBattle MSGBOX_NPC
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

Text_Scientist_HaveTitleNoBattle:
    .string "Oh, good to see you again.\n"
    .string "How's your {STR_VAR_1} doing?$"

MasterTrainer_EventScript_DetermineScript:
    lock
    switch CLASS
    case BEAUTY, MasterTrainer_EventScript_BeautyLass
	case BIRD_KEEPER, MasterTrainer_EventScript_BirdKeeperCooltrainer
	case BLACK_BELT, MasterTrainer_EventScript_BlackBeltHiker
	case BUG_CATCHER, MasterTrainer_EventScript_BugCatcherYoungster
    case PSYCHIC, MasterTrainer_EventScript_PsychicScientist
    return

MasterTrainer_EventScript_DetermineContinueScript:
    switch CLASS
    case BEAUTY, MasterTrainer_EventScript_BeautyLassContinue
	case BIRD_KEEPER, MasterTrainer_EventScript_BirdKeeperCooltrainerContinue
	case BLACK_BELT, MasterTrainer_EventScript_BlackBeltHikerContinue
	case BUG_CATCHER, MasterTrainer_EventScript_BugCatcherYoungsterContinue
    case PSYCHIC, MasterTrainer_EventScript_PsychicScientistContinue
    end

MasterTrainer_EventScript_BeautyLass:
    faceplayer
    msgbox Text_BeautyLass_Intro, MSGBOX_DEFAULT
    callnative CheckMasterPokemonInSlot1
    compare VAR_RESULT, TRUE
    goto_if_ne MasterTrainer_EventScript_BeautyLass_NoMon
    compare HAVE_TITLE, TRUE
    call_if_eq MasterTrainer_EventScript_BeautyLass_HaveTitleAskBattle
    compare HAVE_TITLE, FALSE
    call_if_eq MasterTrainer_EventScript_BeautyLass_AskBattle
    return

MasterTrainer_EventScript_BirdKeeperCooltrainer:
    faceplayer
    msgbox Text_BirdKeeperCooltrainer_Intro, MSGBOX_DEFAULT
    callnative CheckMasterPokemonInSlot1
    compare VAR_RESULT, TRUE
    goto_if_ne MasterTrainer_EventScript_BirdKeeperCooltrainer_NoMon
    compare HAVE_TITLE, TRUE
    call_if_eq MasterTrainer_EventScript_BirdKeeperCooltrainer_HaveTitleAskBattle
    compare HAVE_TITLE, FALSE
    call_if_eq MasterTrainer_EventScript_BirdKeeperCooltrainer_AskBattle
    return

MasterTrainer_EventScript_BugCatcherYoungster:
    faceplayer
    msgbox Text_BugCatcherYoungster_Intro, MSGBOX_DEFAULT
    callnative CheckMasterPokemonInSlot1
    compare VAR_RESULT, TRUE
    goto_if_ne MasterTrainer_EventScript_BugCatcherYoungster_NoMon
    compare HAVE_TITLE, TRUE
    call_if_eq MasterTrainer_EventScript_BugCatcherYoungster_HaveTitleAskBattle
    compare HAVE_TITLE, FALSE
    call_if_eq MasterTrainer_EventScript_BugCatcherYoungster_AskBattle
    return

MasterTrainer_EventScript_PsychicScientist:
    faceplayer
    msgbox Text_PsychicScientist_Intro, MSGBOX_DEFAULT
    callnative CheckMasterPokemonInSlot1
    compare VAR_RESULT, TRUE
    goto_if_ne MasterTrainer_EventScript_PsychicScientist_NoMon
    compare HAVE_TITLE, TRUE
    call_if_eq MasterTrainer_EventScript_PsychicScientist_HaveTitleAskBattle
    compare HAVE_TITLE, FALSE
    call_if_eq MasterTrainer_EventScript_PsychicScientist_AskBattle
    return

MasterTrainer_EventScript_BlackBeltHiker:
    faceplayer
    msgbox Text_BlackBeltHiker_Intro, MSGBOX_DEFAULT
    callnative CheckMasterPokemonInSlot1
    compare VAR_RESULT, TRUE
    goto_if_ne MasterTrainer_EventScript_BlackBeltHiker_NoMon
    compare HAVE_TITLE, TRUE
    call_if_eq MasterTrainer_EventScript_BlackBeltHiker_HaveTitleAskBattle
    compare HAVE_TITLE, FALSE
    call_if_eq MasterTrainer_EventScript_BlackBeltHiker_AskBattle
    return

MasterTrainer_EventScript_BeautyLassContinue:
    special LoadPlayerParty
    specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
    goto_if_eq MasterTrainer_EventScript_BeautyLass_LostBattle
    compare VAR_RESULT, B_OUTCOME_DREW
    goto_if_eq MasterTrainer_EventScript_BeautyLass_LostBattle
    compare HAVE_TITLE, TRUE
    goto_if_ne MasterTrainer_EventScript_BeautyLass_ConferTitle
    msgbox Text_BeautyLass_AfterBattleWon, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_BirdKeeperCooltrainerContinue:
    special LoadPlayerParty
    specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
    goto_if_eq MasterTrainer_EventScript_BirdKeeperCooltrainer_LostBattle
    compare VAR_RESULT, B_OUTCOME_DREW
    goto_if_eq MasterTrainer_EventScript_BirdKeeperCooltrainer_LostBattle
    compare HAVE_TITLE, TRUE
    goto_if_ne MasterTrainer_EventScript_BirdKeeperCooltrainer_ConferTitle
    msgbox Text_BirdKeeperCooltrainer_AfterBattleWon, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_BugCatcherYoungsterContinue:
    special LoadPlayerParty
    specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
    goto_if_eq MasterTrainer_EventScript_BugCatcherYoungster_LostBattle
    compare VAR_RESULT, B_OUTCOME_DREW
    goto_if_eq MasterTrainer_EventScript_BugCatcherYoungster_LostBattle
    compare HAVE_TITLE, TRUE
    goto_if_ne MasterTrainer_EventScript_BugCatcherYoungster_ConferTitle
    msgbox Text_BugCatcherYoungster_AfterBattleWon, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_PsychicScientistContinue:
    special LoadPlayerParty
    specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
    goto_if_eq MasterTrainer_EventScript_PsychicScientist_LostBattle
    compare VAR_RESULT, B_OUTCOME_DREW
    goto_if_eq MasterTrainer_EventScript_PsychicScientist_LostBattle
    compare HAVE_TITLE, TRUE
    goto_if_ne MasterTrainer_EventScript_PsychicScientist_ConferTitle
    msgbox Text_PsychicScientist_AfterBattleWon, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_BlackBeltHikerContinue:
    special LoadPlayerParty
    specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
    goto_if_eq MasterTrainer_EventScript_BlackBeltHiker_LostBattle
    compare VAR_RESULT, B_OUTCOME_DREW
    goto_if_eq MasterTrainer_EventScript_BlackBeltHiker_LostBattle
    compare HAVE_TITLE, TRUE
    goto_if_ne MasterTrainer_EventScript_BlackBeltHiker_ConferTitle
    msgbox Text_BlackBeltHiker_AfterBattleWon, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end

MasterTrainer_EventScript_BeautyLass_NoMon:
    msgbox Text_BeautyLass_NoMon, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BirdKeeperCooltrainer_NoMon:
    msgbox Text_BirdKeeperCooltrainer_NoMon, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BugCatcherYoungster_NoMon:
    msgbox Text_BugCatcherYoungster_NoMon, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_PsychicScientist_NoMon:
    msgbox Text_PsychicScientist_NoMon, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BlackBeltHiker_NoMon:
    msgbox Text_BlackBeltHiker_NoMon, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BeautyLass_HaveTitleAskBattle:
    msgbox Text_BeautyLass_HaveTitleAskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_BeautyLass_DeclinedBattle
    msgbox Text_BeautyLass_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_BirdKeeperCooltrainer_HaveTitleAskBattle:
    msgbox Text_BirdKeeperCooltrainer_HaveTitleAskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_BirdKeeperCooltrainer_DeclinedBattle
    msgbox Text_BirdKeeperCooltrainer_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_BugCatcherYoungster_HaveTitleAskBattle:
    msgbox Text_BugCatcherYoungster_HaveTitleAskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_BugCatcherYoungster_DeclinedBattle
    msgbox Text_BugCatcherYoungster_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_PsychicScientist_HaveTitleAskBattle:
    msgbox Text_PsychicScientist_HaveTitleAskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_PsychicScientist_DeclinedBattle
    msgbox Text_PsychicScientist_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_BlackBeltHiker_HaveTitleAskBattle:
    msgbox Text_BlackBeltHiker_HaveTitleAskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_BlackBeltHiker_DeclinedBattle
    msgbox Text_BlackBeltHiker_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_BeautyLass_AskBattle:
    msgbox Text_BeautyLass_AskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_BeautyLass_DeclinedBattle
    msgbox Text_BeautyLass_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_BirdKeeperCooltrainer_AskBattle:
    msgbox Text_BirdKeeperCooltrainer_AskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_BirdKeeperCooltrainer_DeclinedBattle
    msgbox Text_BirdKeeperCooltrainer_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_BugCatcherYoungster_AskBattle:
    msgbox Text_BugCatcherYoungster_AskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_BugCatcherYoungster_DeclinedBattle
    msgbox Text_BugCatcherYoungster_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_PsychicScientist_AskBattle:
    msgbox Text_PsychicScientist_AskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_PsychicScientist_DeclinedBattle
    msgbox Text_PsychicScientist_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_BlackBeltHiker_AskBattle:
    msgbox Text_BlackBeltHiker_AskBattle, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_ne MasterTrainer_EventScript_BlackBeltHiker_DeclinedBattle
    msgbox Text_BlackBeltHiker_AcceptedBattle, MSGBOX_DEFAULT
    special SavePlayerParty
    callnative ClearAllButFirstPokemon
    callnative HealPlayerPartyOak
    return

MasterTrainer_EventScript_BeautyLass_DeclinedBattle:
    msgbox Text_BeautyLass_DeclinedBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BirdKeeperCooltrainer_DeclinedBattle:
    msgbox Text_BirdKeeperCooltrainer_DeclinedBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BugCatcherYoungster_DeclinedBattle:
    msgbox Text_BugCatcherYoungster_DeclinedBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_PsychicScientist_DeclinedBattle:
    msgbox Text_PsychicScientist_DeclinedBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BlackBeltHiker_DeclinedBattle:
    msgbox Text_BlackBeltHiker_DeclinedBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BeautyLass_LostBattle:
    msgbox Text_BeautyLass_LostBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BirdKeeperCooltrainer_LostBattle:
    msgbox Text_BirdKeeperCooltrainer_LostBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BugCatcherYoungster_LostBattle:
    msgbox Text_BugCatcherYoungster_LostBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_PsychicScientist_LostBattle:
    msgbox Text_PsychicScientist_LostBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BlackBeltHiker_LostBattle:
    msgbox Text_BlackBeltHiker_LostBattle, MSGBOX_DEFAULT
    release
    clearflag FLAG_MASTER_TRAINER_BATTLE
    end

MasterTrainer_EventScript_BeautyLass_ConferTitle:
    msgbox Text_BeautyLass_GiveTitle, MSGBOX_DEFAULT
    message Text_MasterTrainer_EarnTitle
    waitmessage
    playfanfare MUS_LEVEL_UP
    waitfanfare
    waitbuttonpress
    msgbox Text_BeautyLass_AnotherBattleSometime, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    resetobjectmovementtype VAR_LAST_TALKED
    release
    end

MasterTrainer_EventScript_BirdKeeperCooltrainer_ConferTitle:
    msgbox Text_BirdKeeperCooltrainer_GiveTitle, MSGBOX_DEFAULT
    message Text_MasterTrainer_EarnTitle
    waitmessage
    playfanfare MUS_LEVEL_UP
    waitfanfare
    waitbuttonpress
    msgbox Text_BirdKeeperCooltrainer_AnotherBattleSometime, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    resetobjectmovementtype VAR_LAST_TALKED
    release
    end

MasterTrainer_EventScript_BugCatcherYoungster_ConferTitle:
    msgbox Text_BugCatcherYoungster_GiveTitle, MSGBOX_DEFAULT
    message Text_MasterTrainer_EarnTitle
    waitmessage
    playfanfare MUS_LEVEL_UP
    waitfanfare
    waitbuttonpress
    msgbox Text_BugCatcherYoungster_AnotherBattleSometime, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    resetobjectmovementtype VAR_LAST_TALKED
    release
    end

MasterTrainer_EventScript_PsychicScientist_ConferTitle:
    msgbox Text_PsychicScientist_GiveTitle, MSGBOX_DEFAULT
    message Text_MasterTrainer_EarnTitle
    waitmessage
    playfanfare MUS_LEVEL_UP
    waitfanfare
    waitbuttonpress
    msgbox Text_PsychicScientist_AnotherBattleSometime, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    resetobjectmovementtype VAR_LAST_TALKED
    release
    end

MasterTrainer_EventScript_BlackBeltHiker_ConferTitle:
    msgbox Text_BlackBeltHiker_GiveTitle, MSGBOX_DEFAULT
    message Text_MasterTrainer_EarnTitle
    waitmessage
    playfanfare MUS_LEVEL_UP
    waitfanfare
    waitbuttonpress
    msgbox Text_BlackBeltHiker_AnotherBattleSometime, MSGBOX_DEFAULT
    clearflag FLAG_MASTER_TRAINER_BATTLE
    resetobjectmovementtype VAR_LAST_TALKED
    release
    end

MasterTrainer_EventScript_NoBattleContinue:
    faceplayer
    msgbox Text_PsychicScientist_Intro, MSGBOX_DEFAULT
    msgbox Text_Scientist_SeePowerfulMon, MSGBOX_DEFAULT
    callnative CheckMasterPokemonInSlot1
    compare VAR_RESULT, FALSE
    goto_if_eq MasterTrainer_EventScript_ReleaseEndClearFlag
    callnative CheckSlot1EVTotal
    compare VAR_RESULT, FALSE
    goto_if_eq MasterTrainer_EventScript_ReleaseEndClearFlag
    msgbox Text_Scientist_ShowPowerfulMon, MSGBOX_DEFAULT
    message Text_MasterTrainer_EarnTitle
    waitmessage
    playfanfare MUS_LEVEL_UP
    waitfanfare
    waitbuttonpress
    resetobjectmovementtype VAR_LAST_TALKED
    return

MasterTrainer_EventScript_ReleaseEndClearFlag:
    clearflag FLAG_MASTER_TRAINER_BATTLE
    release
    end


Text_Scientist_SeePowerfulMon:
    .string "Ce serait merveilleux de voir un\n"
    .string "{STR_VAR_1} vraiment puissant, ne\n"
    .string "serait-ce qu’une seule fois.$"

Text_Scientist_ShowPowerfulMon:
    .string "Voyons voir ce qu’on a là…\p"
    .string "Ce {STR_VAR_1}!\n"
    .string "Il dégage une aura particulière!\p"
    .string "Sa prestance… On sent qu’il\n"
    .string "rayonne de puissance…\l"
    .string "Merveilleux!\p"
    .string "Merci à toi… Tu m’as montré un\n"
    .string "POKÉMON vraiment exceptionnel.\p"
    .string "Je pense que tu mérites le titre de\n"
    .string "MAÎTRE {STR_VAR_1}!$"

Text_BeautyLass_Intro:
    .string "Je suis la MAÎTRESSE des {STR_VAR_1}!\p"
    .string "Mon but est de trouver le {STR_VAR_1}\n"
    .string "ultime!$"

Text_BirdKeeperCooltrainer_Intro:
    .string "Je suis le MAÎTRE des {STR_VAR_1}!\p"
    .string "Je cherche le {STR_VAR_1} ultime\n"
    .string "à trouver…$"

Text_BugCatcherYoungster_Intro:
    .string "Je suis le MAÎTRE des {STR_VAR_1}!\n"
    .string "Je cherche le {STR_VAR_1} ultime!$"

Text_PsychicScientist_Intro:
    .string "Je suis le MAÎTRE des {STR_VAR_1}!\n"
    .string "Je cherche le {STR_VAR_1} ultime.$"

Text_BlackBeltHiker_Intro:
    .string "Je suis le MAÎTRE des {STR_VAR_1}!\p"
    .string "Je veux seulement trouver\n"
    .string "le {STR_VAR_1} ultime!$"

Text_BeautyLass_NoMon:
    .string "N’oublie pas de placer ton {STR_VAR_1}\n"
    .string "en haut à gauche de ton équipe\l"
    .string "si tu veux m’affronter!$"

Text_BirdKeeperCooltrainer_NoMon:
    .string "Si tu veux m’affronter, place ton\n"
    .string "{STR_VAR_1} en haut à gauche\l"
    .string "de ton équipe!$"

Text_BugCatcherYoungster_NoMon:
    .string "Si tu veux m’affronter,\n"
    .string "mets ton {STR_VAR_1} en\l"
    .string "haut à gauche de ton équipe!$"

Text_PsychicScientist_NoMon:
    .string "Si tu veux m’affronter, tu dois\n"
    .string "placer ton {STR_VAR_1} en haut\l"
    .string "à gauche de ton équipe!$"

Text_BlackBeltHiker_NoMon:
    .string "Place ton {STR_VAR_1} en haut à\n"
    .string "gauche de ton équipe si tu veux\l"
    .string "m’affronter en combat!$"

Text_BeautyLass_AskBattle:
    .string "Hé, ton {STR_VAR_1} a l’air plutôt\n"
    .string "fort!\p"
    .string "Je peux l’affronter avec mon\n"
    .string "{STR_VAR_1}…? S’il te plaaît?$"

Text_BirdKeeperCooltrainer_AskBattle:
    .string "Tiens donc… Tu as un\n"
    .string "{STR_VAR_1} qui a l’air costaud!\p"
    .string "Pourquoi ne pas le faire lutter\n"
    .string "contre mon {STR_VAR_1}?$"

Text_BugCatcherYoungster_AskBattle:
    .string "Hééé, ton {STR_VAR_1} a l’air\n"
    .string "puissant, pas vrai?\p"
    .string "Allez, tu devrais le faire\n"
    .string "combattre le mien!$"

Text_PsychicScientist_AskBattle:
    .string "Oh? Ton {STR_VAR_1} a l’air\n"
    .string "vraiment puissant…\p"
    .string "Voudrais-tu affronter mon\n"
    .string "{STR_VAR_1}?$"

Text_BlackBeltHiker_AskBattle:
    .string "Hmm? Ton {STR_VAR_1} a l’air très\n"
    .string "fort!\p"
    .string "Pourquoi ne pas l’opposer à\n"
    .string "mon {STR_VAR_1}?$"

Text_BeautyLass_HaveTitleAskBattle:
    .string "Coucou! Ton {STR_VAR_1} est-il\n"
    .string "devenu plus fort?\p"
    .string "Je peux l’affronter avec mon\n"
    .string "{STR_VAR_1}…? S’il te plaaît?$"

Text_BirdKeeperCooltrainer_HaveTitleAskBattle:
    .string "Oh, salut! Ton {STR_VAR_1} est-il\n"
    .string "devenu plus fort?\p"
    .string "Pourquoi ne pas le faire lutter\n"
    .string "contre mon {STR_VAR_1}?$"

Text_BugCatcherYoungster_HaveTitleAskBattle:
    .string "Hé, ça va? Tu entraînes encore\n"
    .string "ton {STR_VAR_1}, pas vrai!\p"
    .string "Allez, tu devrais le faire\n"
    .string "combattre le mien!$"

Text_PsychicScientist_HaveTitleAskBattle:
    .string "Oh, content de te revoir.\n"
    .string "Comment va ton {STR_VAR_1}?\p"
    .string "Voudrais-tu l’opposer à mon\n"
    .string "{STR_VAR_1}?$"

Text_BlackBeltHiker_HaveTitleAskBattle:
    .string "Hé, toi! Comment va ton\n"
    .string "{STR_VAR_1} ces derniers temps?\p"
    .string "Pourquoi ne pas l’opposer à\n"
    .string "mon {STR_VAR_1}?$"

Text_BeautyLass_DeclinedBattle:
    .string "Bouh!\n"
    .string "Je voulais montrer mon {STR_VAR_1}!$"

Text_BirdKeeperCooltrainer_DeclinedBattle:
    .string "Dommage! Je ne peux donc pas te\n"
    .string "montrer comme mon {STR_VAR_1}\l"
    .string "est génial!$"

Text_BugCatcherYoungster_DeclinedBattle:
    .string "Tsk! J’aurais vraiment aimé voir\n"
    .string "ton {STR_VAR_1} en action…$"

Text_PsychicScientist_DeclinedBattle:
    .string "Quel dommage de ne pouvoir te\n"
    .string "montrer la force de mon {STR_VAR_1}.$"

Text_BlackBeltHiker_DeclinedBattle:
    .string "Hmm, mon {STR_VAR_1} te ferait-il\n"
    .string "peur?$"

Text_BeautyLass_AcceptedBattle:
    .string "Voyons lequel est le {STR_VAR_1}\n"
    .string "le plus fort!$"

Text_BirdKeeperCooltrainer_AcceptedBattle:
    .string "Très bien!\n"
    .string "Il est temps pour {STR_VAR_3} combat\n"
    .string "de {STR_VAR_1}!$"

Text_BugCatcherYoungster_AcceptedBattle:
    .string "Voyons quel {STR_VAR_1} est le\n"
    .string "plus puissant!$"

Text_PsychicScientist_AcceptedBattle:
    .string "Très bien, j’espère que tu es prêt!\n"
    .string "En avant, {STR_VAR_1}!$"

Text_BlackBeltHiker_AcceptedBattle:
    .string "Allons-y, {STR_VAR_1}!\n"
    .string "Menons un combat honorable!$"

Text_BeautyLass_LostBattle:
    .string "Héhé! Je savais que mon {STR_VAR_1}\n"
    .string "était le meilleur du meilleur!$"

Text_BirdKeeperCooltrainer_LostBattle:
    .string "Hahaha! Je savais que mon {STR_VAR_1}\n"
    .string "était le meilleur de tous!$"

Text_BugCatcherYoungster_LostBattle:
    .string "On a réussi! Je savais que mon\n"
    .string "{STR_VAR_1} était le meilleur!$"

Text_PsychicScientist_LostBattle:
    .string "Héhéhé… Je savais que mon {STR_VAR_1}\n"
    .string "était le plus puissant\l"
    .string "de tous.$"

Text_BlackBeltHiker_LostBattle:
    .string "Bahaha! Évidemment que mon\n"
    .string "{STR_VAR_1} est le meilleur!$"

Text_BeautyLass_BattleLoss:
    .string "Cette force, c’est du sérieux!$"

Text_BirdKeeperCooltrainer_BattleLoss:
    .string "Cette force est authentique.$"

Text_BugCatcherYoungster_BattleLoss:
    .string "Cette force, c’est pas pour rire!$"

Text_PsychicScientist_BattleLoss:
    .string "Cela ressemble à la vraie force.$"

Text_BlackBeltHiker_BattleLoss:
    .string "Ça, c’est de la vraie force!$"

Text_BeautyLass_AfterBattleWon:
    .string "Oh, waouh… Ton {STR_VAR_1} est bien\n"
    .string "plus fort que je ne pensais!\p"
    .string "On devrait refaire un combat\n"
    .string "un jour, puisque nous aimons\l"
    .string "tant les {STR_VAR_1}!$"

Text_BirdKeeperCooltrainer_AfterBattleWon:
    .string "J’y crois pas… Ton {STR_VAR_1}…\n"
    .string "Il est trop puissant!\p"
    .string "On dirait qu’on aime tous les deux\n"
    .string "les {STR_VAR_1}, alors remettons ça!$"

Text_BugCatcherYoungster_AfterBattleWon:
    .string "Oh, allez! Ton {STR_VAR_1} est bien\n"
    .string "trop fort!\p"
    .string "J’aimerais trop qu’on refasse un\n"
    .string "combat, entre fans de {STR_VAR_1}!$"

Text_PsychicScientist_AfterBattleWon:
    .string "Je n’arrive pas à y croire… Ton\n"
    .string "{STR_VAR_1} est trop puissant!\p"
    .string "En tant que passionnés de\n"
    .string "{STR_VAR_1}, nous devrions\l"
    .string "clairement nous revoir!$"

Text_BlackBeltHiker_AfterBattleWon:
    .string "M-mais comment…? Ton {STR_VAR_1} est\n"
    .string "plus puissant que tout ce que\l"
    .string "j’ai vu jusqu’ici!\p"
    .string "En tant que passionnés de\n"
    .string "{STR_VAR_1}, on est presque famille!\l"
    .string "Il faut qu’on se batte à nouveau!$"

Text_BeautyLass_GiveTitle:
    .string "Oh, waouh… Ton {STR_VAR_1} est bien\n"
    .string "plus fort que je ne pensais!\p"
    .string "Je pense que tu mérites d’être\n"
    .string "appelé {STR_VAR_3} MAÎTRE {STR_VAR_1}!$"

Text_BirdKeeperCooltrainer_GiveTitle:
    .string "J’y crois pas… Ton {STR_VAR_1}…\n"
    .string "Il est trop puissant!\p"
    .string "C’est toi qui mérites le titre\n"
    .string "de MAÎTRE {STR_VAR_1}!$"

Text_BugCatcherYoungster_GiveTitle:
    .string "Oh, allez! Ton {STR_VAR_1} est bien\n"
    .string "trop fort!\p"
    .string "Tu mérites clairement le titre\n"
    .string "de MAÎTRE {STR_VAR_1}!$"

Text_PsychicScientist_GiveTitle:
    .string "Je n’arrive pas à y croire… Ton\n"
    .string "{STR_VAR_1} est trop puissant!\p"
    .string "Je pense que tu mérites le titre\n"
    .string "de MAÎTRE {STR_VAR_1}!$"

Text_BlackBeltHiker_GiveTitle:
    .string "M-mais comment…? Ton {STR_VAR_1} est\n"
    .string "plus puissant que tout ce que\l"
    .string "j’ai vu jusqu’ici!\p"
    .string "Tu mérites vraiment le titre de\n"
    .string "MAÎTRE {STR_VAR_1}!$"

Text_MasterTrainer_EarnTitle:
    .string "{COLOR DARK_GRAY}Tu as gagné le titre de\n"
    .string "MAÎTRE {STR_VAR_1}!$"

Text_BeautyLass_AnotherBattleSometime:
    .string "On devrait refaire un combat\n"
    .string "un jour, puisque nous aimons\l"
    .string "tant les {STR_VAR_1}!$"

Text_BirdKeeperCooltrainer_AnotherBattleSometime:
    .string "On dirait qu’on aime tous les deux\n"
    .string "les {STR_VAR_1}, alors remettons ça!$"

Text_BugCatcherYoungster_AnotherBattleSometime:
    .string "J’aimerais trop qu’on refasse un\n"
    .string "combat, entre fans de {STR_VAR_1}!$"

Text_PsychicScientist_AnotherBattleSometime:
    .string "En tant que passionnés de\n"
    .string "{STR_VAR_1}, nous devrions\l"
    .string "clairement nous revoir!$"

Text_BlackBeltHiker_AnotherBattleSometime:
    .string "En tant que passionnés de\n"
    .string "{STR_VAR_1}, on est presque une famille!\l"
    .string "On doit se battre à nouveau!$"
