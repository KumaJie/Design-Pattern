//
// Created by Kuma on 2022/7/15.
//

#include "strategy.h"
#include <cmath>

double CashNormal::acceptCash(double money) {
    return money;
}

CashRebate::CashRebate(double moneyRebate) : moneyRebate(moneyRebate) {}

double CashRebate::acceptCash(double money) {
    return money * moneyRebate;
}

CashReturn::CashReturn(double moneyCondition, double moneyReturn) : moneyCondition(moneyCondition),
                                                                    moneyReturn(moneyReturn) {}

double CashReturn::acceptCash(double money) {
    if (money < moneyCondition) {
        return money;
    }
    return money - floor(money / moneyCondition) * moneyReturn;
}

CashContext::CashContext(std::string type)  {
    if(type == "normal") {
        cs = new CashNormal;
    }else if(type == "rebate") {
        cs = new CashRebate(0.8);
    }else if (type == "return") {
        cs = new CashReturn(300, 100);
    }
}

double CashContext::getResult(double money) {
    return cs->acceptCash(money);
}

CashContext::~CashContext() {
    delete cs;
}
