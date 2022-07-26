#pragma once
#include "Character.h"

class Player1 : public Character
{
public: 
	Player1();
	virtual ~Player1();

public:
	int GetGold();
	void SetGold(int NewGold);

	virtual void Move() override;


private: 
	void RealMove();

};

