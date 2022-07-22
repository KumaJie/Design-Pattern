//
// Created by Kuma on 2022/7/22.
//

#ifndef DESIGN_PATTERN_CHAIN_OF_RESPONSIBILITY_H
#define DESIGN_PATTERN_CHAIN_OF_RESPONSIBILITY_H
#include <string>

using namespace std;


class Manager{
public:
    Manager(const string &name);

    void setSuccessor(Manager *successor);

    virtual void handleRequest(int money) = 0;
protected:
    string name;
    Manager *successor;
};

class CommonManager : public Manager{
public:
    CommonManager(const string &name);

    void handleRequest(int money) override;
};

class Majordomo : public Manager {
public:
    Majordomo(const string &name);

    void handleRequest(int money) override;
};

class GeneralManager : public Manager {
public:
    GeneralManager(const string &name);

    void handleRequest(int money) override;
};



#endif //DESIGN_PATTERN_CHAIN_OF_RESPONSIBILITY_H
