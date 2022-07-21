//
// Created by Kuma on 2022/7/21.
//

#include "composite.h"
#include <algorithm>
#include <iostream>

Company::Company(const string &name) : name(name) {}

void ConcreteCompany::add(Company *c) {
    children.push_back(c);
}

void ConcreteCompany::remove(Company *c) {
    children.erase(find(children.begin(), children.end(), c));
}

void ConcreteCompany::display(int depth) {
    for (int i = 0; i < depth; i++) {
        cout << "-";
    }
    cout << name << endl;
    for (auto p : children){
        p->display(depth + 2);
    }
}

void ConcreteCompany::handle() {
    for (auto p : children){
        p->handle();
    }
}

ConcreteCompany::ConcreteCompany(const string &name) : Company(name) {}

HRDepartment::HRDepartment(const string &name) : Company(name) {}

void HRDepartment::add(Company *c) {

}

void HRDepartment::remove(Company *c) {

}

void HRDepartment::display(int depth) {
    for (int i = 0; i < depth; i++) {
        cout << "-";
    }
    cout << name << endl;
}

void HRDepartment::handle() {
    cout << name << " 员工招聘培训管理" << endl;
}
FinaneDepartment::FinaneDepartment(const string &name) : Company(name) {}

void FinaneDepartment::add(Company *c) {

}

void FinaneDepartment::remove(Company *c) {

}

void FinaneDepartment::display(int depth) {
    for (int i = 0; i < depth; i++) {
        cout << "-";
    }
    cout << name << endl;
}

void FinaneDepartment::handle() {
    cout << name << " 公司财务收支管理" << endl;
}
