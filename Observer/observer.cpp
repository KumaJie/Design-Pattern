//
// Created by Kuma on 2022/7/13.
//
#include "observer.h"
#include <iostream>

using namespace std;


void StockObserver::update() {
    cout << notifier->getState() << " " << name << "关闭股票行情，继续工作！" << endl;
}

void NBAObserver::update() {
    cout << notifier->getState() << " " << name << "关闭NBA直播，继续工作！" << endl;
}

void Notifier::attach(Observer *observer) {
    observers.push_back(observer);
}

void Notifier::detach(Observer *observer) {
    for (auto it = observers.begin(); it != observers.end(); it++) {
        if (*it == observer) {
            observers.erase(it);
            return;
        }
    }
}

void Notifier::notify() {
    for (const auto &item: observers) {
        item->update();
    }
}

