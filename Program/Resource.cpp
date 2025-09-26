#include "stdafx.h"
#include "Resource.h"

Resource::Resource()
{
	cout << "Created Resource" << endl;
}

void Resource::Share(const shared_ptr<Resource> & reference)
{
	resource = reference;
}

Resource::~Resource()
{
	cout << "Destroy Resource" << endl;
}
