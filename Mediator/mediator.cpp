//
// Created by Kuma on 2022/7/15.
//

#include "mediator.h"
#include <iostream>

Country::Country(UnitedNations *mediator) : mediator(mediator) {}

void Country::declare(const string &message) {
    mediator->declare(message, this);
}

Country::~Country() {
    delete mediator;
}

China::China(UnitedNations *mediator) : Country(mediator) {}

void China::getMessage(const string &message) {
    cout << "China: " << message << endl;
}

USA::USA(UnitedNations *mediator) : Country(mediator) {}

void USA::getMessage(const string &message) {
    cout << "USA: " << message << endl;
}

void UNSC::declare(const string &message, Country *country) {
    if (country == usa) {
        china->getMessage(message);
    }else if (country == china) {
        usa->getMessage(message);
    }
}

void UNSC::setUsa(USA *usa) {
    UNSC::usa = usa;
}

void UNSC::setChina(China *china) {
    UNSC::china = china;
}


