#pragma once
#include "Robot.h"
#include <iostream>
using namespace std;

class Bob : public Robot
{
public:
    using Robot::Robot;
    ~Bob();
    int run();
    friend ostream& operator<< (ostream& out, const Bob& b);
};