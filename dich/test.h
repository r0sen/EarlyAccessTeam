#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum {
    RESULT_OK,
    RESULT_FALSE,
    INVALID_INPUT
} ErrorCode;

ErrorCode test_windowName(char * name);

#endif // TEST_H_INCLUDED
