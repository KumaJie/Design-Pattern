//
// Created by Kuma on 2022/7/21.
//

#include "command.h"
#include <iostream>

using namespace std;


void Barbecuer::bakeMutton() {
    cout << "烤羊肉" << endl;
}

void Barbecuer::bakeChicken() {
    cout << "烤鸡肉" << endl;
}

Command::Command(Barbecuer *receiver) : receiver(receiver) {}

BakeMuttonCommand::BakeMuttonCommand(Barbecuer *receiver) : Command(receiver) {}

void BakeMuttonCommand::executeCommand() {
    receiver->bakeMutton();
}

BakeChickenCommand::BakeChickenCommand(Barbecuer *receiver) : Command(receiver) {}

void BakeChickenCommand::executeCommand() {
    receiver->bakeChicken();
}

void Waiter::setOrder(Command *cmd) {
    orders.push_back(cmd);
    cout << "增加订单" << endl;
}

void Waiter::cancelOrder(Command *cmd) {

}

void Waiter::notify() {
    for (auto p : orders){
        p->executeCommand();
    }
}
