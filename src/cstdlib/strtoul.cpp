#include "strtoul.h"
int Cstrtoul::my_init(void *p)
{
	this->name = "Cstrtoul";
	this->alias = "strtoul";
	return 0;
}

Cstrtoul::Cstrtoul()
{
	this->my_init();
}

Cstrtoul::~Cstrtoul()
{

}

#ifndef STRTOUL_TEST
#define STRTOUL_TEST 0//1
#endif

#if STRTOUL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRTOUL_TEST\n\n";

	return 0;
}
#endif 