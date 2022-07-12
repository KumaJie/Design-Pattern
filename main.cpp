#include <iostream>

#include "Abstract Factory/abstract_factory.h"
//using namespace std;
int main() {
    IFactory *factory = new SqlserverFactory;
    auto user = factory->createUser();
    auto dep = factory->createDep();
    user->insert();
    dep->insert();
    return 0;
}
