#include "rename.h"
int Crename::my_init(void *p)
{
	this->name = "Crename";
	this->alias = "rename";
	return 0;
}

Crename::Crename()
{
	this->my_init();
}

Crename::~Crename()
{

}

#ifndef RENAME_TEST
#define RENAME_TEST 0//1
#endif

#if RENAME_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "RENAME_TEST\n\n";

	return 0;
}
#endif 