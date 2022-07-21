//
// Created by Kuma on 2022/7/21.
//

#ifndef DESIGN_PATTERN_COMPOSITE_H
#define DESIGN_PATTERN_COMPOSITE_H

#include <string>
#include <vector>


using namespace std;

class Company{
public:
    Company(const string &name);

    virtual void add(Company *c) = 0;

    virtual void remove(Company *c) = 0;

    virtual void display(int depth) = 0;

    virtual void handle() = 0;

protected:
    std::string name;
};

class ConcreteCompany : public Company{
private:
    vector<Company*> children;
public:
    ConcreteCompany(const string &name);

    void add(Company *c) override;

    void remove(Company *c) override;

    void display(int depth) override;

    void handle() override;
};

class HRDepartment : public Company{
public:
    HRDepartment(const string &name);

    void add(Company *c) override;

    void remove(Company *c) override;

    void display(int depth) override;

    void handle() override;
};

class FinaneDepartment : public Company{
public:
    FinaneDepartment(const string &name);

    void add(Company *c) override;

    void remove(Company *c) override;

    void display(int depth) override;

    void handle() override;
};
#endif //DESIGN_PATTERN_COMPOSITE_H
