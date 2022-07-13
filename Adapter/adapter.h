//
// Created by Kuma on 2022/7/13.
//

#ifndef DESIGN_PATTERN_ADAPTER_H
#define DESIGN_PATTERN_ADAPTER_H

#include <string>

using namespace std;

class Player {
public:
    Player(const string &s) : name(s) {}

    virtual void attack() = 0;

    virtual void defense() = 0;

protected:
    string name;
};

class Forwards : public Player {
public:
    Forwards(const string &s) : Player(s) {}

    void attack() override;

    void defense() override;
};

class ForeignCenter {
public:
    const string &getName() const;

    void setName(const string &name);

    void jingong();

    void fangshou();

private:
    string name;
};

class Translator : Player {
public:
    Translator(const string &name) : Player(name) { fc->setName(name); }

    void attack() override {
        fc->jingong();
    }

    void defense() override {
        fc->fangshou();
    }

private:
    ForeignCenter *fc = new ForeignCenter;

};

#endif //DESIGN_PATTERN_ADAPTER_H
