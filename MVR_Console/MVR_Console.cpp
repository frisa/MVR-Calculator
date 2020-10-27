#include <iostream>
#include <memory>
#include <algorithm>
#include "CommonClass.h"
#include <memory>
#include "Singleton.h"


using namespace std;

class interfaceTrida // interface
{
public:
	virtual int dejObsah() = 0; // pure virtual
	virtual int dejObvod() = 0; // pure virtual
};

class implementaciAT : public interfaceTrida
{
	virtual int dejObsah()
	{
		return 0;
	}

	virtual int dejObvod()
	{
		return 0;
	}
};

class GrafickyObjekt
{
private:
	int obsah;
public:
	virtual int dejObsah() = 0;
};

class Kruh : public GrafickyObjekt
{
	int r = 5;
public:
	virtual int dejObsah()
	{
		return 3.15 * r * r;
	}
	static int vypocitejMiObsahZParametru(int r) 
	{
		return 3.15 * r * r;
	}
};

class Obdelnik : public GrafickyObjekt
{
	int h = 5;
	int w = 10;
public:
	virtual int dejObsah()
	{
		return h*w;
	}
};


int main()
{
	Singleton::getInstance()->napisNeco();


	int obseah = Kruh::vypocitejMiObsahZParametru(5);
	
	interfaceTrida* at;
	at = new implementaciAT();
	at->dejObsah();


	GrafickyObjekt* gobjekt;

	cout << "velikost v pameti obdelniku: " << sizeof(Obdelnik) << "[B]" << endl;

	gobjekt = new Kruh();
	cout << gobjekt->dejObsah() << endl;
	delete gobjekt;

	//gobjekt = new Obdelnik();
	//cout << gobjekt->dejObsah() << endl;
	//delete gobjekt;

	Obdelnik* zrout;
	unique_ptr<Obdelnik> szrout = make_unique<Obdelnik>();

	for (int i = 0; i < 10000000; i++)
	{
		{
			//zrout = new Obdelnik();
			unique_ptr<Obdelnik> szrout = make_unique<Obdelnik>();
		}
	}
}
