#include <iostream>
#include "sq_stack.h"


int main() {
//    test_sq_stack();
//    conversion();

    char * expression = const_cast<char *>("(3+5)x[4/(5-1)]");
    Status result = bracket_matching(expression, 15);

    return 0;
}

