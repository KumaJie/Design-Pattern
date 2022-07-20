//
// Created by Kuma on 2022/7/20.
//

#include "memento.h"
#include <iostream>

using namespace std;

Memento::Memento(int vit, int atk, int def) : vit(vit), atk(atk), def(def) {}

int Memento::getVit() const {
    return vit;
}

void Memento::setVit(int vit) {
    Memento::vit = vit;
}

int Memento::getAtk() const {
    return atk;
}

void Memento::setAtk(int atk) {
    Memento::atk = atk;
}

int Memento::getDef() const {
    return def;
}

void Memento::setDef(int def) {
    Memento::def = def;
}

Memento *GameRole::save() {
    return new Memento(vit, atk, def);
}

void GameRole::recovery(Memento *memento) {
    vit = memento->getVit();
    atk = memento->getAtk();
    def = memento->getDef();
}

void GameRole::show() {
    cout << "角色状态" << endl;
    cout << "vit:" << vit << endl;
    cout << "atk:" << atk << endl;
    cout << "def:" << def << endl;
}

GameRole::GameRole() : vit(100), atk(100), def(100){}

void GameRole::fight() {
    vit = 0;
    atk = 0;
    def = 0;
}

Memento *Caretaker::getMemento() const {
    return memento;
}

void Caretaker::setMemento(Memento *memento) {
    Caretaker::memento = memento;
}
