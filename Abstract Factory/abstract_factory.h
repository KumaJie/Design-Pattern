//
// Created by Kuma on 2022/7/12.
//

#ifndef DESIGN_PATTERN_ABSTRACT_FACTORY_H
#define DESIGN_PATTERN_ABSTRACT_FACTORY_H

class IUser {
public:
    virtual void insert() = 0;
};

class SqlserverUser : public IUser {
public:
    void insert() override;
};

class MysqlUser : public IUser {
public:
    void insert() override;
};

class IDep {
public:
    virtual void insert() = 0;
};

class SqlserverDep : public IDep {
public:
    void insert() override;
};

class MysqlDep : public IDep {
public:
    void insert() override;
};

class IFactory {
public:
    virtual IUser *createUser() = 0;

    virtual IDep *createDep() = 0;
};

class MysqlFactory : public IFactory {
public:
    IUser *createUser() override;

    IDep *createDep() override;
};

class SqlserverFactory : public IFactory {
public:
    IUser *createUser() override;

    IDep *createDep() override;
};

#endif //DESIGN_PATTERN_ABSTRACT_FACTORY_H
