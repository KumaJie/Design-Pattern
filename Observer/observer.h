//
// Created by Kuma on 2022/7/13.
//

#ifndef DESIGN_PATTERN_OBSERVER_H
#define DESIGN_PATTERN_OBSERVER_H

#include <vector>
#include <string>

class Notifier;

using namespace std;

class Observer {
public:
    Observer(const string &s, Notifier *n) : name(s), notifier(n) {}

    virtual ~Observer() {
        delete notifier;
    }

    virtual void update() = 0;

protected:
    string name;
    Notifier *notifier;
};

class StockObserver : public Observer {
public:
    StockObserver(const string &name, Notifier *notifier) : Observer(name, notifier) {}

    void update() override;
};

class NBAObserver : public Observer {
public:
    NBAObserver(const string &name, Notifier *notifier) : Observer(name, notifier) {}

    void update() override;
};

class Notifier {
public:
    string getState() const { return state; }

    void setState(const string &newState) { state = newState; }

    virtual void attach(Observer *observer);

    virtual void detach(Observer *observer);

    virtual void notify();

protected:
    string state;
    vector<Observer *> observers;
};

class Boss : public Notifier {

};


#endif //DESIGN_PATTERN_OBSERVER_H
