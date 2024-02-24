#pragma once
#include "Animal.h"
class Monkey :public Animal
{
    public:
    void makesound() const override{
        cout << "!!! oo aa !!!" << endl;
    }
};