//
// Created by Kuma on 2022/7/18.
//

#ifndef DESIGN_PATTERN_TEMPLATE_METHOD_H
#define DESIGN_PATTERN_TEMPLATE_METHOD_H

#include <string>

class TestPaper{
public:
    void question1();

    void question2();
protected:
    virtual std::string answer1() = 0;

    virtual std::string answer2() = 0;
};

class TestPaperA : public TestPaper{
protected:
    std::string answer1() override;

    std::string answer2() override;
};

class TestPaperB : public TestPaper{
protected:
    std::string answer1() override;

    std::string answer2() override;
};
#endif //DESIGN_PATTERN_TEMPLATE_METHOD_H
