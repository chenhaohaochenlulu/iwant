#ifndef CODE_ACTION_H
#define CODE_ACTION_H
#include "bits.def"
#include "action_type.h"

enum class CodeAtcionClass
{
	none,
	create,
};

enum class CodeAtcion {
	create_h = BIT0,
	create_c = BIT1,
	create_func = BIT2,
};

#endif