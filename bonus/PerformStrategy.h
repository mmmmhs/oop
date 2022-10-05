#pragma once

class PerformStrategy
{
protected:
	float per;
public:
	PerformStrategy(float p) : per(p){}
	virtual int gettotal(int base) = 0;
};

class sPerformStrategy : public PerformStrategy
{
public:
	using PerformStrategy::PerformStrategy;
	int gettotal(int base) override{return base + 1000;}
};

class mPerformStrategy : public PerformStrategy
{
public:
	using PerformStrategy::PerformStrategy;
	int gettotal(int base) override{return base * (1 + per);}
};

class lPerformStrategy : public PerformStrategy
{
public:
	using PerformStrategy::PerformStrategy;
	int gettotal(int base) override{return base * (1 + 2 * per);}
};
