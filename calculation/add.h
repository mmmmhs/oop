#pragma once

#include "operation.h"
using namespace std;

class add : public OperationNodeTwo
{
public:
    using OperationNodeTwo::OperationNodeTwo;
    ~add();
    void UpdateValue() override;
};
