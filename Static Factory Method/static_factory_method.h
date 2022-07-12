//
// Created by Kuma on 2022/7/12.
//

#ifndef DESIGN_PATTERN_STATIC_FACTORY_METHOD_H
#define DESIGN_PATTERN_STATIC_FACTORY_METHOD_H

#include <string>
#include <iostream>

using namespace std;

class Operation {
public:
    virtual void getResult() = 0;
};

class OperationAdd : public Operation {
public:
    void getResult() override;
};

class OperationSub : public Operation {
public:
    void getResult() override;
};

class OperationMul : public Operation {
public:
    void getResult() override;
};

class OperationDiv : public Operation {
public:
    void getResult() override;
};

class OperationFactory {
public:
    static Operation *createOperate(const string &operate);
};

#endif //DESIGN_PATTERN_STATIC_FACTORY_METHOD_H
