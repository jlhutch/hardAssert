The file hardAssert.h provides a C diagnostic macro, hardAssert. It is similar to the assert macro found in the C standard library except, defining NDEBUG will NOT cause hardAssert to be ignored. It is used exactly like the standard assert macro:

#include "hardAssert.h"

hardAssert(expression);
