#pragma once
# include <string>
using namespace std;

class VerificationStrategy{
public:
	virtual std::string verify(std::string mes) = 0;
};

class PrefixStrategy : public VerificationStrategy
{
public:
	string verify(string mes){
		string code;
		for(int i = 0; i < 3; i++)
			code.push_back(mes[i]);
		return code;
	}
};

class IntervalStrategy : public VerificationStrategy
{
public:
	string verify(string mes){
		string code;
		int l = mes.length();
		for(int i = 0; i < l; i++)
		{
			if(i % 2 == 0)
				code.push_back(mes[i]);
		}
		return code;
	}
};