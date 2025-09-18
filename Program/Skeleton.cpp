#include "Skeleton.h"

#include "stdafx.h"

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

Skeleton::~Skeleton()
{
	cout << "Destroy Skeleton" << endl;
}
