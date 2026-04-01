PhenacPokeMart_MapScripts::
	.byte 0

PhenacPokeMart_EventScript_Clerk::
	lock
	faceplayer
	msgbox PhenacPokeMart_Text_ClerkStub, MSGBOX_DEFAULT
	release
	end

PhenacPokeMart_EventScript_HintNpc::
	lock
	faceplayer
	msgbox PhenacPokeMart_Text_HintStub, MSGBOX_DEFAULT
	release
	end

PhenacPokeMart_Text_ClerkStub:
	.string "Bootstrap stub: Phenac does not sell Poke Balls in\n"
	.string "the early Colosseum flow.$"

PhenacPokeMart_Text_HintStub:
	.string "Bootstrap stub: this NPC should point the player back\n"
	.string "to Outskirt Stand for Poke Balls.$"
