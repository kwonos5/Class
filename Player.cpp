#include "Player.h"
#include <iostream>

using namespace std;

//constructor
Player::Player()
{
	HP = 100;
	X = 10;
	Y = 10;
	Gold = 0;

	name = "Player";

	printf("Player Constructor\n");
}

Player::~Player()
{
	cout << "Player Destructor" << endl;
}

int Player::GetGold()
{
	return Gold;
}

void Player::SetGold(int NewGold)
{
	if (NewGold < 0)
		return;

	Gold = NewGold;
}

void Player::Move()
{
	cout << "Player is Run" << endl;
	Character::Move();
}

void Player::RealMove()
{
}
