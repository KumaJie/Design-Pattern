//
// Created by Kuma on 2022/7/19.
//

#ifndef DESIGN_PATTERN_FACADE_H
#define DESIGN_PATTERN_FACADE_H
class Stock{
public:
    void sell();

    void buy();
};

class NationalDebt{
public:
    void sell();

    void buy();
};

class Realty{
public:
    void sell();

    void buy();
};

class Fund{
public:
    Fund();

    void buyFund();

    void sellFund();
private:
    Stock *stock;
    NationalDebt *nationalDebt;
    Realty *realty;
};
#endif //DESIGN_PATTERN_FACADE_H
