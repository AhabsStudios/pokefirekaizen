.equ LOCALID_FINAL_FOSSIL,  14


CeruleanCave_2F_MapScripts::
	.byte 0


CeruleanCave_2F_EventScript_FinalFossil::
	lock
	faceplayer
	goto_if_set FLAG_GOT_DOME_FOSSIL, CeruleanCave_2F_EventScript_GiveHelix
	msgbox CeruleanCave_2F_Text_ItsADomeFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CeruleanCave_2F_EventScript_DontTakeFossil
	removeobject LOCALID_FINAL_FOSSIL
	giveitem_msg CeruleanCave_2F_Text_ObtainedDomeFossil, ITEM_DOME_FOSSIL, 1, MUS_OBTAIN_KEY_ITEM
	waitmessage
	waitfanfare
	removeobject LOCALID_FINAL_FOSSIL
	setflag FLAG_GOT_FINAL_FOSSIL
	closemessage
	release
	end


CeruleanCave_2F_EventScript_GiveHelix::
	msgbox CeruleanCave_2F_Text_YouWantHelixFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CeruleanCave_2F_EventScript_DontTakeFossil
	removeobject LOCALID_FINAL_FOSSIL
	giveitem_msg CeruleanCave_2F_Text_ObtainedHelixFossil, ITEM_HELIX_FOSSIL, 1, MUS_OBTAIN_KEY_ITEM
	waitmessage
	waitfanfare
	removeobject LOCALID_FINAL_FOSSIL
	setflag FLAG_GOT_FINAL_FOSSIL
	closemessage
	release
	end

CeruleanCave_2F_EventScript_DontTakeFossil::
	release
	end

CeruleanCave_2F_Text_ItsADomeFossil::
    .string "It's a DOME FOSSIL…\n"
    .string "will you take it?$"

CeruleanCave_2F_Text_YouWantHelixFossil::
    .string "It's a HELIX FOSSIL…\n"
    .string "will you take it?$"

CeruleanCave_2F_Text_ObtainedHelixFossil::
    .string "Obtained the HELIX FOSSIL!$"

CeruleanCave_2F_Text_ObtainedDomeFossil::
    .string "Obtained the DOME FOSSIL!$"

