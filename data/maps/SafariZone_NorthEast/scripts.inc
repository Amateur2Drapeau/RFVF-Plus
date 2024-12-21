SafariZone_NorthEast_MapScripts::
	.byte 0

SafariZone_NorthEast_EventScript_AreaSign::
	msgbox SafariZone_NorthEast_Text_AreaSign, MSGBOX_SIGN
	end

SafariZone_NorthEast_Text_AreaSign::
	.string "ZONE 5$"

SafariZone_NorthEast_EventScript_RoughTerrainSign::
	msgbox SafariZone_NorthEast_Text_RoughTerrainSign, MSGBOX_SIGN
	end

SafariZone_NorthEast_Text_RoughTerrainSign::
	.string "ATTENTION!\p"
	.string "Terrain accidenté!\n"
	.string "Prudence lors de l'exploration!$"
