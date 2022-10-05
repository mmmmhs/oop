#pragma once
#include <iostream>
using namespace std;

class Vehicle{
private:
	int wheel = 0, wing = 0, maxwheel, maxwing;
public:
	void set_max_wheel_num(int wh){maxwheel = wh;}
	void set_max_wing_num(int wi){maxwing = wi;}
	bool finished(){return((wheel == maxwheel) && (wing == maxwing));}
	void add_wing(){wing++;}
	void add_wheel(){wheel++;}
	virtual void run(){cout << "I am running" << endl;}
};