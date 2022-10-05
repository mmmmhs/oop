#pragma once

#include"LevelStrategy.h"
#include"PerformStrategy.h"

class Calculator
{
private:
	LevelStrategy* ls;
	PerformStrategy* ps;
public:
	Calculator(LevelStrategy* l, PerformStrategy* p) : ls(l), ps(p){};
	int get_base(){return ls->getbase();}
	int get_total(int b){return ps->gettotal(b);}
};