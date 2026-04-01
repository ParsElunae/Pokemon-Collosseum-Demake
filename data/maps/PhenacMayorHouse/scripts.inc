PhenacMayorHouse_MapScripts::
	.byte 0

PhenacMayorHouse_EventScript_Mayor::
	lock
	faceplayer
	msgbox PhenacMayorHouse_Text_MayorStub, MSGBOX_DEFAULT
	release
	end

PhenacMayorHouse_Text_MayorStub:
	.string "Bootstrap stub: the mayor meeting and Miror B. invasion\n"
	.string "belong here for the CS01 slice.$"
