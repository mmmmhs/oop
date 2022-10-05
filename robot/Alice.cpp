#include "Alice.h"
using namespace std;

Alice::~Alice()
{
    if(parts)
    {
        delete[] parts;
        parts = nullptr;
    }
}

int Alice::run(){
    int sum = 0;
    for(int i = 0; i < num; i++)
        sum += parts[i].data;
    return sum;    
}

ostream& operator<< (ostream& out, const Alice& a)
{
    out << "Build robot Alice";
    return out;
}
