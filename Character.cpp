#include "Character.h"
#include <iostream>

Character::Character()
{
	X = 0;
	Y = 0;
	Gold = 0;
	HP = 100;
	name = "Character";

	printf("Character Contructor\n");
}

Character::~Character()
{
	printf("Character Destructor\n");
}

void Character::Move()
{
	printf("%s Move\n", name.c_str());
}

void Character::Attack()
{
	printf("%s Attack\n", name.c_str());
}
