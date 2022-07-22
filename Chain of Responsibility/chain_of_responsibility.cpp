//
// Created by Kuma on 2022/7/22.
//

#include "chain_of_responsibility.h"

#include <iostream>

Manager::Manager(const string &name) : name(name) {}

void Manager::setSuccessor(Manager *successor) {
    Manager::successor = successor;
}

CommonManager::CommonManager(const string &name) : Manager(name) {}

void CommonManager::handleRequest(int money) {
    if (money <= 500) {
        cout << name << " 加薪 " << money << "批准!" << endl;
    } else {
        if (successor) {
            successor->handleRequest(money);
        }
    };

}

Majordomo::Majordomo(const string &name) : Manager(name) {}

void Majordomo::handleRequest(int money) {
    if (money <= 1000) {
        cout << name << " 加薪 " << money << "批准!" << endl;
    } else {
        if (successor) {
            successor->handleRequest(money);
        }
    };
}

GeneralManager::GeneralManager(const string &name) : Manager(name) {}

void GeneralManager::handleRequest(int money) {
    if (money <= 1500) {
        cout << name <<  " 加薪 " << money << "批准!" << endl;
    } else{
        cout << "加薪不批准!" << endl;
    };
}
