#include "erfc.h"
int Cerfc::my_init(void *p)
{
	this->name = "Cerfc";
	this->alias = "erfc";
	return 0;
}

Cerfc::Cerfc()
{
	this->my_init();
}

Cerfc::~Cerfc()
{

}

#ifndef ERFC_TEST
#define ERFC_TEST 0//1
#endif

#if ERFC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ERFC_TEST\n\n";

	return 0;
}
#endif 