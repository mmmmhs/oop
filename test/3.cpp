#include "Test.h"

Test F(const Test& a){
    Test b = std::move(a);
    return b;
}
int main(){
    Test a(1);
    Test A = F(a);
    return 0;
}