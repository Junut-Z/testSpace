#ifndef _TEST_DEMO_
#define _TEST_DEMO_

#include <stdio.h>

class TestDemo {
public:
    virtual int Run(int argc, char** argv) = 0;
};

#endif // _TEST_DEMO_