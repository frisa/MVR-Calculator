#include "CommonClass.h"
#include <iostream>

CommonClass::CommonClass()
{
	std::cout << __FUNCTION__ << std::endl;
}

CommonClass::~CommonClass()
{
	std::cout << __FUNCTION__ << std::endl;
}
