//
// Created by Kuma on 2022/7/19.
//

#include "facade.h"

#include <iostream>

using namespace std;

void Stock::sell() {
    cout << "卖出股票" << endl;
}

void Stock::buy() {
    cout << "买入股票" << endl;
}

void NationalDebt::sell() {
    cout << "卖出国债" << endl;
}

void NationalDebt::buy() {
    cout << "买入股票" << endl;
}

void Realty::sell() {
    cout << "卖出房地产" << endl;
}

void Realty::buy() {
    cout << "买入房地产" << endl;
}

Fund::Fund() {
    stock = new Stock;
    nationalDebt = new NationalDebt;
    realty = new Realty;
}

void Fund::buyFund() {
    stock->buy();
    nationalDebt->buy();
    realty->buy();
}

void Fund::sellFund() {
    stock->sell();
    nationalDebt->sell();
    realty->sell();
}
