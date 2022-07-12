//
// Created by Kuma on 2022/7/12.
//

#include "abstract_factory.h"
#include <iostream>

using namespace std;

void SqlserverUser::insert() {
    cout << "Sqlserver insert User!" << endl;
}

void MysqlUser::insert() {
    cout << "Mysql insert User!" << endl;
}

void SqlserverDep::insert() {
    cout << "Sqlserver insert Dep!;" << endl;
}

void MysqlDep::insert() {
    cout << "Mysql insert Dep!;" << endl;
}

IUser *MysqlFactory::createUser() {
    return new MysqlUser;
}

IDep *MysqlFactory::createDep() {
    return new MysqlDep;
}

IUser *SqlserverFactory::createUser() {
    return new SqlserverUser;
}

IDep *SqlserverFactory::createDep() {
    return new SqlserverDep;
}
