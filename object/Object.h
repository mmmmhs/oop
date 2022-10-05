#pragma once
#include <list>
#include <vector>
#include <memory>
#include <iostream>
#include "CustomClass.h"
using namespace std;

class Object;
class Content
{
	friend class Object;
	virtual void output(std::ostream& out){ //virtual function for output
		std::cout << "the operator is not supported for this type." << std::endl;
	}
	friend ostream& operator<< (ostream& out, shared_ptr<Content> con){con->output(out);}
	virtual Content& operator+= (int a){}
	virtual Content& operator+= (string a){}
	virtual Object& operator[] (int i){}
};

class IntContent: public Content
{
private:
	int x;
	friend class Object;
public:
	IntContent(int _x): x(_x) {}
	void output(std::ostream& out){ 
		out << x;
	}
	IntContent& operator+= (int a) override
	{
		x += a;
		return *this;
	}
};
class StringContent: public Content
{
private:
	std::string x;
	friend class Object;
public:
	StringContent(std::string _x): x(_x) {}
	void output(std::ostream& out){  
		out << x;
	}
	StringContent& operator+= (string a) override
	{
		x += a;
		return *this;
	}
};
// The following codes are not working
class VectorContent: public Content
{
private:
 	std::vector<Object> x; //Object is not defined???
	friend class Object; 
public:
 	VectorContent(const std::vector<Object> &_x): x(_x) {}
	Object& operator[] (int i) override
	{
		return x[i];
	}
};

class CustomContent: public Content
{
private:
	CustomClass x;
public:
	CustomContent(const CustomClass& _x): x(_x) {}
};

class Object
{
private:
	shared_ptr<Content> pt;
public:
	Object() {}
	Object(int x) {
		pt = shared_ptr<Content>(new IntContent(x)); // where to delete? maybe use std::shared_ptr?
	}
	Object(const std::string &x){
		pt = shared_ptr<Content>(new StringContent(x));
	}
	// The following codes are not working
	Object(const std::vector<Object> &x){
	 	pt = shared_ptr<Content>(new VectorContent(x));
	}
	Object(const CustomClass &x){
		pt = shared_ptr<Content>(new CustomContent(x));
	}

	friend std::ostream& operator<<(std::ostream& out, const Object& obj) {
		out << obj.pt;
		return out;
	}

	Object& operator+=(int y){
		pt->operator+=(y);
		return *this;
	}

	Object& operator+=(const std::string &y){
		pt->operator+=(y);
		return *this;
	}

	Object& operator[](int i){
		return pt->operator[](i);
	}

	//need more operators......
};
