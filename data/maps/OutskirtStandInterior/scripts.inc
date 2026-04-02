OutskirtStandInterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OutskirtStandInterior_OnTransition
	.byte 0

OutskirtStandInterior_OnTransition:
	goto_if_set FLAG_TEMP_17, OutskirtStandInterior_HideWillie
	goto_if_set FLAG_TEMP_1, OutskirtStandInterior_HideWillie
	clearflag FLAG_TEMP_1A
	end

OutskirtStandInterior_HideWillie:
	setflag FLAG_TEMP_1A
	end

OutskirtStandInterior_EventScript_NewsTrigger::
	goto_if_set FLAG_TEMP_16, OutskirtStandInterior_EventScript_NewsTriggerEnd
	lockall
	msgbox OutskirtStandInterior_Text_NewsReport, MSGBOX_DEFAULT
	setflag FLAG_TEMP_16
	releaseall
	end

OutskirtStandInterior_EventScript_NewsTriggerEnd::
	end

OutskirtStandInterior_EventScript_Tv::
	msgbox OutskirtStandInterior_Text_Tv, MSGBOX_DEFAULT
	end

OutskirtStandInterior_EventScript_Bartender::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OutskirtStandInterior_Pokemart_Opening
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OutskirtStandInterior_Pokemart_Opening:
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_PARALYZE_HEAL
	pokemartlistend

OutskirtStandInterior_EventScript_Willie::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_17, OutskirtStandInterior_EventScript_WillieRepeat
	msgbox OutskirtStandInterior_Text_WillieFirstTalk, MSGBOX_DEFAULT
	setflag FLAG_TEMP_17
	setflag FLAG_TEMP_18
	release
	end

OutskirtStandInterior_EventScript_WillieRepeat::
	msgbox OutskirtStandInterior_Text_WillieRepeat, MSGBOX_DEFAULT
	release
	end

OutskirtStandInterior_Text_NewsReport:
	.string "The television is carrying a breaking\n"
	.string "news report out of Phenac City.$"

OutskirtStandInterior_Text_Tv:
	.string "The report keeps circling back to trouble\n"
	.string "in Phenac City.$"

OutskirtStandInterior_Text_WillieFirstTalk:
	.string "If you want to show what your team can do,\n"
	.string "come meet me outside.$"

OutskirtStandInterior_Text_WillieRepeat:
	.string "I'm heading outside.\n"
	.string "Don't keep me waiting.$"
