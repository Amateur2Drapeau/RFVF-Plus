VictoryRoad_2F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_DOUBLE_EDGE, EventScript_DoubleEdgeReteach
	msgbox Text_DoubleEdgeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined
	msgbox Text_DoubleEdgeWhichMon
	setvar VAR_0x8005, MOVETUTOR_DOUBLE_EDGE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeDeclined
	setflag FLAG_TUTOR_DOUBLE_EDGE
	goto EventScript_DoubleEdgeTaught
	end

EventScript_DoubleEdgeDeclined::
	msgbox Text_DoubleEdgeDeclined
	release
	end

EventScript_DoubleEdgeTaught::
	msgbox Text_DoubleEdgeTaught
	release
	end

EventScript_DoubleEdgeReteach::
	lock
	faceplayer
	msgbox Text_DoubleEdgeReteach
	showmoneybox 0, 0
	msgbox Text_DoubleEdgeReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeNotEnoughMoney
	msgbox Text_DoubleEdgeWhichMon
	setvar VAR_0x8005, MOVETUTOR_DOUBLE_EDGE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_DoubleEdgeTaught
	hidemoneybox
	release
	end

EventScript_DoubleEdgeNotEnoughMoney::
	msgbox Text_DoubleEdgeNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_DoubleEdgeDeclined2::
	msgbox Text_DoubleEdgeDeclined
	hidemoneybox
	release
	end

EventScript_ThunderWaveTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_THUNDER_WAVE, EventScript_ThunderWaveReteach
	msgbox Text_ThunderWaveTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined
	msgbox Text_ThunderWaveWhichMon
	setvar VAR_0x8005, MOVETUTOR_THUNDER_WAVE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveDeclined
	setflag FLAG_TUTOR_THUNDER_WAVE
	goto EventScript_ThunderWaveTaught
	end

EventScript_ThunderWaveDeclined::
	msgbox Text_ThunderWaveDeclined
	release
	end

EventScript_ThunderWaveTaught::
	msgbox Text_ThunderWaveTaught
	release
	end

EventScript_ThunderWaveReteach::
	lock
	faceplayer
	msgbox Text_ThunderWaveReteach
	showmoneybox 0, 0
	msgbox Text_ThunderWaveReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveNotEnoughMoney
	msgbox Text_ThunderWaveWhichMon
	setvar VAR_0x8005, MOVETUTOR_THUNDER_WAVE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_ThunderWaveTaught
	hidemoneybox
	release
	end

EventScript_ThunderWaveNotEnoughMoney::
	msgbox Text_ThunderWaveNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_ThunderWaveDeclined2::
	msgbox Text_ThunderWaveDeclined
	hidemoneybox
	release
	end

RockTunnel_B1F_EventScript_RockSlideTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_ROCK_SLIDE, EventScript_RockSlideReteach
	msgbox Text_RockSlideTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined
	msgbox Text_RockSlideWhichMon
	setvar VAR_0x8005, MOVETUTOR_ROCK_SLIDE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideDeclined
	setflag FLAG_TUTOR_ROCK_SLIDE
	goto EventScript_RockSlideTaught
	end

EventScript_RockSlideDeclined::
	msgbox Text_RockSlideDeclined
	release
	end

EventScript_RockSlideTaught::
	msgbox Text_RockSlideTaught
	release
	end

EventScript_RockSlideReteach::
	lock
	faceplayer
	msgbox Text_RockSlideReteach
	showmoneybox 0, 0
	msgbox Text_RockSlideReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideNotEnoughMoney
	msgbox Text_RockSlideWhichMon
	setvar VAR_0x8005, MOVETUTOR_ROCK_SLIDE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_RockSlideTaught
	hidemoneybox
	release
	end

EventScript_RockSlideNotEnoughMoney::
	msgbox Text_RockSlideNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_RockSlideDeclined2::
	msgbox Text_RockSlideDeclined
	hidemoneybox
	release
	end

MtEmber_Exterior_EventScript_ExplosionTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_EXPLOSION, EventScript_ExplosionReteach
	msgbox Text_ExplosionTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ExplosionDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_ExplosionDeclined
	msgbox Text_ExplosionWhichMon
	setvar VAR_0x8005, MOVETUTOR_EXPLOSION
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_ExplosionDeclined
	setflag FLAG_TUTOR_EXPLOSION
	goto EventScript_ExplosionTaught
	end

EventScript_ExplosionDeclined::
	msgbox Text_ExplosionDeclined
	release
	end

EventScript_ExplosionTaught::
	msgbox Text_ExplosionTaught
	release
	end

EventScript_ExplosionReteach::
	lock
	faceplayer
	msgbox Text_ExplosionReteach
	showmoneybox 0, 0
	msgbox Text_ExplosionReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ExplosionDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_ExplosionNotEnoughMoney
	msgbox Text_ExplosionWhichMon
	setvar VAR_0x8005, MOVETUTOR_EXPLOSION
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_ExplosionDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_ExplosionTaught
	hidemoneybox
	release
	end

EventScript_ExplosionDeclined2::
	msgbox Text_ExplosionDeclined
	hidemoneybox
	release
	end

EventScript_ExplosionNotEnoughMoney::
	msgbox Text_ExplosionNotEnoughMoney
	hidemoneybox
	release
	end

Route4_EventScript_MegaPunchTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_MEGA_PUNCH, EventScript_MegaPunchReteach
	msgbox Text_MegaPunchTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined
	msgbox Text_MegaPunchWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_PUNCH
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchDeclined
	setflag FLAG_TUTOR_MEGA_PUNCH
	goto EventScript_MegaPunchTaught
	end

EventScript_MegaPunchDeclined::
	msgbox Text_MegaPunchDeclined
	release
	end

EventScript_MegaPunchTaught::
	msgbox Text_MegaPunchTaught
	release
	end

EventScript_MegaPunchReteach::
	lock
	faceplayer
	msgbox Text_MegaPunchReteach
	showmoneybox 0, 0
	msgbox Text_MegaPunchReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchNotEnoughMoney
	msgbox Text_MegaPunchWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_PUNCH
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_MegaPunchTaught
	hidemoneybox
	release
	end

EventScript_MegaPunchDeclined2::
	msgbox Text_MegaPunchDeclined
	hidemoneybox
	release
	end

EventScript_MegaPunchNotEnoughMoney::
	msgbox Text_MegaPunchNotEnoughMoney
	hidemoneybox
	release
	end

