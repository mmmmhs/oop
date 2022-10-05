#include "Queue.h"
using namespace std;

Queue::Iterator Queue::begin()
{
    Queue::Iterator beg(&data[idx_begin], idx_begin);
    return beg;
}

Queue::Iterator Queue::end()
{
    Queue::Iterator fin(&data[idx_end], idx_end);
    return fin;
}

Queue::Iterator Queue::Iterator::operator++(int)
{
    data += 1;
    idx += 1;
    return *this;
}