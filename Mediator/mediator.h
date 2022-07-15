//
// Created by Kuma on 2022/7/15.
//

#ifndef DESIGN_PATTERN_MEDIATOR_H
#define DESIGN_PATTERN_MEDIATOR_H

#include <string>
#include <vector>

class Country;
class USA;
class China;

using namespace std;

class UnitedNations{
public:
    virtual void declare(const string &message, Country *country) = 0;
};

class UNSC : public UnitedNations{
private:
    USA *usa;
    China *china;
public:
    void setUsa(USA *usa);

    void setChina(China *china);

    void declare(const string &message, Country *country) override;
};

class Country{
protected:
    UnitedNations *mediator;
public:
    Country(UnitedNations *mediator);

    virtual void declare(const string &message);

    virtual void getMessage(const string &message) = 0;

    virtual ~Country();
};

class China : public Country{
public:
    China(UnitedNations *mediator);
    void getMessage(const string &message) override;
};

class USA : public Country {
public:
    USA(UnitedNations *mediator);
    void getMessage(const string &message) override;
};
#endif //DESIGN_PATTERN_MEDIATOR_H
