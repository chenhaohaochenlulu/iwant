#include "remove.h"
int Cremove::my_init(void *p)
{
	this->name = "Cremove";
	this->alias = "remove";
	return 0;
}

Cremove::Cremove()
{
	this->my_init();
}

Cremove::~Cremove()
{

}

#ifndef REMOVE_TEST
#define REMOVE_TEST 0//1
#endif

#if REMOVE_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "REMOVE_TEST\n\n";

	return 0;
}
#endif 