//
// Created by Kuma on 2022/7/16.
//

#ifndef DESIGN_PATTERN_PROXY_H
#define DESIGN_PATTERN_PROXY_H

#include <string>

class SchoolGirl{
public:
    std::string name;

    SchoolGirl(const std::string &name);
};

class GiveGift{
public:
    virtual void giveDolls() = 0;

    virtual void giveFlowers() = 0;

    virtual void giveChocolate() = 0;
};

class Pursuit : public GiveGift{
private:
    SchoolGirl *girl;
public:
    Pursuit(SchoolGirl *girl);

    void giveDolls() override;

    void giveFlowers() override;

    void giveChocolate() override;
};

class Proxy : public GiveGift{
private:
    Pursuit *pursuit;
public:
    Proxy(SchoolGirl *girl);

    void giveDolls() override;

    void giveFlowers() override;

    void giveChocolate() override;
};
#endif //DESIGN_PATTERN_PROXY_H
