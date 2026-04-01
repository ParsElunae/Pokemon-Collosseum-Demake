PrestigePreceptCenter_MapScripts::
	.byte 0

PrestigePreceptCenter_EventScript_Teacher::
	lock
	faceplayer
	msgbox PrestigePreceptCenter_Text_TeacherStub, MSGBOX_DEFAULT
	release
	end

PrestigePreceptCenter_EventScript_Justy::
	lock
	faceplayer
	msgbox PrestigePreceptCenter_Text_JustyStub, MSGBOX_DEFAULT
	release
	end

PrestigePreceptCenter_Text_TeacherStub:
	.string "Bootstrap stub: the teacher should grant and refresh\n"
	.string "the Strategy Memo here.$"

PrestigePreceptCenter_Text_JustyStub:
	.string "Bootstrap stub: Justy flavor lives here, but the core\n"
	.string "CS01 logic is the teacher hook.$"
