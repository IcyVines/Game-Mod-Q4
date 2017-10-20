#include "ModRMK.h"

char *RMKstatNames[] = { "dexterity","perception","agility","vitality","endurance","luck" };
char *RMKclassNames[] = { "noclass","cowboy","ranger","deadeye","vanguard","juggernaut" };

int StatScale(int statName, int className) {
	switch (className)
	{
	case Cowboy :
		return statName == Luck || statName == Dexterity ? 2 : 1;
	case Ranger :
		return statName == Agility || statName == Perception ? 2 : 1;
	case Deadeye :
		return statName == Perception || statName == Dexterity ? 2 : 1;
	case Vanguard :
		return statName == Agility || statName == Endurance ? 2 : 1;
	case Juggernaut :
		return statName == Vitality || statName == Endurance ? 2 : 1;
	default:
		return 1;
	}
}
