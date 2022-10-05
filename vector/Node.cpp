#include "Node.h"
#include<windows.h>

long long int Node::num_createfunc = 0, Node::num_copyfunc = 0, Node::num_movefunc = 0;
long long int Node::num_copyassign = 0, Node::num_moveassign = 0, Node::num_delfunc = 0;
long long int Node::num_createfunc_default = 0;
int Node::count = 0;

Node::Node(int v): val(v) {
	SetConsoleOutputCP(CP_UTF8);
	num_createfunc++;
	count ++;
	num = count;
	std::cout << '(' << num << '+' << ')';
	std::cout << "构造函数" << "Test(int val): this->buf @ " << std::endl;
}
Node::Node(){
	SetConsoleOutputCP(CP_UTF8);
	num_createfunc_default++;
	count ++;
	num = count;
	std::cout << '(' << num << '+' << ')';
	std::cout << "构造函数" << "Test(): this->buf @ " << std::endl;
}
Node::~Node() {
	SetConsoleOutputCP(CP_UTF8);
	num_delfunc++;
	std::cout << '(' << num << '-' << ')';
	std::cout << "析构函数" << "~Test(): this->buf @ " << std::endl;
}
Node::Node(const Node &y): val(y.val) {
	SetConsoleOutputCP(CP_UTF8);
	num_copyfunc++;
	count ++;
	num = count;
	std::cout << '(' << num << '+' << ')';
	std::cout << "复制构造函数Test(const Test&) called. this->buf @ " << std::endl;
}
Node::Node(Node &&y): val(y.val) {
	SetConsoleOutputCP(CP_UTF8);
	y.val = 0;
	num_movefunc++;
	count ++;
	num = count;
	std::cout << '(' << num << '+' << ')';
	std::cout << "移动构造函数Test(Test&&) called. this->buf @ " << std::endl;
}
Node& Node::operator=(const Node &y) {
	SetConsoleOutputCP(CP_UTF8);
	val = y.val;
	num_copyassign++;
	std::cout << "赋值运算operator= (const Test%)" << std::endl;
	return *this;
}
Node& Node::operator=(Node &&y) {
	SetConsoleOutputCP(CP_UTF8);
	val = y.val;
	y.val = 0;
	num_moveassign++;
	std::cout << "移动赋值运算operator= (Test&&)" << std::endl;
	return *this;
}

bool Node::operator!=(const Node & y){
	return val != y.val;
}

void Node::outputResult(int ref_ans) {
	std::cout << Node::num_createfunc_default << " " << Node::num_createfunc << " " << Node::num_copyfunc << " " << Node::num_movefunc << " " << Node::num_copyassign << " " << Node::num_moveassign << " " << Node::num_delfunc << std::endl;
	long long int tmp = (Node::num_createfunc+Node::num_copyfunc+Node::num_copyassign)*10+Node::num_movefunc+Node::num_moveassign+Node::num_createfunc_default;
	if (tmp <= ref_ans && Node::num_createfunc + Node::num_createfunc_default + Node::num_copyfunc + Node::num_movefunc == Node:: num_delfunc){
		std::cout << "YES" << std::endl;
	}	
	else{
		std::cout << "NO" << std::endl;
	}
}

std::istream& operator>>(std::istream& in, Node& x){
	std::cin >> x.val;
	return in;
}
std::ostream& operator<<(std::ostream& out, const Node& x){
	std::cout << x.val;
	return out;
}