Route4_EventScript_MegaKickTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_MEGA_KICK, EventScript_MegaKickReteach
	msgbox Text_MegaKickTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined
	msgbox Text_MegaKickWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_KICK
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickDeclined
	setflag FLAG_TUTOR_MEGA_KICK
	goto EventScript_MegaKickTaught
	end

EventScript_MegaKickDeclined::
	msgbox Text_MegaKickDeclined
	release
	end

EventScript_MegaKickTaught::
	msgbox Text_MegaKickTaught
	release
	end

EventScript_MegaKickReteach::
	lock
	faceplayer
	msgbox Text_MegaKickReteach
	showmoneybox 0, 0
	msgbox Text_MegaKickReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickNotEnoughMoney
	msgbox Text_MegaKickWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_KICK
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_MegaKickTaught
	hidemoneybox
	release
	end

EventScript_MegaKickDeclined2::
	msgbox Text_MegaKickDeclined
	hidemoneybox
	release
	end

EventScript_MegaKickNotEnoughMoney::
	msgbox Text_MegaKickNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_DreamEaterTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_DREAM_EATER, EventScript_DreamEaterReteach
	msgbox Text_DreamEaterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined
	msgbox Text_DreamEaterWhichMon
	setvar VAR_0x8005, MOVETUTOR_DREAM_EATER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterDeclined
	setflag FLAG_TUTOR_DREAM_EATER
	goto EventScript_DreamEaterTaught
	end

EventScript_DreamEaterDeclined::
	msgbox Text_DreamEaterDeclined
	release
	end

EventScript_DreamEaterTaught::
	msgbox Text_DreamEaterTaught
	release
	end

EventScript_DreamEaterReteach::
	lock
	faceplayer
	msgbox Text_DreamEaterReteach
	showmoneybox 0, 0
	msgbox Text_DreamEaterReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterNotEnoughMoney
	msgbox Text_DreamEaterWhichMon
	setvar VAR_0x8005, MOVETUTOR_DREAM_EATER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_DreamEaterTaught
	hidemoneybox
	release
	end

EventScript_DreamEaterDeclined2::
	msgbox Text_DreamEaterDeclined
	hidemoneybox
	release
	end

EventScript_DreamEaterNotEnoughMoney::
	msgbox Text_DreamEaterNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_SoftboiledTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SOFT_BOILED, EventScript_SoftboiledReteach
	msgbox Text_SoftboiledTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined
	msgbox Text_SoftboiledWhichMon
	setvar VAR_0x8005, MOVETUTOR_SOFT_BOILED
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledDeclined
	setflag FLAG_TUTOR_SOFT_BOILED
	goto EventScript_SoftboiledTaught
	end

EventScript_SoftboiledDeclined::
	msgbox Text_SoftboiledDeclined
	release
	end

EventScript_SoftboiledTaught::
	msgbox Text_SoftboiledTaught
	release
	end

EventScript_SoftboiledReteach::
	lock
	faceplayer
	msgbox Text_SoftboiledReteach
	showmoneybox 0, 0
	msgbox Text_SoftboiledReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledNotEnoughMoney
	msgbox Text_SoftboiledWhichMon
	setvar VAR_0x8005, MOVETUTOR_SOFT_BOILED
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_SoftboiledTaught
	hidemoneybox
	release
	end

EventScript_SoftboiledDeclined2::
	msgbox Text_SoftboiledDeclined
	hidemoneybox
	release
	end

EventScript_SoftboiledNotEnoughMoney::
	msgbox Text_SoftboiledNotEnoughMoney
	hidemoneybox
	release
	end

FuchsiaCity_EventScript_SubstituteTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SUBSTITUTE, EventScript_SubstituteReteach
	msgbox Text_SubstituteTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined
	msgbox Text_SubstituteWhichMon
	setvar VAR_0x8005, MOVETUTOR_SUBSTITUTE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteDeclined
	setflag FLAG_TUTOR_SUBSTITUTE
	goto EventScript_SubstituteTaught
	end

EventScript_SubstituteDeclined::
	msgbox Text_SubstituteDeclined
	release
	end

EventScript_SubstituteTaught::
	msgbox Text_SubstituteTaught
	release
	end

EventScript_SubstituteReteach::
	lock
	faceplayer
	msgbox Text_SubstituteReteach
	showmoneybox 0, 0
	msgbox Text_SubstituteReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteNotEnoughMoney
	msgbox Text_SubstituteWhichMon
	setvar VAR_0x8005, MOVETUTOR_SUBSTITUTE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_SubstituteTaught
	hidemoneybox
	release
	end

EventScript_SubstituteDeclined2::
	msgbox Text_SubstituteDeclined
	hidemoneybox
	release
	end

EventScript_SubstituteNotEnoughMoney::
	msgbox Text_SubstituteNotEnoughMoney
	hidemoneybox
	release
	end

SevenIsland_EventScript_SwordsDanceTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SWORDS_DANCE, EventScript_SwordsDanceReteach
	msgbox Text_SwordsDanceTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
	msgbox Text_SwordsDanceWhichMon
	setvar VAR_0x8005, MOVETUTOR_SWORDS_DANCE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceDeclined
	setflag FLAG_TUTOR_SWORDS_DANCE
	goto EventScript_SwordsDanceTaught
	end

EventScript_SwordsDanceDeclined::
	msgbox Text_SwordsDanceDeclined
	release
	end

EventScript_SwordsDanceTaught::
	msgbox Text_SwordsDanceTaught
	release
	end

EventScript_SwordsDanceReteach::
	lock
	faceplayer
	msgbox Text_SwordsDanceReteach
	showmoneybox 0, 0
	msgbox Text_SwordsDanceReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceNotEnoughMoney
	msgbox Text_SwordsDanceWhichMon
	setvar VAR_0x8005, MOVETUTOR_SWORDS_DANCE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_SwordsDanceTaught
	hidemoneybox
	release
	end

EventScript_SwordsDanceDeclined2::
	msgbox Text_SwordsDanceDeclined
	hidemoneybox
	release
	end

EventScript_SwordsDanceNotEnoughMoney::
	msgbox Text_SwordsDanceNotEnoughMoney
	hidemoneybox
	release
	end

PewterCity_Museum_1F_EventScript_SeismicTossTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SEISMIC_TOSS, EventScript_SeismicTossReteach
	msgbox Text_SeismicTossTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined
	msgbox Text_SeismicTossWhichMon
	setvar VAR_0x8005, MOVETUTOR_SEISMIC_TOSS
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossDeclined
	setflag FLAG_TUTOR_SEISMIC_TOSS
	goto EventScript_SeismicTossTaught
	end

