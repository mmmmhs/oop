#ifndef __QUEUE
#define __QUEUE

#include "LinearDataStruct.h"
#include "IteratorBase.h"

class Queue: public LinearDataStruct {
    // TODO
public:

    class Iterator: public IteratorBase {
    public:   
        using IteratorBase::IteratorBase;
        Queue::Iterator operator++ (int);
        ~Iterator(){data = nullptr;}
        // TODO
    };
    using LinearDataStruct::LinearDataStruct;
    ~Queue(){};
    int pop() override{
        idx_begin++;
        n--;
        return data[idx_begin - 1];
    };
    Queue::Iterator begin();
    Queue::Iterator end();
    // TODO
};

#endif