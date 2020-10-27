#include <iostream>
#include <memory>
#include <algorithm>
#include "CommonClass.h"


using namespace std;

#define HELLO "Hello"


int main()
{
	int var = 123;
	int* pvar;
	int& rvar = var;
	pvar = &var;

	cout << var << endl;
	cout << pvar << endl;
	cout << "??=" << endl;





	for (int i = 0; i < 2000000000; i++)
	{
		std::cout << i << " -> ";
		CommonClass* cc = new CommonClass();
		delete cc;

		{
			std::unique_ptr<CommonClass> ucc = std::make_unique<CommonClass>();
			std::unique_ptr<CommonClass> ucc2 = std::move(ucc);
			std::unique_ptr<CommonClass[]> ucca = std::make_unique<CommonClass[]>(2);
			
			std::unique_ptr<CommonClass> arr[10];
			std::generate(
				std::begin(arr), 
				std::end(arr), 
				[]() {return std::make_unique<CommonClass>(); }
			);
		}

		{
			std::shared_ptr<CommonClass> scc = std::make_shared<CommonClass>();
			std::shared_ptr<CommonClass> scc2 = scc;
			
		}
	}
}
