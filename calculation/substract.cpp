#include "substract.h"

sub::~sub() = default;

void sub::UpdateValue(){
    value_ = input1->value() - input2->value();
}