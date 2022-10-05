#include <iostream>
#include "Example.h"

using namespace std;

int Example::cnt = 0;//(2)

Example::Example(int data) {
    this->data = data;
    num = ++cnt;
    cout << "Example #" << num << " is created" << endl;//(3)
}

void Example::getData() {
    cout << "The data of Example #" << num << " is " << data << endl;//(4)
}

Example::~Example() {
    cout << "Example #" << num << " is destroyed" << endl;//(5)
}