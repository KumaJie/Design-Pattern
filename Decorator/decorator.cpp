//
// Created by Kuma on 2022/7/16.
//

#include "decorator.h"
#include <iostream>

Person::Person(const std::string &name) : name(name) {

}

void Person::show() {
    std::cout << "装饰的" << name << std::endl;
}

void Finery::decorate(Person *component) {
    this->component = component;
}

void Finery::show() {
    if (component) {
        component->show();
    }
}


void TShirts::show() {
    std::cout << "大T恤" << std::endl;
    Finery::show();
}

void BigTrouser::show() {
    std::cout << "垮裤" << std::endl;
    Finery::show();
}