EventScript_SeismicTossDeclined::
	msgbox Text_SeismicTossDeclined
	release
	end

EventScript_SeismicTossTaught::
	msgbox Text_SeismicTossTaught
	release
	end

EventScript_SeismicTossReteach::
	lock
	faceplayer
	msgbox Text_SeismicTossReteach
	showmoneybox 0, 0
	msgbox Text_SeismicTossReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossNotEnoughMoney
	msgbox Text_SeismicTossWhichMon
	setvar VAR_0x8005, MOVETUTOR_SEISMIC_TOSS
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_SeismicTossTaught
	hidemoneybox
	release
	end

EventScript_SeismicTossDeclined2::
	msgbox Text_SeismicTossDeclined
	hidemoneybox
	release
	end

EventScript_SeismicTossNotEnoughMoney::
	msgbox Text_SeismicTossNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_CounterTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_COUNTER, EventScript_CounterReteach
	msgbox Text_CounterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined
	msgbox Text_CounterWhichMon
	setvar VAR_0x8005, MOVETUTOR_COUNTER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterDeclined
	setflag FLAG_TUTOR_COUNTER
	goto EventScript_CounterTaught
	end

EventScript_CounterDeclined::
	msgbox Text_CounterDeclined
	release
	end

EventScript_CounterTaught::
	msgbox Text_CounterTaught
	release
	end

EventScript_CounterReteach::
	lock
	faceplayer
	msgbox Text_CounterReteach
	showmoneybox 0, 0
	msgbox Text_CounterReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterNotEnoughMoney
	msgbox Text_CounterWhichMon
	setvar VAR_0x8005, MOVETUTOR_COUNTER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_CounterTaught
	hidemoneybox
	release
	end

EventScript_CounterDeclined2::
	msgbox Text_CounterDeclined
	hidemoneybox
	release
	end

EventScript_CounterNotEnoughMoney::
	msgbox Text_CounterNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_MetronomeTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_METRONOME, EventScript_MetronomeReteach
	msgbox Text_MetronomeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined
	msgbox Text_MetronomeWhichMon
	setvar VAR_0x8005, MOVETUTOR_METRONOME
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeDeclined
	setflag FLAG_TUTOR_METRONOME
	goto EventScript_MetronomeTaught
	end

EventScript_MetronomeDeclined::
	msgbox Text_MetronomeDeclined
	release
	end

EventScript_MetronomeTaught::
	msgbox Text_MetronomeTaught
	release
	end

EventScript_MetronomeReteach::
	lock
	faceplayer
	msgbox Text_MetronomeReteach
	showmoneybox 0, 0
	msgbox Text_MetronomeReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeNotEnoughMoney
	msgbox Text_MetronomeWhichMon
	setvar VAR_0x8005, MOVETUTOR_METRONOME
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_MetronomeTaught
	hidemoneybox
	release
	end

EventScript_MetronomeDeclined2::
	msgbox Text_MetronomeDeclined
	hidemoneybox
	release
	end

EventScript_MetronomeNotEnoughMoney::
	msgbox Text_MetronomeNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_MimicTutor::
	goto_if_set FLAG_TUTOR_MIMIC, EventScript_MimicReteach
	msgbox Text_MimicTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined
	msgbox Text_MimicWhichMon
	setvar VAR_0x8005, MOVETUTOR_MIMIC
	call EventScript_ChooseMoveTutorMon
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, EventScript_MimicDeclined
	removeitem ITEM_POKE_DOLL, 1
	setflag FLAG_TUTOR_MIMIC
	goto EventScript_MimicTaught
	end

EventScript_MimicDeclined::
	msgbox Text_MimicDeclined
	release
	end

EventScript_MimicTaught::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EventScript_MimicTaughtMale
	call_if_eq VAR_RESULT, FEMALE, EventScript_MimicTaughtFemale
	release
	end

EventScript_MimicTaughtMale::
	msgbox Text_MimicTaughtMale
	return

EventScript_MimicTaughtFemale::
	msgbox Text_MimicTaughtFemale
	return

EventScript_MimicReteach::
	lock
	faceplayer
	msgbox Text_MimicReteach
	showmoneybox 0, 0
	msgbox Text_MimicReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_MimicNotEnoughMoney
	msgbox Text_MimicWhichMon
	setvar VAR_0x8005, MOVETUTOR_MIMIC
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MimicDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	goto EventScript_MimicTaught2
	end

EventScript_MimicDeclined2::
	msgbox Text_MimicDeclined
	hidemoneybox
	release
	end

EventScript_MimicNotEnoughMoney::
	msgbox Text_MimicNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_MimicTaught2::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EventScript_MimicTaughtMale2
	call_if_eq VAR_RESULT, FEMALE, EventScript_MimicTaughtFemale2
	hidemoneybox
	release
	end

EventScript_MimicTaughtMale2::
	msgbox Text_MimicTaughtMale2
	return

EventScript_MimicTaughtFemale2::
	msgbox Text_MimicTaughtFemale2
	return

FourIsland_House1_EventScript_BodySlamTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_BODY_SLAM, EventScript_BodySlamReteach
	msgbox Text_BodySlamTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
	msgbox Text_BodySlamWhichMon
	setvar VAR_0x8005, MOVETUTOR_BODY_SLAM
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamDeclined
	setflag FLAG_TUTOR_BODY_SLAM
	goto EventScript_BodySlamTaught
	end

EventScript_BodySlamDeclined::
	msgbox Text_BodySlamDeclined
	release
	end

EventScript_BodySlamTaught::
	msgbox Text_BodySlamTaught
	release
	end

EventScript_BodySlamReteach::
	lock
	faceplayer
	msgbox Text_BodySlamReteach
	showmoneybox 0, 0
	msgbox Text_BodySlamReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamNotEnoughMoney
	msgbox Text_BodySlamWhichMon
	setvar VAR_0x8005, MOVETUTOR_BODY_SLAM
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_BodySlamTaught
	hidemoneybox
	release
	end

EventScript_BodySlamDeclined2::
	msgbox Text_BodySlamDeclined
	hidemoneybox
	release
	end

EventScript_BodySlamNotEnoughMoney::
	msgbox Text_BodySlamNotEnoughMoney
	hidemoneybox
	release
	end
	
.set LOCALID_CAPE_BRINK_TUTOR, 1

