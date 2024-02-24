#pragma once
#include "Animal.h"
class Elephant :public Animal
{
    public:
	void makesound() const override
	{
		cout << "!!!! snorts !!!" << endl;
	}
};

