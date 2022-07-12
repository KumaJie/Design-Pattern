//
// Created by Kuma on 2022/7/12.
//

#include "factory_method.h"
#include <iostream>
#include <string>

using namespace std;
void LeiFeng::sweep() {
    cout << "sweep!" << endl;
}

void LeiFeng::wash() {
    cout << "wash!" << endl;
}

void LeiFeng::buyRice() {
    cout << "buyRice!" << endl;
}


LeiFeng *UndergraduateFactory::createLeiFeng() {
    return new Undergraduate;
}

LeiFeng *VolunteerFactory::createLeiFeng() {
    return new Volunteer;
}