TwoIsland_CapeBrink_House_EventScript_StarterTutor::
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	goto_if_set FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK, CapeBrinkTutor_EventScript_TaughtAllMoves
	goto_if_set FLAG_TEMP_2, CapeBrinkTutor_EventScript_MoveJustTaught
	bufferleadmonspeciesname STR_VAR_1
	msgbox Text_UltimateMoveThatMon
	specialvar VAR_RESULT, CapeBrinkGetMoveToTeachLeadPokemon
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_NoLeadStarter
	copyvar VAR_0x8009, VAR_0x8005
	call_if_eq VAR_FACING, DIR_NORTH, CapeBrinkTutor_EventScript_JumpInPlaceDown
	call_if_eq VAR_FACING, DIR_SOUTH, CapeBrinkTutor_EventScript_JumpInPlaceUp
	call_if_eq VAR_FACING, DIR_EAST, CapeBrinkTutor_EventScript_JumpInPlaceLeft
	call_if_eq VAR_FACING, DIR_WEST, CapeBrinkTutor_EventScript_JumpInPlaceRight
	msgbox Text_AllowMeToTeachMonUltimateMove, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_DeclineMove
	msgbox Text_LetMeConferUltimateMove
	closemessage
	fadescreen FADE_TO_BLACK
	goto CapeBrinkTutor_EventScript_ChooseMon

@ Unused
CapeBrinkTutor_EventScript_FadeTaughtMove::
	fadescreen FADE_FROM_BLACK
	goto CapeBrinkTutor_EventScript_TaughtMove
	end

CapeBrinkTutor_EventScript_MoveJustTaught::
	msgbox Text_MakeBestUseOfMove
	release
	end

CapeBrinkTutor_EventScript_TaughtAllMoves::
	msgbox Text_FeelRejuvenated
	bufferleadmonspeciesname 0
	specialvar VAR_RESULT, CapeBrinkGetMoveToTeachLeadPokemon
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_NoLeadStarter2
	copyvar VAR_0x8009, VAR_0x8005
	call_if_eq VAR_FACING, DIR_NORTH, CapeBrinkTutor_EventScript_JumpInPlaceDown
	call_if_eq VAR_FACING, DIR_SOUTH, CapeBrinkTutor_EventScript_JumpInPlaceUp
	call_if_eq VAR_FACING, DIR_EAST, CapeBrinkTutor_EventScript_JumpInPlaceLeft
	call_if_eq VAR_FACING, DIR_WEST, CapeBrinkTutor_EventScript_JumpInPlaceRight
	msgbox Text_RightPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_DeclineMove
	msgbox Text_LetMeConferUltimateMove
	closemessage
	fadescreen FADE_TO_BLACK
	goto CapeBrinkTutor_EventScript_ChooseMon
	release
	end

CapeBrinkTutor_EventScript_NoLeadStarter2::
	msgbox Text_NotTheRightPokemon
	release
	end

CapeBrinkTutor_EventScript_TaughtMove::
	copyvar VAR_0x8005, VAR_0x8009
	specialvar VAR_RESULT, HasLearnedAllMovesFromCapeBrinkTutor
	goto_if_eq VAR_RESULT, TRUE, CapeBrinkTutor_EventScript_LearnedAllMoves
	msgbox Text_TaughtMove
	setflag FLAG_TEMP_2
	release
	end

CapeBrinkTutor_EventScript_LearnedAllMoves::
	msgbox Text_PassedOnEverythingIKnow
	setflag FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK
	release
	end

CapeBrinkTutor_EventScript_ChooseMon::
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_DeclineMove
	goto CapeBrinkTutor_EventScript_TaughtMove
	end

CapeBrinkTutor_EventScript_JumpInPlaceDown::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceDown
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceUp::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceUp
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceLeft::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceLeft
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceRight::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceRight
	waitmovement 0
	return

CapeBrinkTutor_EventScript_DeclineMove::
	msgbox Text_YouRejectIt
	release
	end

CapeBrinkTutor_EventScript_NoLeadStarter::
	msgbox Text_JustMistaken
	release
	end

EventScript_ChooseMoveTutorMon::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

EventScript_CanOnlyBeLearnedOnce::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special DisableMsgBoxWalkaway
	signmsg
	msgbox Text_MoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	normalmsg
	call EventScript_RestorePrevTextColor
	return

Movement_JumpInPlaceDown:
	jump_in_place_down
	step_end

Movement_JumpInPlaceUp:
	jump_in_place_up
	step_end

Movement_JumpInPlaceLeft:
	jump_in_place_left
	step_end

Movement_JumpInPlaceRight:
	jump_in_place_right
	step_end

VermilionCity_House2_EventScript_FuryCutterTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER, EventScript_FuryCutterReteach
	msgbox MoveTutor_Text_FuryCutterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	msgbox MoveTutor_Text_FuryCutterWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVETUTOR_FURY_CUTTER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_EventScript_FuryCutterDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER
	goto MoveTutor_EventScript_FuryCutterTaught
	end

MoveTutor_EventScript_FuryCutterDeclined::
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_FuryCutterTaught::
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
	release
	end

EventScript_FuryCutterReteach::
	lock
	faceplayer
	msgbox Text_FuryCutterReteach
	showmoneybox 0, 0
	msgbox Text_FuryCutterReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FuryCutterDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_FuryCutterNotEnoughMoney
	msgbox MoveTutor_Text_FuryCutterWhichMon
	setvar VAR_0x8005, MOVETUTOR_FURY_CUTTER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_EventScript_FuryCutterDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox MoveTutor_Text_FuryCutterTaught
	hidemoneybox
	release
	end

EventScript_FuryCutterNotEnoughMoney::
	msgbox Text_FuryCutterNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_FuryCutterDeclined2::
	msgbox MoveTutor_Text_FuryCutterDeclined
	hidemoneybox
	release
	end

MoveTutor_Text_FuryCutterTeach:
	.string "Il existe une capacité qui devient\n"
	.string "plus forte si on l’enchaîne.\p"
	.string "C’est une attaque de type INSECTE,\n"
	.string "et elle est super stylée.\p"
	.string "Elle s’appelle TAILLADE.\n"
	.string "Tu veux que je l’apprenne à un POKéMON ?$"

MoveTutor_Text_FuryCutterDeclined:
	.string "On n’est pas sur la même longueur\l"
	.string "d’onde.$"

MoveTutor_Text_FuryCutterWhichMon:
	.string "Youpi !\n"
	.string "Montre-moi le POKéMON à entraîner.$"

