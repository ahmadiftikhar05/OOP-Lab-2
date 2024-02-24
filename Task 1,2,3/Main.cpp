#include "Animal.h"
#include "lion.h"
#include "Elephant.h"
#include "Monkey.h"
#include "Bird.h"

void hearsound(const Animal& animal)
{
		animal.makesound();
}
int main()
{
	lion lion1;
	Elephant elephant1;
	Monkey monkey1;
	hearsound(lion1);
	hearsound(elephant1);
	hearsound(monkey1);
	Bird bird1;
		hearsound(bird1);
	return 0;
}