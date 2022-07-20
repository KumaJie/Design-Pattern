//
// Created by Kuma on 2022/7/20.
//

#include "state.h"
#include <iostream>

using namespace std;

void ForenoonState::handle(Work &work) {
    if (work.getHour() < 12) {
        cout << work.getHour() << " 点上午" << endl;
    } else {
        work.setState(new NoonState);
        work.request();
    }
}

void NoonState::handle(Work &work) {
    if (work.getHour() < 13) {
        cout << work.getHour() << " 点中午" << endl;
    } else {
        work.setState(new AfternoonState);
        work.request();
    }
}

void AfternoonState::handle(Work &work) {
    if (work.getHour() < 17) {
        cout << work.getHour() << " 点下午" << endl;
    } else {
        work.setState(new EveningState);
        work.request();
    }
}

void EveningState::handle(Work &work) {
    if (work.isFinish()) {
        work.setState(new RestState);
        work.request();
    } else {
        if (work.getHour() < 21) {
            cout << work.getHour() << " 点加班" << endl;
        } else {
            work.setState(new SleepingState);
            work.request();
        }
    }
}

void SleepingState::handle(Work &work) {
    cout << work.getHour() << " 点睡觉" << endl;
}

void RestState::handle(Work &work) {
    cout << work.getHour() << " 点下班" << endl;
}

State *Work::getState() const {
    return state;
}

void Work::setState(State *state) {
    Work::state = state;
}

double Work::getHour() const {
    return hour;
}

void Work::setHour(double hour) {
    Work::hour = hour;
}

bool Work::isFinish() const {
    return finish;
}

void Work::setFinish(bool finish) {
    Work::finish = finish;
}

void Work::request() {
    state->handle(*this);
}

Work::Work() : state(new ForenoonState) {}
