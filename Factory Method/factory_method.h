//
// Created by Kuma on 2022/7/12.
//

#ifndef DESIGN_PATTERN_FACTORY_METHOD_H
#define DESIGN_PATTERN_FACTORY_METHOD_H

class LeiFeng {
public:
    virtual void sweep();

    virtual void wash();

    virtual void buyRice();
};

class Undergraduate : public LeiFeng {
};

class Volunteer : public LeiFeng {
};

class IFactory {
public:
    virtual LeiFeng *createLeiFeng() = 0;
};

class UndergraduateFactory : public IFactory {
public:
    LeiFeng *createLeiFeng() override;
};

class VolunteerFactory : public IFactory {
public:
    LeiFeng *createLeiFeng() override;
};

#endif //DESIGN_PATTERN_FACTORY_METHOD_H
