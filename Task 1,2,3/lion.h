#pragma once
#include "Animal.h"
class lion : public Animal
{
public:
	void makesound() const override
	{
		cout << "!!!!!! ROAR !!!!!!!" << endl;
	}
};
