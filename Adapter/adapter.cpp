//
// Created by Kuma on 2022/7/13.
//

#include "adapter.h"
#include <iostream>

void Forwards::attack() {
    cout << "前锋" << name << "进攻！" << endl;
}

void Forwards::defense() {
    cout << "前锋" << name << "防守！" << endl;
}

const string &ForeignCenter::getName() const {
    return name;
}

void ForeignCenter::setName(const string &name) {
    ForeignCenter::name = name;
}

void ForeignCenter::jingong() {
    cout << "外国中卫" << name << "进攻！" << endl;
}

void ForeignCenter::fangshou() {
    cout << "外国中卫" << name << "防守！" << endl;
}
