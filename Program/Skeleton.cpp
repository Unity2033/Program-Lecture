#include "Skeleton.h"

#include <iostream>

using namespace std;

Skeleton::Skeleton()
{
	name = "Skeleton";
	health = 100;
	attack = 5;
	defense = 1;
}

void Skeleton::Describe()
{
	cout << "A skeleton monster. Wields a weapon, but has weak defense. \n" << endl;
}
