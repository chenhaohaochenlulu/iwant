#include "lldiv.h"
int Clldiv::my_init(void *p)
{
	this->name = "Clldiv";
	this->alias = "lldiv";
	return 0;
}

Clldiv::Clldiv()
{
	this->my_init();
}

Clldiv::~Clldiv()
{

}

#ifndef LLDIV_TEST
#define LLDIV_TEST 0//1
#endif

#if LLDIV_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LLDIV_TEST\n\n";

	return 0;
}
#endif 