#include "getenv.h"
int Cgetenv::my_init(void *p)
{
	this->name = "Cgetenv";
	this->alias = "getenv";
	return 0;
}

Cgetenv::Cgetenv()
{
	this->my_init();
}

Cgetenv::~Cgetenv()
{

}

#ifndef GETENV_TEST
#define GETENV_TEST 0//1
#endif

#if GETENV_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "GETENV_TEST\n\n";

	return 0;
}
#endif 