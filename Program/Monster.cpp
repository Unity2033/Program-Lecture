#include "Monster.h"

#include "stdafx.h"

void Monster::Stat()
{
	cout << "Name : " << name << endl;
	cout << "Health : "  << health << endl;
	cout << "Attack : "  << attack << endl;
	cout << "Defense : " << defense << endl;
}

void Monster::Describe()
{
	cout << "Describe a monster" << endl;
}

Monster::~Monster()
{
	cout << "Destroy Monster" << endl;
}
