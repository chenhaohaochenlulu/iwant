#include "logb.h"
int Clogb::my_init(void *p)
{
	this->name = "Clogb";
	this->alias = "logb";
	return 0;
}

Clogb::Clogb()
{
	this->my_init();
}

Clogb::~Clogb()
{

}

#ifndef LOGB_TEST
#define LOGB_TEST 0//1
#endif

#if LOGB_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOGB_TEST\n\n";

	return 0;
}
#endif 