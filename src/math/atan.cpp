#include "atan.h"
int Catan::my_init(void *p)
{
	this->name = "Catan";
	this->alias = "atan";
	return 0;
}

Catan::Catan()
{
	this->my_init();
}

Catan::~Catan()
{

}

#ifndef ATAN_TEST
#define ATAN_TEST 0//1
#endif

#if ATAN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ATAN_TEST\n\n";

	return 0;
}
#endif 