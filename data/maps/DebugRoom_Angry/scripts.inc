DebugRoom_Angry_MapScripts::
	.byte 0

DebugRoom_Angry_GiveMonAndRareCandies::
	lock
	msgbox DebugRoom_Angry_boat
	givemon SPECIES_CHARIZARD, 50
	giveitem ITEM_RARE_CANDY, 50
	release
	end