MoveTutor_Text_FuryCutterTaught:
	.string "J’adore voir si l’attaque touche\n"
	.string "encore et encore à la suite !$"

Text_FuryCutterReteach::
	.string "Tu veux que ton POKéMON apprenne\n"
	.string "TAILLADE encore et encore pour\l"
	.string "pouvoir l’enchaîner sans fin ?\p"
	.string "Je peux t’apprendre TAILLADE\n"
	.string "à nouveau si tu me donnes ¥5000.$"

Text_FuryCutterReteach2::
    .string "Tu veux que j’apprenne TAILLADE\n"
    .string "à un POKéMON ?$"

Text_FuryCutterNotEnoughMoney::
	.string "Je peux pas t’apprendre TAILLADE\n"
	.string "sans être payé à chaque fois !\p"
	.string "Reviens avec ¥5000 la prochaine\n"
	.string "fois et je t’apprendrai encore.$"

Route24_EventScript_RolloutTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT, EventScript_RolloutReteach
	msgbox MoveTutor_Text_RolloutTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	msgbox MoveTutor_Text_RolloutWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVETUTOR_ROLLOUT
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RolloutDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT
	goto MoveTutor_EventScript_RolloutTaught
	end

MoveTutor_EventScript_RolloutDeclined::
	msgbox MoveTutor_Text_RolloutDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_RolloutTaught::
	msgbox MoveTutor_Text_RolloutTaught, MSGBOX_DEFAULT
	release
	end

EventScript_RolloutReteach::
	lock
	faceplayer
	msgbox Text_RolloutReteach
	showmoneybox 0, 0
	msgbox Text_RolloutReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RolloutDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_RolloutNotEnoughMoney
	msgbox MoveTutor_Text_RolloutWhichMon
	setvar VAR_0x8005, MOVETUTOR_ROLLOUT
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_EventScript_RolloutDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox MoveTutor_Text_RolloutTaught
	hidemoneybox
	release
	end

EventScript_RolloutNotEnoughMoney::
	msgbox Text_RolloutNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_RolloutDeclined2::
	msgbox MoveTutor_Text_RolloutDeclined
	hidemoneybox
	release
	end

MoveTutor_Text_RolloutTeach:
	.string "Tu savais qu'on peut aller très\n"
	.string "loin par ici dans cette\l"
	.string "direction ?\p"
	.string "Je pourrais même rouler dans\n"
	.string "cette direction.\p"
	.string "Tu crois que ton POKéMON voudrait\n"
	.string "rouler lui aussi ?\p"
	.string "Je peux lui apprendre ROULADE\n"
	.string "si tu veux.$"

MoveTutor_Text_RolloutDeclined:
	.string "Pas besoin d'être timide.\n"
	.string "Allez, on roule !$"

MoveTutor_Text_RolloutWhichMon:
	.string "Ehehe, bien sûr ! Ce serait super\n"
	.string "si le POKéMON me ressemblait.$"

MoveTutor_Text_RolloutTaught:
	.string "Rouler dans l'herbe me rend tout\n"
	.string "joyeux. Allez, roulons !$"

Text_RolloutReteach::
	.string "Je me demande si je pourrais\n"
	.string "rouler du PONT PÉPITE à AZURIA…\p"
	.string "Oh, tu veux que j'apprenne\n"
	.string "ROULADE à ton POKéMON encore ?\p"
	.string "Je peux le faire, mais je dois\n"
	.string "faire payer ¥5000 pour ça !$"

Text_RolloutReteach2::
    .string "Tu veux que j'apprenne ROULADE\n"
    .string "à un de tes POKéMON ?$"

Text_RolloutNotEnoughMoney::
	.string "Whoa !\n"
	.string "Attends une seconde !\p"
	.string "Comment t’apprendre ROULADE si\n"
	.string "t’as pas assez pour me payer ?\p"
	.string "Reviens avec ¥5000 et ton\n"
	.string "POKéMON roulera comme jamais !$"

SaffronCity_EventScript_DynamicPunchTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH, EventScript_DynamicPunchReteach
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVETUTOR_DYNAMIC_PUNCH
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DynamicPunchDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH
	goto MoveTutor_EventScript_DynamicPunchTaught
	turnobject 19, DIR_NORTH
	end

MoveTutor_EventScript_DynamicPunchDeclined::
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
	release
	turnobject 19, DIR_NORTH
	end

MoveTutor_EventScript_DynamicPunchTaught::
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
	release
	turnobject 19, DIR_NORTH
	end

EventScript_DynamicPunchReteach::
	lock
	faceplayer
	msgbox Text_DynamicPunchReteach
	showmoneybox 0, 0
	msgbox Text_DynamicPunchReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DynamicPunchDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_DynamicPunchNotEnoughMoney
	msgbox MoveTutor_Text_DynamicPunchWhichMon
	setvar VAR_0x8005, MOVETUTOR_DYNAMIC_PUNCH
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_EventScript_DynamicPunchDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox MoveTutor_Text_DynamicPunchTaught
	hidemoneybox
	release
	turnobject 19, DIR_NORTH
	end

EventScript_DynamicPunchNotEnoughMoney::
	msgbox Text_DynamicPunchNotEnoughMoney
	hidemoneybox
	release
	turnobject 19, DIR_NORTH
	end

EventScript_DynamicPunchDeclined2::
	msgbox MoveTutor_Text_DynamicPunchDeclined
	hidemoneybox
	release
	turnobject 19, DIR_NORTH
	end

MoveTutor_Text_DynamicPunchTeach:
	.string "J’en peux plus, c’est fini !\p"
	.string "C’est complètement fichu !\p"
	.string "Je suis un dresseur de type COMBAT,\n"
	.string "alors je peux jamais gagner à SAFRANIA\p"
	.string "Peu importe mes efforts !\p"
	.string "Argh ! Coup de poing ! Coup de poing !\n"
	.string "Encore ! Encore ! Encore !\p"
	.string "Quoi ? Me regarde pas comme ça !\n"
	.string "Je tape juste sur le mur !\p"
	.string "Ou alors tu veux que j’apprenne\n"
	.string "DYNAMOPOING à ton POKéMON ?$"

MoveTutor_Text_DynamicPunchDeclined:
	.string "Zut ! Toi aussi tu te moques de moi ?\n"
	.string "Coup de poing ! Coup de poing !$"

MoveTutor_Text_DynamicPunchWhichMon:
	.string "Hein ? Vraiment ? T’es quelqu’un\n"
	.string "de bien ! Quel POKéMON j’entraîne ?$"

