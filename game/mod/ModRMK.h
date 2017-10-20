
#pragma once
//Mod
enum StatTypes {
	Dexterity,
	Perception,
	Agility,
	Vitality,
	Endurance,
	Luck
};
extern char *RMKstatNames[];
enum ClassTypes {
	Default,
	Cowboy,
	Ranger,
	Deadeye,
	Vanguard,
	Juggernaut
};
extern char *RMKclassNames[];
extern int StatScale(int statName, int className);
//Mod End