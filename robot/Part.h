#pragma once

class Part{
private:
    int data;
    friend class Alice;
    friend class Bob;
public:
    Part(int d) : data(d){}
    Part() : data(0){}
    ~Part(){}
};