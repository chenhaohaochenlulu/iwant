#include "fgets.h"
int Cfgets::my_init(void *p)
{
	this->name = "Cfgets";
	this->alias = "fgets";
	return 0;
}

Cfgets::Cfgets()
{
	this->my_init();
}

Cfgets::~Cfgets()
{

}

#ifndef FGETS_TEST
#define FGETS_TEST 0//1
#endif

#if FGETS_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FGETS_TEST\n\n";

	return 0;
}
#endif 