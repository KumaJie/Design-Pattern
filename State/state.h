//
// Created by Kuma on 2022/7/20.
//

#ifndef DESIGN_PATTERN_STATE_H
#define DESIGN_PATTERN_STATE_H

class State;

class Work{
public:
    Work();

    State *getState() const;

    void setState(State *state);

    double getHour() const;

    void setHour(double hour);

    bool isFinish() const;

    void setFinish(bool finish);

    void request();

private:
    State *state;
    double hour;
    bool finish = false;
};
class State{
public:
    virtual void handle(Work &work) = 0;
};

class ForenoonState : public State{
public:
    void handle(Work &work) override;
};

class NoonState : public State{
public:
    void handle(Work &work) override;
};

class AfternoonState : public State{
public:
    void handle(Work &work) override;
};

class EveningState : public State{
public:
    void handle(Work &work) override;
};

class SleepingState : public State{
public:
    void handle(Work &work) override;
};

class RestState : public State{
public:
    void handle(Work &work) override;
};
#endif //DESIGN_PATTERN_STATE_H
