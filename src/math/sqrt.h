#ifndef SQRT_H
#define SQRT_H

#include "../object.h"

namespace n_sqrt {
	class Csqrt :public Object
	{
	public:
		Csqrt();
		~Csqrt();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sqrt;

#endif
