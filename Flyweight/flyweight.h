//
// Created by Kuma on 2022/7/22.
//

#ifndef DESIGN_PATTERN_FLYWEIGHT_H
#define DESIGN_PATTERN_FLYWEIGHT_H
#include <string>
#include <unordered_map>

using namespace std;

class User{
private:
    string name;
public:
    User(const string &name);

    const string &getName() const;
};

class WebSite{
public:
    virtual void use(User *user) = 0;
};

class ConcreteWebSite : public WebSite{
private:
    string name;
public:
    ConcreteWebSite(const string &name);

    void use(User *user) override;
};

class WebSiteFactory{
private:
    unordered_map<string, WebSite*> flyweights;
public:
    WebSite *getWebSiteInstance(const string &key);

    int getWebSiteSize();
};
#endif //DESIGN_PATTERN_FLYWEIGHT_H
