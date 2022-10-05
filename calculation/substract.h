#pragma once

#include "operation.h"
using namespace std;

class sub : public OperationNodeTwo
{
public:
    using OperationNodeTwo::OperationNodeTwo;
    ~sub();
    void UpdateValue() override;
};