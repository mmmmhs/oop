#pragma once

class LevelStrategy
{
public:
	virtual int getbase() = 0;
};

class P1LStrategy : public LevelStrategy
{
public:
	int getbase() override {return 2000;}
};

class P2LStrategy : public LevelStrategy
{
public:
	int getbase() override {return 5000;}
};

class P3LStrategy : public LevelStrategy
{
public:
	int getbase() override {return 10000;}
};

