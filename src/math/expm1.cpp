#include "expm1.h"
int Cexpm1::my_init(void *p)
{
	this->name = "Cexpm1";
	this->alias = "expm1";
	return 0;
}

Cexpm1::Cexpm1()
{
	this->my_init();
}

Cexpm1::~Cexpm1()
{

}

#ifndef EXPM1_TEST
#define EXPM1_TEST 0//1
#endif

#if EXPM1_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "EXPM1_TEST\n\n";

	return 0;
}
#endif 