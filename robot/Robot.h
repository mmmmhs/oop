#pragma once
#include "Part.h"

class Robot{
private:
    int len;    
public:
    Robot(int n);
    ~Robot();
    bool is_full();
    void add_part(const Part& p);
protected:
    Part* parts;
    int num = 0;    
};