#pragma once
#include <string>

template<class A>
class reply
{
private:
    int num1;
    int num2;
    A name;
    template<class T>friend class Container;
public:
    reply() : num1(0), num2(0){};
    reply(int x, int y, A nn) : num1(x), num2(y), name(nn){};
    ~reply(){};
};


