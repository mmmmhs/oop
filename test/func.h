#pragma once
#include "Test.h"
using namespace std;

Test f1(Test t)
{
    t.print("a");
    return move(t); 
}    

Test& f2(Test& t)
{
    t.print("b");
}

void f3(Test& t, Test& s)
{
    Test tmp(move(t));
    t = move(s);
    s = move(tmp);
}
    
