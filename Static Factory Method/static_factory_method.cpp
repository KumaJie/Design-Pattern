//
// Created by Kuma on 2022/7/12.
// 简单工厂模式
//
#include "static_factory_method.h"

using namespace std;

void OperationAdd::getResult() {
    cout << "add!" << endl;
}

void OperationSub::getResult() {
    cout << "sub!" << endl;
}

void OperationMul::getResult() {
    cout << "mul!" << endl;
}

void OperationDiv::getResult() {
    cout << "div!" << endl;
}

Operation *OperationFactory::createOperate(const string &operate) {
    if (operate == "+") {
        return new OperationAdd;
    } else if (operate == "-") {
        return new OperationSub;
    } else if (operate == "*") {
        return new OperationMul;
    } else if (operate == "/") {
        return new OperationDiv;
    }
    return nullptr;
}