MoveTutor_Text_DynamicPunchTaught:
	.string "Je veux que tu gagnes à l’ARÈNE\n"
	.string "de SAFRANIA avec DYNAMOPOING !$"

Text_DynamicPunchReteach::
	.string "Argh ! Coup de poing ! Coup de poing !\n"
	.string "Encore ! Encore ! Encore !\p"
	.string "Je suis encore frustré par ma\n"
	.string "défaite à l’ARÈNE !\p"
	.string "Tu veux que j’apprenne encore une\n"
	.string "fois DYNAMOPOING à ton POKéMON ?\p"
	.string "Je le fais pour ¥5000 !\n"
	.string "Faut que j’achète des RAPPELS !$"

Text_DynamicPunchReteach2::
    .string "Tu veux que j’apprenne\n"
	.string "DYNAMOPOING à ton POKéMON ?$"

Text_DynamicPunchNotEnoughMoney::
	.string "Tu te moques de moi parce que\n"
	.string "j’ai besoin d’argent pour soigner ?\p"
	.string "Utiliser des objets en combat,\n"
	.string "c’est ma seule chance ici !\p"
	.string "Préviens-moi quand t’auras ¥5000.\n"
	.string "D’ici là…\p"
	.string "Argh ! Coup de poing ! Coup de poing !\n"
	.string "Encore ! Encore ! Encore !$"

SilphCo_9F_EventScript_SleepTalkTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK, EventScript_SleepTalkReteach
	msgbox MoveTutor_Text_SleepTalkTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVETUTOR_SLEEP_TALK
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SleepTalkDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK
	goto MoveTutor_EventScript_SleepTalkTaught
	turnobject 16, DIR_EAST
	end

MoveTutor_EventScript_SleepTalkDeclined::
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
	release
	turnobject 16, DIR_EAST
	end

MoveTutor_EventScript_SleepTalkTaught::
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
	release
	turnobject 16, DIR_EAST
	end

EventScript_SleepTalkReteach::
	lock
	faceplayer
	msgbox Text_SleepTalkReteach
	showmoneybox 0, 0
	msgbox Text_SleepTalkReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SleepTalkDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SleepTalkNotEnoughMoney
	msgbox MoveTutor_Text_SleepTalkWhichMon
	setvar VAR_0x8005, MOVETUTOR_SLEEP_TALK
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_EventScript_SleepTalkDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox MoveTutor_Text_SleepTalkTaught
	hidemoneybox
	release
	turnobject 16, DIR_EAST
	end

EventScript_SleepTalkNotEnoughMoney::
	msgbox Text_SleepTalkNotEnoughMoney
	hidemoneybox
	release
	turnobject 16, DIR_EAST
	end

EventScript_SleepTalkDeclined2::
	msgbox MoveTutor_Text_SleepTalkDeclined
	hidemoneybox
	release
	turnobject 16, DIR_EAST
	end

MoveTutor_Text_SleepTalkTeach:
	.string "…ZZZ…\n"
	.string "…Zzz… zzz…\p"
	.string "Mrr… mhm…\n"
	.string "utiliser… mmm…\p"
	.string "Oh !\n"
	.string "Je parlais dans mon sommeil ?\p"
	.string "Je rêvais que je voulais que\n"
	.string "mon POKéMON attaque, mais il\l"
	.string "dormait !\p"
	.string "Je peux apprendre à ton POKéMON\n"
	.string "BLABLA DODO pour qu’il attaque\l"
	.string "en dormant, si tu veux.\p"
	.string "Tu veux apprendre BLABLA DODO\n"
	.string "à ton POKéMON ?$"

MoveTutor_Text_SleepTalkDeclined:
	.string "Bon, bon, comme tu veux.\p"
	.string "Je retourne faire la sieste,\n"
	.string "ma pause n’est pas finie !$"

MoveTutor_Text_SleepTalkWhichMon:
	.string "D’accord !\n"
	.string "Quel POKéMON je dois entraîner ?$"

MoveTutor_Text_SleepTalkTaught:
	.string "Maintenant ce POKéMON peut attaquer\n"
	.string "en dormant grâce à BLABLA DODO !\p"
	.string "Tu crois que les humains peuvent\n"
	.string "BLABLA DODO pour bosser en dormant ?\p"
	.string "Bâââille…\n"
	.string "…Zzz… zzz…$"

Text_SleepTalkReteach::
	.string "…ZZZ…\n"
	.string "…Hein ?\l"
	.string "…Oh, te revoilà.\p"
	.string "Bâââille… Tu veux que je réapprenne\n"
	.string "BLABLA DODO à ton POKéMON ?\p"
	.string "J’ai perdu ma prime à force de\n"
	.string "trop dormir pendant mes pauses…\p"
	.string "Je peux le faire pour un bonus.\n"
	.string "¥5000, ça te va ?$"

Text_SleepTalkReteach2::
    .string "Tu veux apprendre BLABLA DODO\n"
	.string "à ton POKéMON ?$"

Text_SleepTalkNotEnoughMoney::
	.string "Oh, t’as pas assez d’argent.\n"
	.string "Trouve un moyen d’en gagner\l"
	.string "et reviens plus tard, d’accord ?\p"
	.string "Bon, si tu permets…\n"
	.string "…Zzz… zzz…$"

SilphCo_9F_EventScript_NightmareTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_NIGHTMARE, EventScript_NightmareReteach
	msgbox MoveTutor_Text_NightmareTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NightmareDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NightmareDeclined
	msgbox MoveTutor_Text_NightmareWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVETUTOR_NIGHTMARE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_NightmareDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_NIGHTMARE
	goto MoveTutor_EventScript_NightmareTaught
	turnobject 17, DIR_SOUTH
	end

MoveTutor_EventScript_NightmareDeclined::
	msgbox MoveTutor_Text_NightmareDeclined, MSGBOX_DEFAULT
	release
	turnobject 17, DIR_SOUTH
	end

MoveTutor_EventScript_NightmareTaught::
	msgbox MoveTutor_Text_NightmareTaught, MSGBOX_DEFAULT
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_NightmareReteach::
	lock
	faceplayer
	msgbox Text_NightmareReteach
	showmoneybox 0, 0
	msgbox Text_NightmareReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_NightmareDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_NightmareNotEnoughMoney
	msgbox MoveTutor_Text_NightmareWhichMon
	setvar VAR_0x8005, MOVETUTOR_NIGHTMARE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_EventScript_NightmareDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox MoveTutor_Text_NightmareTaught
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_NightmareNotEnoughMoney::
	msgbox Text_NightmareNotEnoughMoney
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_NightmareDeclined2::
	msgbox MoveTutor_Text_NightmareDeclined
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

