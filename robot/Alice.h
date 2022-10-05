#pragma once
#include "Robot.h"
#include <iostream>
using namespace std;

class Alice : public Robot
{
public:
    using Robot::Robot;
    ~Alice();
    int run();
    friend ostream& operator<< (ostream& out, const Alice& a);
};