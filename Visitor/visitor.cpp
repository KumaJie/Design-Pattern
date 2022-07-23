//
// Created by Kuma on 2022/7/23.
//

#include "visitor.h"

void Man::accept(Action *visitor) {
    visitor->getManConclusion(*this);
}

void Woman::accept(Action *visitor) {
    visitor->getWomanConclusion(*this);
}

void Success::getManConclusion(Man man) {

}

void Success::getWomanConclusion(Woman woman) {

}

void Fail::getManConclusion(Man man) {

}

void Fail::getWomanConclusion(Woman woman) {

}
