#ifndef __STACK
#define __STACK

#include "LinearDataStruct.h"
#include "IteratorBase.h"

class Stack: public LinearDataStruct {
    // TODO
public:

    class Iterator: public IteratorBase {
    public:
        using IteratorBase::IteratorBase;
        Stack::Iterator operator++ (int);
        ~Iterator(){data = nullptr;}
        // TODO
    };
    using LinearDataStruct::LinearDataStruct;
    ~Stack(){};
    int pop() override{
        idx_end--;
        n--;
        return data[idx_end];
    };
    Stack::Iterator begin();
    Stack::Iterator end();
    // TODO
};


#endif