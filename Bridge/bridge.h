//
// Created by Kuma on 2022/7/14.
//

#ifndef DESIGN_PATTERN_BRIDGE_H
#define DESIGN_PATTERN_BRIDGE_H

class HandsetSoft {
public:
    virtual void run() = 0;
};

class HandsetGame : public HandsetSoft {
public:
    void run() override;
};

class HandsetAddressList : public HandsetSoft {
public:
    void run() override;
};

class HandsetBrand {
protected:
    HandsetSoft *soft;
public:

    virtual void run();

    virtual ~HandsetBrand();

    void setSoft(HandsetSoft *soft);
};

class Apple : public HandsetBrand {
};

class Samsung : public HandsetBrand {
};

#endif //DESIGN_PATTERN_BRIDGE_H
