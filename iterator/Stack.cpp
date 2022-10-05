#include "Stack.h"
using namespace std;

Stack::Iterator Stack::begin()
{
    Stack::Iterator beg(&data[idx_begin], idx_begin);
    return beg;
}

Stack::Iterator Stack::end()
{
    Stack::Iterator fin(&data[idx_end], idx_end);
    return fin;
}

Stack::Iterator Stack::Iterator::operator++(int)
{
    data += 1;
    idx += 1;
    return *this;
}
