#include "Map.h"
#include "Pair.h"
#include <string>

Map::Map(int n){
    data = new Pair[n];
    sz = 0;
}
Map::~Map(){
    delete[] data;
}

int Map::size(){
    return sz;
}

int& Map::operator[] (const string name)
{
    for(int i = 0; i < sz; i++)
    {
        if(data[i].hasKey(name))
            return data[i].getVal();
    }
    data[sz].reset(name, 0);
    sz++;
    return data[sz - 1].getVal();
}

int Map::operator[] (const string name) const{
    for(int i = 0; i < sz; i++)
    {
        if(data[i].hasKey(name))
            return data[i].getVal();
    }
    return 0;
}