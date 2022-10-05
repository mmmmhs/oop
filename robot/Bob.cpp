#include "Bob.h"
using namespace std;

Bob::~Bob()
{
    if(parts)
    {
        delete[] parts;
        parts = nullptr;
    }
}

int Bob::run(){
    int sum = 0;
    for(int i = 0; i < num; i++)
        sum += parts[i].data * parts[i].data;
    return sum;    
}

ostream& operator<< (ostream& out, const Bob& a)
{
    out << "Build robot Bob";
    return out;
}