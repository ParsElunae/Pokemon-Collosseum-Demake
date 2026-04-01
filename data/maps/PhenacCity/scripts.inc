PhenacCity_MapScripts::
	.byte 0

PhenacCity_EventScript_Sack::
	lock
	msgbox PhenacCity_Text_SackStub, MSGBOX_DEFAULT
	release
	end

PhenacCity_EventScript_ReturnFromOutskirt::
	lock
	msgbox PhenacCity_Text_ReturnStub, MSGBOX_DEFAULT
	release
	end

PhenacCity_EventScript_GuardRed::
	lock
	faceplayer
	msgbox PhenacCity_Text_GuardRedStub, MSGBOX_DEFAULT
	release
	end

PhenacCity_EventScript_GuardBlue::
	lock
	faceplayer
	msgbox PhenacCity_Text_GuardBlueStub, MSGBOX_DEFAULT
	release
	end

PhenacCity_EventScript_GuardGreen::
	lock
	faceplayer
	msgbox PhenacCity_Text_GuardGreenStub, MSGBOX_DEFAULT
	release
	end

PhenacCity_Text_SackStub:
	.string "Bootstrap stub: Rui's sack rescue scene belongs here\n"
	.string "for the CS01 slice.$"

PhenacCity_Text_ReturnStub:
	.string "Bootstrap stub: this scene should push urgency after\n"
	.string "the Outskirt Poke Ball trip.$"

PhenacCity_Text_GuardRedStub:
	.string "Bootstrap stub: red exit guard = Shadow Quilava.$"

PhenacCity_Text_GuardBlueStub:
	.string "Bootstrap stub: blue exit guard = Shadow Croconaw.$"

PhenacCity_Text_GuardGreenStub:
	.string "Bootstrap stub: green exit guard = Shadow Bayleef.$"
