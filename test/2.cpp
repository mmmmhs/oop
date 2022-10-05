#include "Test.h"

const Test& F(const Test& a){
    Test b = a;
    return Test(1);
}
int main() {
    Test a;
    const Test &A = F(std::move(a));
    return 0;
}