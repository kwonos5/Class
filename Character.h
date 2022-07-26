#pragma once
#include <string>

class Character
{
public:
	Character();
	virtual ~Character();

protected: 
	int HP;
	int	Gold;
	int	X;
	int	Y;

	std::string name;


public:
	virtual void Move();
	void Attack();

};

