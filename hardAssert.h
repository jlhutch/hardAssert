//
//  hardAssert.h
//
//  Copyright (c) 2022 Jay Hutchinson.
//  SPDX-License-Identifier: MIT
//

#ifndef hardAssert_h
#define hardAssert_h

#include <stdio.h>  // Need fprintf().
#include <stdlib.h> // Need abort().

static void _hardAssertFail(char* expr, char* file, int line) {
    fprintf(stderr, "Assertion failed: %s, file %s, line %d\n", expr, file, line);
    abort();
}

#define hardAssert(expr) if (expr) { } else _hardAssertFail(#expr, __FILE__, __LINE__)

#endif /* hardAssert_h */
