#include "sql_SEMANTICSIMILARITYDETAILSTABLE.h"
int Csql_SEMANTICSIMILARITYDETAILSTABLE::my_init(void *p)
{
	this->name = "Csql_SEMANTICSIMILARITYDETAILSTABLE";
	this->alias = "sql_SEMANTICSIMILARITYDETAILSTABLE";
	return 0;
}

Csql_SEMANTICSIMILARITYDETAILSTABLE::Csql_SEMANTICSIMILARITYDETAILSTABLE()
{
	this->my_init();
}
