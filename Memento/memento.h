//
// Created by Kuma on 2022/7/20.
//

#ifndef DESIGN_PATTERN_MEMENTO_H
#define DESIGN_PATTERN_MEMENTO_H

class Memento{
public:
    Memento(int vit, int atk, int def);

    int getVit() const;

    void setVit(int vit);

    int getAtk() const;

    void setAtk(int atk);

    int getDef() const;

    void setDef(int def);

private:
    int vit;
    int atk;
    int def;
};

class GameRole{
public:
    GameRole();

    void fight();

    Memento *save();

    void recovery(Memento *memento);

    void show();
private:
    int vit;
    int atk;
    int def;
};

class Caretaker{
public:
    Memento *getMemento() const;

    void setMemento(Memento *memento);

private:
    Memento *memento;
};
#endif //DESIGN_PATTERN_MEMENTO_H
