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
	setflag FLAG_TEMP_18
	releaseall
	end

OutskirtStandInterior_EventScript_NewsTriggerEnd::
	end

OutskirtStandInterior_EventScript_Tv::
	msgbox OutskirtStandInterior_Text_Tv, MSGBOX_SIGN
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
	.string "Willie looks up from his table.\n"
	.string "He seems ready to head back outside.$"

OutskirtStandInterior_Text_WillieRepeat:
	.string "Willie glances toward the exit.\n"
	.string "He looks like he's about to step outside.$"
