#include "Slime.h"

#include "stdafx.h"

Slime::Slime()
{
	name = "Slime";
	health = 50;
	attack = 1;
	defense = 1;
}

void Slime::Describe()
{
	cout << "A squishy jelly monster.Weak, but annoyingly clingy. \n" << endl;

}

Slime::~Slime()
{
	cout << "Destroy Slime" << endl;
}
