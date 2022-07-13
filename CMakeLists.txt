cmake_minimum_required(VERSION 3.22)
project(Design_Pattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(Design_Pattern main.cpp "Static Factory Method/static_factory_method.cpp" "Factory Method/factory_method.cpp" "Factory Method/factory_method.h" "Static Factory Method/static_factory_method.h" "Abstract Factory/abstract_factory.cpp" "Abstract Factory/abstract_factory.h" Observer/observer.h Observer/observer.cpp Adapter/adapter.cpp Adapter/adapter.h)
