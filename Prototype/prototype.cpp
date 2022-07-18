//
// Created by Kuma on 2022/7/18.
//

#include "prototype.h"
#include <iostream>

const std::string &WorkExperience::getWorkDate() const {
    return workDate;
}

void WorkExperience::setWorkDate(const std::string &workDate) {
    WorkExperience::workDate = workDate;
}

WorkExperience *WorkExperience::clone() {
    auto *newWorkExperience = new WorkExperience;
    newWorkExperience->setWorkDate(workDate);
    return newWorkExperience;
}

Resume::Resume(const std::string &name, const std::string &sex) : name(name), sex(sex) {}

void Resume::setWorkExperience(WorkExperience *workExperience) {
    Resume::workExperience = workExperience;
}

Resume *Resume::clone() {
    auto *newResume = new Resume(name, sex);
    newResume->setWorkExperience(workExperience->clone());
    return newResume;
}

void Resume::display() {
    std::cout << name << " " << sex << std::endl;
    std::cout << "工作经历 " << workExperience->getWorkDate() << std::endl;
}
