#pragma once 
#include"record.h"
using namespace std;

class MagicArray{
private:
	MagicArray* m;
public: 
	MagicArray(int len);
	record& operator[](int i);
	void apply(std::vector<int> &vec);
};