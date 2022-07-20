//
// Created by Kuma on 2022/7/19.
//

#ifndef DESIGN_PATTERN_BUILDER_H
#define DESIGN_PATTERN_BUILDER_H
class PersonBuilder{
public:
    virtual void buildHead() = 0;

    virtual void buildBody() = 0;

    virtual void buildLeg() = 0;
};

class PersonThinBuilder : public PersonBuilder{
public:
    void buildHead() override;

    void buildBody() override;

    void buildLeg() override;
};

class PersonFatBuilder : public PersonBuilder{
public:
    void buildHead() override;

    void buildBody() override;

    void buildLeg() override;
};

class PersonDirector{
public:
    PersonDirector(PersonBuilder *pb);

    void createPerson();

private:
    PersonBuilder *pb;
};
#endif //DESIGN_PATTERN_BUILDER_H
