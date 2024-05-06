#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Word.h"

using namespace std;




int main()
{ 
	setlocale(LC_ALL, "RU");
	Word map1;
	map1.setData();
	map1.remake();
	map1.showData();
	cout << endl;




	
	return 0;
}
