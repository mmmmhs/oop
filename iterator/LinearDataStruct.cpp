#include "LinearDataStruct.h"
using namespace std;

void LinearDataStruct::push(int n)
{
    data[idx_end] = n;
    idx_end++;
    this->n++;
}

int LinearDataStruct::max_size()
{
    return max_n;
}

int LinearDataStruct::size()
{
    return (idx_end - idx_begin);
}

LinearDataStruct::~LinearDataStruct(){}