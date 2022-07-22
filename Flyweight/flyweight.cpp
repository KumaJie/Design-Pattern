//
// Created by Kuma on 2022/7/22.
//

#include <iostream>
#include "flyweight.h"

User::User(const string &name) : name(name) {}

const string &User::getName() const {
    return name;
}

ConcreteWebSite::ConcreteWebSite(const string &name) : name(name) {}

void ConcreteWebSite::use(User *user) {
    cout << "网站分类：" << name << " 用户：" << user->getName() << endl;
}

WebSite *WebSiteFactory::getWebSiteInstance(const string &key) {
    if (!flyweights[key]) {
        flyweights[key] = new ConcreteWebSite(key);
    }
    return flyweights[key];
}

int WebSiteFactory::getWebSiteSize() {
    return flyweights.size();
}
