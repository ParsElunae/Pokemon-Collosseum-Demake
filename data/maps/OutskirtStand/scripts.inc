OutskirtStand_MapScripts::
	.byte 0

OutskirtStand_EventScript_Willie::
	lock
	faceplayer
	msgbox OutskirtStand_Text_WillieStub, MSGBOX_DEFAULT
	release
	end

OutskirtStand_EventScript_Bartender::
	lock
	faceplayer
	msgbox OutskirtStand_Text_BartenderStub, MSGBOX_DEFAULT
	release
	end

OutskirtStand_EventScript_BallSign::
	msgbox OutskirtStand_Text_Sign, MSGBOX_SIGN
	end

OutskirtStand_Text_WillieStub:
	.string "Bootstrap stub: Willie belongs here for the CS01\n"
	.string "vertical slice. Full battle logic is authored in the\l"
	.string "matching Poryscript source file.$"

OutskirtStand_Text_BartenderStub:
	.string "Bootstrap stub: the bartender's Poke Ball gift and\n"
	.string "shop logic belong here once the Colosseum runtime\l"
	.string "hooks are wired into the build.$"

OutskirtStand_Text_Sign:
	.string "OUTSKIRT STAND$"
