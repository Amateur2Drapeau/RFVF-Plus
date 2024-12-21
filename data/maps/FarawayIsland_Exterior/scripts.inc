FarawayIsland_Exterior_MapScripts::
	.byte 0

FarawayIsland_Exterior_EventScript_Sailor::
	lock
	faceplayer
	msgbox FarawayIsland_Exterior_Text_SailorReturn, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FarawayIsland_Exterior_EventScript_AsYouLike
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat 1, MAP_FARAWAY_ISLAND_EXTERIOR
	setvar VAR_0x8004, 2
	call EventScript_SailToVermilionCity
	waitstate
	release
	end

FarawayIsland_Exterior_EventScript_AsYouLike::
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release
	end

FarawayIsland_Exterior_EventScript_Sign::
	msgbox FarawayIsland_Exterior_Text_Sign, MSGBOX_SIGN
	end
	
FarawayIsland_Exterior_Text_Sign:
    .string "C'est comme si ça quelqu'un\n"
    .string "avait écrit cela il y a longtemps…\p"
    .string "“…bre, jour 6\n"
    .string "Si un huma…met le pied ici…\l"
    .string "encore…elqu'un de bienveilla…\l"
    .string "…l'espère, Prennez soin…”$"
	
EventTicket_Text_SailHome:
	.string "Ok très bien!\n"
	.string "Nous rentrerons à la maison!$"

EventTicket_Text_AsYouLike:
	.string "Ok comme tu préfères.$"
	
FarawayIsland_Exterior_Text_SailorReturn:
    .string "Tu veux retourner à CARMIN SUR MER?$"
