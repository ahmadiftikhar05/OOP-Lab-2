#include<iostream>
#include "Plant.h"
#include "Tree.h"
#include "Bushes.h"
#include "Flower.h"
using namespace std;
void plantGrow(Plant& plant)
{
    plant.grow();
}
void displayGrowth(Plant& plant)
{
    plant.displayHeight();
}
int main()
{
    Flower flower(0);
    Tree tree(0);
    Bushes bushes(0);
  for(int i=0;i<30;i++)
  {
    plantGrow(flower);
    plantGrow(tree);
    plantGrow(bushes);
  }
  displayGrowth(flower);
  displayGrowth(tree);
  displayGrowth(bushes); 
  return 0;
}