MoveTutor_Text_NightmareTeach:
	.string "Waaah !\n"
	.string "Oh non, encore un cauchemar…\p"
	.string "Je rêve sans arrêt que la TEAM\n"
	.string "ROCKET revient et m’enferme !\p"
	.string "Je n’ai pas bien dormi une seule\n"
	.string "nuit depuis leur invasion.\p"
	.string "Je peux apprendre à ton POKéMON\n"
	.string "à donner des cauchemars, comme eux.\p"
	.string "Tu veux que ton POKéMON\n"
	.string "apprenne CAUCHEMAR ?$"

MoveTutor_Text_NightmareDeclined:
	.string "Tu veux pas risquer de faire\n"
	.string "des cauchemars toi aussi ?$"

MoveTutor_Text_NightmareWhichMon:
	.string "Très bien.\n"
	.string "Quel POKéMON doit l’apprendre ?$"

MoveTutor_Text_NightmareTaught:
	.string "Ce POKéMON peut infliger des\n"
	.string "cauchemars aux ennemis endormis.\p"
	.string "Si seulement je pouvais trouver\n"
	.string "un moyen de me débarrasser des miens…$"

Text_NightmareReteach::
	.string "Aaah !\n"
	.string "Ugh, encore ?\p"
	.string "Je pensais que faire la sieste\n"
	.string "au boulot, là où tout a eu lieu,\l"
	.string "guérirait mes cauchemars, mais…\p"
	.string "Tu veux réapprendre CAUCHEMAR\n"
	.string "à ton POKéMON ?\p"
	.string "Si t’as ¥5000, je peux lui montrer\n"
	.string "comment s’en servir.$"

Text_NightmareReteach2::
    .string "Tu veux que ton POKéMON\n"
	.string "apprenne CAUCHEMAR ?$"

Text_NightmareNotEnoughMoney::
	.string "T’as pas ¥5000 ?\p"
	.string "Je veux pas revivre ces cauchemars\n"
	.string "pour rien, tu sais…\p"
	.string "Reviens quand tu pourras me payer\n"
	.string "la somme complète, d’accord ?$"

CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SelfdestructTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SELFDESTRUCT, EventScript_SelfdestructReteach
	msgbox MoveTutor_Text_SelfdestructTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SelfdestructDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SelfdestructDeclined
	msgbox MoveTutor_Text_SelfdestructWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVETUTOR_SELF_DESTRUCT
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SelfdestructDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SELFDESTRUCT
	goto MoveTutor_EventScript_SelfdestructTaught
	turnobject 17, DIR_SOUTH
	end

MoveTutor_EventScript_SelfdestructDeclined::
	msgbox MoveTutor_Text_SelfdestructDeclined, MSGBOX_DEFAULT
	release
	turnobject 17, DIR_SOUTH
	end

MoveTutor_EventScript_SelfdestructTaught::
	msgbox MoveTutor_Text_SelfdestructTaught, MSGBOX_DEFAULT
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_SelfdestructReteach::
	lock
	faceplayer
	msgbox Text_SelfdestructReteach
	showmoneybox 0, 0
	msgbox Text_SelfdestructReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SelfdestructDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SelfdestructNotEnoughMoney
	msgbox MoveTutor_Text_SelfdestructWhichMon
	setvar VAR_0x8005, MOVETUTOR_SELF_DESTRUCT
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_EventScript_SelfdestructDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox MoveTutor_Text_SelfdestructTaught
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_SelfdestructNotEnoughMoney::
	msgbox Text_SelfdestructNotEnoughMoney
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_SelfdestructDeclined2::
	msgbox MoveTutor_Text_SelfdestructDeclined
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

MoveTutor_Text_SelfdestructTeach:
	.string "Aucun doute possible.\n"
	.string "J’ai refait les tests cent fois.\p"
	.string "Le volcan sous nos pieds n’est\n"
	.string "pas du tout endormi !\p"
	.string "Il va entrer en éruption et détruire\n"
	.string "la ville dans trois ans, c’est sûr !\p"
	.string "Ce sera comme si toute l’île\n"
	.string "s’était autodétruite !\p"
	.string "Les POKéMON peuvent faire pareil\n"
	.string "avec l’attaque DESTRUCTION.\p"
	.string "Tu veux que j’apprenne\n"
	.string "DESTRUCTION à ton POKéMON ?$"

MoveTutor_Text_SelfdestructDeclined:
	.string "Tu trouves que DESTRUCTION est\n"
	.string "trop risquée en combat ?$"

MoveTutor_Text_SelfdestructWhichMon:
	.string "Alors, quel POKéMON doit apprendre\n"
	.string "cette attaque risquée ?$"

MoveTutor_Text_SelfdestructTaught:
	.string "Tu contrôles maintenant la terrible\n"
	.string "puissance de DESTRUCTION !\p"
	.string "Mais on ne pourra pas arrêter\n"
	.string "le volcan comme ça, hélas…\p"
	.string "Il ne reste plus qu’à préparer un\n"
	.string "plan d’évacuation.\p"
	.string "Espérons que dans trois ans, tu\n"
	.string "seras loin de cette île !$"

Text_SelfdestructReteach::
	.string "Quand le volcan explosera, il faudra\n"
	.string "sauver notre matériel…\l"
	.string "Oh, te revoilà !\p"
	.string "Je prépare juste l’imminente\n"
	.string "destruction de tout ici.\p"
	.string "Tu veux réapprendre DESTRUCTION\n"
	.string "avant que ça n’arrive ?\p"
	.string "J’accepte les dons pour financer\n"
	.string "l’évacuation.\p"
	.string "Donne ¥5000 et j’apprendrai\n"
	.string "DESTRUCTION à un POKéMON.$"

Text_SelfdestructReteach2::
    .string "Tu veux que j’apprenne à ton\n"
	.string "POKéMON à utiliser DESTRUCTION ?$"

Text_SelfdestructNotEnoughMoney::
	.string "On a besoin de tout le soutien\n"
	.string "financier possible pour se\l"
	.string "préparer à l’éruption.\p"
	.string "Je peux pas t’aider pour moins\n"
	.string "de ¥5000 de don.$"

