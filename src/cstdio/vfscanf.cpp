#include "vfscanf.h"
int Cvfscanf::my_init(void *p)
{
	this->name = "Cvfscanf";
	this->alias = "vfscanf";
	return 0;
}

Cvfscanf::Cvfscanf()
{
	this->my_init();
}

Cvfscanf::~Cvfscanf()
{

}

#ifndef VFSCANF_TEST
#define VFSCANF_TEST 0//1
#endif

#if VFSCANF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "VFSCANF_TEST\n\n";

	return 0;
}
#endif 