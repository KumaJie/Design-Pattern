//
// Created by Kuma on 2022/7/23.
//

#ifndef DESIGN_PATTERN_VISITOR_H
#define DESIGN_PATTERN_VISITOR_H
#include <string>

using namespace std;

class Action;

class Person{
public:
    virtual void accept(Action *visitor) = 0;
};

class Man : public Person{
public:
    void accept(Action *visitor) override;
};

class Woman : public Person{
public:
    void accept(Action *visitor) override;
};

class Action{
public:
    virtual void getManConclusion(Man man) = 0;

    virtual void getWomanConclusion(Woman woman) = 0;
};

class Success : public Action{
public:
    void getManConclusion(Man man) override;

    void getWomanConclusion(Woman woman) override;
};

class Fail : public Action{
public:
    void getManConclusion(Man man) override;

    void getWomanConclusion(Woman woman) override;
};
#endif //DESIGN_PATTERN_VISITOR_H
