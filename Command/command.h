//
// Created by Kuma on 2022/7/21.
//

#ifndef DESIGN_PATTERN_COMMAND_H
#define DESIGN_PATTERN_COMMAND_H

#include <vector>

using namespace std;

class Barbecuer {
public:
    void bakeMutton();

    void bakeChicken();
};

class Command {
protected:
    Barbecuer *receiver;
public:
    Command(Barbecuer *receiver);

    virtual void executeCommand() = 0;
};

class BakeMuttonCommand : public Command {
public:
    BakeMuttonCommand(Barbecuer *receiver);

    void executeCommand() override;
};

class BakeChickenCommand : public Command {
public:
    BakeChickenCommand(Barbecuer *receiver);

    void executeCommand() override;
};

class Waiter {
private:
    vector<Command*> orders;
public:
    void setOrder(Command *cmd);

    void cancelOrder(Command *cmd);

    void notify();
};

#endif //DESIGN_PATTERN_COMMAND_H
