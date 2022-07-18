//
// Created by Kuma on 2022/7/18.
//

#include "template_method.h"
#include <iostream>
std::string TestPaperA::answer1() {
    return "A";
}

std::string TestPaperA::answer2() {
    return "B";
}

std::string TestPaperB::answer1() {
    return "C";
}

std::string TestPaperB::answer2() {
    return "D";
}

void TestPaper::question1() {
    std::cout << "问题1。。。。" << std::endl;
    std::cout << "答案：" <<  answer1() << std::endl;
}

void TestPaper::question2() {
    std::cout << "问题2。。。。" << std::endl;
    std::cout << "答案：" <<  answer2() << std::endl;
}
