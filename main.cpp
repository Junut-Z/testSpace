#include <stdio.h>

#include "./testDemo/testDemoFactory.h"

int main(int argc, char** argv)
{
    printf("Hello TestSpace!!!\n");

    TestDemoFactory* instance = TestDemoFactory::GetInstance();
    instance->Run(argc - 1, argv + 1);

    return 0;
}
