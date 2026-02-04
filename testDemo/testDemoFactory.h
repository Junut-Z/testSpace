#include "testDemo.h"

class TestDemoFactory{
public:
    static TestDemoFactory* GetInstance();

    static TestDemoFactory* instance;

    int CreateTestDemo(int argc, char** argv);
    
    int Run(int argc, char** argv);

private:
    TestDemo* testDemo = nullptr;
};