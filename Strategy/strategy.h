//
// Created by Kuma on 2022/7/15.
//

#ifndef DESIGN_PATTERN_STRATEGY_H
#define DESIGN_PATTERN_STRATEGY_H

#include <string>

class CashSuper {
public:
    virtual double acceptCash(double money) = 0;
};

class CashNormal : public CashSuper {
public:
    double acceptCash(double money) override;
};

class CashRebate : public CashSuper {
private:
    double moneyRebate = 1.0;
public:
    CashRebate(double moneyRebate);

    double acceptCash(double money) override;
};

class CashReturn : public CashSuper {
private:
    double moneyCondition = 0.0;
    double moneyReturn = 0.0;
public:
    CashReturn(double moneyCondition, double moneyReturn);

    double acceptCash(double money) override;
};

class CashContext {
private:
    CashSuper *cs;
public:
//    结合工厂模式
    CashContext(std::string type);

    double getResult(double money);

    virtual ~CashContext();
};

#endif //DESIGN_PATTERN_STRATEGY_H
