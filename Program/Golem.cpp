#include "Golem.h"

#include <iostream>

using namespace std;

Golem::Golem()
{
	name = "Golem";
	health = 250;
	attack = 10;
	defense = 5;
}

void Golem::Describe()
{
	cout << "A large stone monster. Slow, but tough and powerful. \n" << endl;
}
