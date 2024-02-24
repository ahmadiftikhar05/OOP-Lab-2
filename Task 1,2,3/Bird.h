#pragma once
#include "Animal.h"
class Bird :public Animal
{
	public:
	void makesound() const override
	{
		cout << "!!! CHOO CHOO !!!" << endl;
	}
};
