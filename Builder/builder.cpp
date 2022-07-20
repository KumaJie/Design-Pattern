//
// Created by Kuma on 2022/7/19.
//

#include "builder.h"

#include <iostream>

using namespace std;

void PersonThinBuilder::buildHead() {
    cout << "构造瘦头部" << endl;
}

void PersonThinBuilder::buildBody() {
    cout << "构造瘦身体" << endl;
}

void PersonThinBuilder::buildLeg() {
    cout << "构造瘦腿部" << endl;
}

void PersonFatBuilder::buildHead() {
    cout << "构造胖头部" << endl;
}

void PersonFatBuilder::buildBody() {
    cout << "构造胖身体" << endl;
}

void PersonFatBuilder::buildLeg() {
    cout << "构造胖腿部" << endl;
}

PersonDirector::PersonDirector(PersonBuilder *pb) : pb(pb) {}

void PersonDirector::createPerson() {
    pb->buildHead();
    pb->buildBody();
    pb->buildLeg();
}
