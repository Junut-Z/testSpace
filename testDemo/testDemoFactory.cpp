#include "testDemoFactory.h"

#include <stdlib.h>

#include "testDemo001.h"
#include "testDemo002.h"

TestDemoFactory* TestDemoFactory::instance = nullptr;

TestDemoFactory* TestDemoFactory::GetInstance()
{
    printf("Hello TestDemoFactory::GetInstance\n");
    if (nullptr == instance)
    {
        instance = new TestDemoFactory();
    }

    return instance;
}

int TestDemoFactory::CreateTestDemo(int argc, char** argv)
{
    printf("Hello TestDemoFactory::CreateTestDemo\n");

    testDemo = nullptr;
    switch (atoi(argv[0]))
    {
    case 1:
        testDemo = new TestDemo001();
        break;
    case 2:
        testDemo = new TestDemo002();
        break;
    default:
        break;
    }

    if(nullptr == testDemo)
    {
            printf("Hello TestDemoFactory::CreateTestDemo --> testDemo is nullptr!\n");
        return -1;
    } else {
        return testDemo->Run(argc - 1, argv + 1);
    }
}

int TestDemoFactory::Run(int argc, char** argv)
{
    printf("Hello TestDemoFactory::Run\n");

    if (0 != argc)
    {
        CreateTestDemo(argc, argv);
    }

    return 0;
}