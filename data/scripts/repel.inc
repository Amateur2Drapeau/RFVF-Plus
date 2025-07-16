EventScript_RepelWoreOff::
	checkitem VAR_LAST_REPEL_USED, 1
	goto_if_eq VAR_RESULT, TRUE, EventScript_UseAnother
	lock
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
	release
	end

EventScript_UseAnother:
	lock
	msgbox Text_UseAnother, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_UsedRepel
	release
	end

EventScript_UsedRepel:
	bufferitemname STR_VAR_1, VAR_LAST_REPEL_USED
	playse SE_REPEL
	lock
	msgbox Text_UsedNewRepel, MSGBOX_SIGN
	removeitem VAR_LAST_REPEL_USED, 1
	waitse
	callnative HandleUseExpiredRepel
	release
	end

Text_RepelWoreOff::
	.string "L'effet de REPOUSSE se dissipe…$"

Text_UseAnother::
	.string "L'effet de REPOUSSE se dissipe!\n"
	.string "En utiliser un autre?$"

Text_UsedNewRepel::
	.string "{PLAYER} utilise le\n"
	.string "{STR_VAR_1}.$"
