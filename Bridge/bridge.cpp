//
// Created by Kuma on 2022/7/14.
//

#include "bridge.h"
#include <iostream>
void HandsetGame::run() {
    std::cout << "运行手机游戏！" << std::endl;
}

void HandsetAddressList::run() {
    std::cout << "运行手机通讯录！" << std::endl;
}

void HandsetBrand::setSoft(HandsetSoft *soft) {
    this->soft = soft;
}

void HandsetBrand::run() {
    this->soft->run();
}

HandsetBrand::~HandsetBrand() {
    delete soft;
}
