//
// Created by Kuma on 2022/7/14.
//

#ifndef DESIGN_PATTERN_SINGLETON_H
#define DESIGN_PATTERN_SINGLETON_H
#include <pthread.h>
class Singleton{
public:
    static Singleton* getInstance();
private:
    Singleton(){}

    static Singleton *instance;

    static pthread_mutex_t mutex;

};
#endif //DESIGN_PATTERN_SINGLETON_H
