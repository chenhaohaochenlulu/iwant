#ifndef EXP_H
#define EXP_H

#include "../object.h"

namespace n_exp {
	class Cexp :public Object
	{
	public:
		Cexp();
		~Cexp();
		int my_init(void *p=nullptr);
	};
}

using namespace n_exp;

#endif
