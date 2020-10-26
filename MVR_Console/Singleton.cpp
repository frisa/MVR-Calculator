#include "Singleton.h"

Singleton* Singleton::_instance = nullptr;

Singleton::Singleton()
{
}

Singleton* Singleton::getInstance()
{
    if (_instance == nullptr)
    {
        _instance = new Singleton();
    }
    return _instance;
}
