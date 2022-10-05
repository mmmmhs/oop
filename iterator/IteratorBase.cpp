#include "IteratorBase.h"

IteratorBase::~IteratorBase()
{
    data = nullptr;
}

bool IteratorBase::operator!=(IteratorBase other)
{
    return(data != other.data);
}

int IteratorBase::operator*()
{
    return *data;
}
