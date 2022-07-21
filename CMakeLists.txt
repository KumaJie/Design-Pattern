cmake_minimum_required(VERSION 3.22)
project(Design_Pattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(Design_Pattern main.cpp "Static Factory Method/static_factory_method.cpp" "Factory Method/factory_method.cpp" "Factory Method/factory_method.h" "Static Factory Method/static_factory_method.h" "Abstract Factory/abstract_factory.cpp" "Abstract Factory/abstract_factory.h" Observer/observer.h Observer/observer.cpp Adapter/adapter.cpp Adapter/adapter.h Singleton/singleton.h Singleton/singleton.cpp Bridge/bridge.cpp Bridge/bridge.h Strategy/strategy.cpp Strategy/strategy.h Mediator/mediator.cpp Mediator/mediator.h Decorator/decorator.cpp Decorator/decorator.h Proxy/proxy.cpp Proxy/proxy.h Prototype/prototype.cpp Prototype/prototype.h "Template Method/template_method.cpp" "Template Method/template_method.h" Facade/facade.cpp Facade/facade.h Builder/builder.cpp Builder/builder.h State/state.cpp State/state.h Memento/memento.cpp Memento/memento.h Composite/composite.cpp Composite/composite.h Command/command.cpp Command/command.h)
