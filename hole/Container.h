#pragma once
#include <string>
#include "reply.h"

template<class A>
class Container{
private:    
    reply<A> replies[1001];
    int n = 0;
public:
    Container() : n(0){};
    ~Container(){};
    void insert(int x, int y, A item);
    A* find(int x, int y);    
};

template<class A>
void Container<A>::insert(int x, int y, A item)
{
    replies[n] = reply<A>(x, y, item);
    n++;
}

template<class A>
A* Container<A>::find(int x, int y)
{
    A* tmp = NULL;
    for(int i = 0; i < n; i++)
    {
        if((replies[i].num1 == x) && (replies[i].num2 == y))
        {
            tmp = &replies[i].name;
            break;
        }    
    }
    return tmp;
}