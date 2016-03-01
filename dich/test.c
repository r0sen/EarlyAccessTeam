#include "test.h"

ErrorCode test_windowName(char * name) {

    if(0 == strlen(name))
        return INVALID_INPUT;
        else if(isdigit(name[0]))
            return INVALID_INPUT;
            else if(isspace(name[0]))
                return INVALID_INPUT;
        else
            return RESULT_OK;
}




