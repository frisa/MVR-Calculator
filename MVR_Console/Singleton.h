#include <iostream>

#pragma once
class Singleton
{
private:
	Singleton();
	static Singleton* _instance;
public:
	static Singleton* getInstance();
	void napisNeco();
};

