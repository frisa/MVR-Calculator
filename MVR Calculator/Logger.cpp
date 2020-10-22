#include "Logger.h"

Logger::Logger()
{
    this->mojecislo = 99;
}

Logger^ Logger::getInstance()
{
    if (_instance == nullptr)
    {
        _instance = gcnew Logger();
    }
    return _instance;
}

void Logger::nastavMojeCislo(int cislo)
{
    this->mojecislo = cislo;
}

