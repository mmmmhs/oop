#pragma once
#include "Pair.h"

class Map{
    Pair * data;
    int sz;
public:
    Map(int n);
    int size();
    int& operator[] (const string name); 
    int operator[] (const string name) const;
    ~Map();
    // TODO
};