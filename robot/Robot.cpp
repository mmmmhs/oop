#include "Robot.h"

Robot::Robot(int n){
    parts = new Part[n];
    len = n;
}

Robot::~Robot()
{
    if(parts)
    {
        delete[] parts;
        parts = nullptr;
    }    
}

bool Robot::is_full()
{
    return (num == len);
}

void Robot::add_part(const Part& p)
{
    parts[num] = p;
    num++;
}