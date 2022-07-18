//
// Created by Kuma on 2022/7/16.
//

#ifndef DESIGN_PATTERN_DECORATOR_H
#define DESIGN_PATTERN_DECORATOR_H
#include <string>

class Person{
private:
    std::string name;
public:
    Person(){}

    Person(const std::string &name);

    virtual void show();
};

class Finery : public Person{
protected:
    Person *component;
public:
    void decorate(Person *component);

    void show() override;
};

class TShirts : public Finery{
public:
    void show() override;
};

class BigTrouser : public Finery{
public:
    void show() override;
};
#endif //DESIGN_PATTERN_DECORATOR_H
