#pragma once 
#include "User.h"
#include "EncryptStrategy.h"
#include "VerificationStrategy.h"
#include <iostream>
using namespace std;

class UserProxy : public User{
private:
	RealUser* user;
	EncryptStrategy* en;
	VerificationStrategy* ve;
public:
	UserProxy(RealUser* u, EncryptStrategy* e, VerificationStrategy* v) : user(u), en(e), ve(v){}
	void sendMessage(string mes) override
	{
		string code = en->encode(mes);
		user->sendMessage(code);
		cout << ve->verify(mes) << endl;
	}
};