MtEmber_Exterior_EventScript_SkyAttackTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SKY_ATTACK, EventScript_SkyAttackReteach
	msgbox MoveTutor_Text_SkyAttackTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SkyAttackDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SkyAttackDeclined
	msgbox MoveTutor_Text_SkyAttackWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVETUTOR_SKY_ATTACK
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SkyAttackDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SKY_ATTACK
	goto MoveTutor_EventScript_SkyAttackTaught
	turnobject 17, DIR_SOUTH
	end

MoveTutor_EventScript_SkyAttackDeclined::
	msgbox MoveTutor_Text_SkyAttackDeclined, MSGBOX_DEFAULT
	release
	turnobject 17, DIR_SOUTH
	end

MoveTutor_EventScript_SkyAttackTaught::
	msgbox MoveTutor_Text_SkyAttackTaught, MSGBOX_DEFAULT
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_SkyAttackReteach::
	lock
	faceplayer
	msgbox Text_SkyAttackReteach
	showmoneybox 0, 0
	msgbox Text_SkyAttackReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SkyAttackDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SkyAttackNotEnoughMoney
	msgbox MoveTutor_Text_SkyAttackWhichMon
	setvar VAR_0x8005, MOVETUTOR_SKY_ATTACK
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_EventScript_SkyAttackDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox MoveTutor_Text_SkyAttackTaught
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_SkyAttackNotEnoughMoney::
	msgbox Text_SkyAttackNotEnoughMoney
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_SkyAttackDeclined2::
	msgbox MoveTutor_Text_SkyAttackDeclined
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

MoveTutor_Text_SkyAttackTeach:
	.string "On est si haut qu’on dirait qu’on\n"
	.string "peut toucher le ciel.\p"
	.string "Les POKéMON OISEAUX doivent se\n"
	.string "sentir comme ça tout le temps…\p"
	.string "Comment ça ? Tu ne sais pas ?\n"
	.string "Tu ignores ce qu’ils peuvent faire ?\p"
	.string "Ils peuvent apprendre une attaque\n"
	.string "qui fait tomber le ciel sur l’ennemi!\p"
	.string "Tu veux que j’apprenne\n"
	.string "PIQUE à ton POKéMON ?$"

MoveTutor_Text_SkyAttackDeclined:
	.string "Je suppose que tout le monde\n"
	.string "ne rêve pas de toucher le ciel.$"

MoveTutor_Text_SkyAttackWhichMon:
	.string "Quel POKéMON doit apprendre\n"
	.string "PIQUE ?$"

MoveTutor_Text_SkyAttackTaught:
	.string "PIQUE est l’attaque ultime\n"
	.string "de type VOL.\p"
	.string "Ton POKéMON saura sûrement\n"
	.string "bien utiliser sa puissance.$"

Text_SkyAttackReteach::
	.string "T’es remonté tout là-haut encore\n"
	.string "une fois pour le frisson ?\p"
	.string "C’est grisant d’être aussi près\n"
	.string "du ciel, pas vrai ?\p"
	.string "Si ça t’intéresse, je peux\n"
	.string "apprendre PIQUE à ton POKéMON.\p"
	.string "Mais cette fois, il me faudra\n"
	.string "¥5000 pour le faire !$"

Text_SkyAttackReteach2::
	.string "Tu veux que j’apprenne PIQUE\n"
	.string "à ton POKéMON ?$"

Text_SkyAttackNotEnoughMoney::
	.string "Tu n’as pas assez d’argent,\n"
	.string "quel dommage.\p"
	.string "Il faudra remonter ici encore\n"
	.string "une fois quand tu auras ¥5000 !$"

Route10_EventScript_SwaggerTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, EventScript_SwaggerReteach
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVETUTOR_SWAGGER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SwaggerDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
	goto MoveTutor_EventScript_SwaggerTaught
	turnobject 17, DIR_SOUTH
	end

MoveTutor_EventScript_SwaggerDeclined::
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
	release
	turnobject 17, DIR_SOUTH
	end

MoveTutor_EventScript_SwaggerTaught::
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_SwaggerReteach::
	lock
	faceplayer
	msgbox Text_SwaggerReteach
	showmoneybox 0, 0
	msgbox Text_SwaggerReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SwaggerDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwaggerNotEnoughMoney
	msgbox MoveTutor_Text_SwaggerWhichMon
	setvar VAR_0x8005, MOVETUTOR_SWAGGER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_EventScript_SwaggerDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox MoveTutor_Text_SwaggerTaught
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_SwaggerNotEnoughMoney::
	msgbox Text_SwaggerNotEnoughMoney
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

EventScript_SwaggerDeclined2::
	msgbox MoveTutor_Text_SwaggerDeclined
	hidemoneybox
	release
	turnobject 17, DIR_SOUTH
	end

MoveTutor_Text_SwaggerTeach:
	.string "Heh ! Mon POKéMON est trop stylé !\n"
	.string "Aucun autre ne lui arrive à la cheville !\p"
	.string "Je frimais avec assurance quand un\n"
	.string "type nommé {RIVAL} m’a défié.\p"
	.string "Il nous a battus sans effort et a\n"
	.string "détruit toute ma confiance…\p"
	.string "Si tu veux, je peux apprendre la\n"
	.string "capacité VANTARDISE à ton POKéMON.$"

MoveTutor_Text_SwaggerDeclined:
	.string "Quoi, non ? Tu pourrais pas te\n"
	.string "mettre un peu dans l’ambiance ?$"

MoveTutor_Text_SwaggerWhichMon:
	.string "Très bien, quel POKéMON veut\n"
	.string "apprendre VANTARDISE ?$"

MoveTutor_Text_SwaggerTaught:
	.string "Désormais je vais juste louer mon\n"
	.string "POKéMON sans trop frimer.$"

Text_SwaggerReteach::
	.string "Me faire battre par ce type, {RIVAL},\n"
	.string "ça m’a remis à ma place.\p"
	.string "Mais je sais encore marcher avec\n"
	.string "de l’assurance, tu sais !\p"
	.string "Je peux réapprendre VANTARDISE\n"
	.string "à ton POKéMON.\p"
	.string "Mais apprendre à frimer comme moi,\n"
	.string "ça coûte un joli ¥5000 !$"

Text_SwaggerReteach2::
	.string "Tu veux que j’apprenne la capacité\n"
	.string "VANTARDISE à ton POKéMON ?$"

Text_SwaggerNotEnoughMoney::
	.string "Pas d’argent, pas de VANTARDISE !\n"
	.string "Reviens avec ¥5000 la prochaine fois !$"
