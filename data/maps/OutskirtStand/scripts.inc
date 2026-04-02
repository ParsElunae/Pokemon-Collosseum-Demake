OutskirtStand_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OutskirtStand_OnTransition
	.byte 0

OutskirtStand_OnTransition:
	goto_if_set FLAG_TEMP_18, OutskirtStand_ShowWillie
	goto_if_set FLAG_TEMP_1, OutskirtStand_ShowWillie
	setflag FLAG_TEMP_19
	end

OutskirtStand_ShowWillie:
	clearflag FLAG_TEMP_19
	end

OutskirtStand_EventScript_Willie::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_18, OutskirtStand_EventScript_WillieNotReady
	goto_if_set FLAG_TEMP_1, OutskirtStand_EventScript_WillieAfterClear
	msgbox OutskirtStand_Text_WillieBattleStub, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	setvar VAR_TEMP_F, 2
	special ColoContent_ApplyStep
	msgbox OutskirtStand_Text_WillieAfterBattle, MSGBOX_DEFAULT
	release
	end

OutskirtStand_EventScript_WillieAfterClear::
	msgbox OutskirtStand_Text_WillieAfterBattle, MSGBOX_DEFAULT
	release
	end

OutskirtStand_EventScript_WillieNotReady::
	msgbox OutskirtStand_Text_WillieNotReady, MSGBOX_DEFAULT
	release
	end

OutskirtStand_EventScript_Sign::
	msgbox OutskirtStand_Text_Sign, MSGBOX_SIGN
	end

OutskirtStand_Text_WillieNotReady:
	.string "The stand is quiet for the moment.\n"
	.string "No one is waiting outside yet.$"

OutskirtStand_Text_WillieBattleStub:
	.string "Willie steps out from the stand and sizes\n"
	.string "you up.\p"
	.string "His first live outside battle still needs\n"
	.string "trainer data in this repo pass.$"

OutskirtStand_Text_WillieAfterBattle:
	.string "Not bad.\n"
	.string "If you're looking for a real destination,\l"
	.string "head for Phenac City next.$"

OutskirtStand_Text_Sign:
	.string "OUTSKIRT STAND$"
