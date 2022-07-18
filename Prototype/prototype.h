//
// Created by Kuma on 2022/7/18.
//

#ifndef DESIGN_PATTERN_PROTOTYPE_H
#define DESIGN_PATTERN_PROTOTYPE_H

#include <string>

class WorkExperience {
public:
    const std::string &getWorkDate() const;

    void setWorkDate(const std::string &workDate);

    WorkExperience *clone();

private:
    std::string workDate;
};

class Resume {
public:
    Resume(const std::string &name, const std::string &sex);

    void display();

    void setWorkExperience(WorkExperience *workExperience);

    Resume *clone();
private:
    std::string name;
    std::string sex;
    WorkExperience *workExperience;

};


#endif //DESIGN_PATTERN_PROTOTYPE_H
