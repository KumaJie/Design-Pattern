//
// Created by Kuma on 2022/7/14.
//
#include "singleton.h"

Singleton *Singleton::instance = nullptr;

pthread_mutex_t Singleton::mutex;

Singleton *Singleton::getInstance() {
//    双重锁定，确保只有一个实例
    if (instance == nullptr) {
        pthread_mutex_lock(&mutex);
        if (instance == nullptr) {
            instance = new Singleton;
        }
        pthread_mutex_unlock(&mutex);
    }
    return instance;
}

