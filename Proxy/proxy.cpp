//
// Created by Kuma on 2022/7/16.
//

#include "proxy.h"
#include <iostream>

void Pursuit::giveDolls() {
    std::cout << girl->name << " 送你洋娃娃" << std::endl;
}

void Pursuit::giveFlowers() {
    std::cout << girl->name << " 送你鲜花" << std::endl;
}

void Pursuit::giveChocolate() {
    std::cout << girl->name << " 送你巧克力" << std::endl;
}

Pursuit::Pursuit(SchoolGirl *girl) : girl(girl) {}

SchoolGirl::SchoolGirl(const std::string &name) : name(name) {}

void Proxy::giveDolls() {
    pursuit->giveDolls();
}

void Proxy::giveFlowers() {
    pursuit->giveFlowers();
}

void Proxy::giveChocolate() {
    pursuit->giveChocolate();
}

Proxy::Proxy(SchoolGirl *girl) {
    pursuit = new Pursuit(girl);
}
