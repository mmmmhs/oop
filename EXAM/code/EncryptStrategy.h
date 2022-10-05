#pragma once
#include <string>
using namespace std;

class EncryptStrategy{
public:
	virtual std::string encode(std::string mes) = 0;
};

class InsertStrategy : public EncryptStrategy
{
public:
	string encode(string mes) override{
		string code;
		int l = mes.length();
		for(int i = 0; i < l; i++)
		{
			code.push_back(mes[i]);
			code.push_back('#');
		}
		return code;
	}
};

class InvertStrategy : public EncryptStrategy
{
public:
	string encode(string mes) override{
		string code;
		int l = mes.length();
		for(int i = 0; i < l; i++)
			code.push_back(mes[l - 1 - i]);
		return code;
	}
};

