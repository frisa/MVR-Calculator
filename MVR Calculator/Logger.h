#pragma once

ref class Logger
{
private:
	static Logger^ _instance;
	int mojecislo;
	Logger();

public:
	static Logger^ getInstance();
	void nastavMojeCislo(int cislo);
};

