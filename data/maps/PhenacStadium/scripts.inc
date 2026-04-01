PhenacStadium_MapScripts::
	.byte 0

PhenacStadium_EventScript_Guide::
	lock
	faceplayer
	msgbox PhenacStadium_Text_GuideStub, MSGBOX_DEFAULT
	release
	end

PhenacStadium_Text_GuideStub:
	.string "Bootstrap stub: the stadium check beat belongs here\n"
	.string "for the CS01 slice.$"
