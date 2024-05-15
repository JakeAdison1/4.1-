#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Word.h"

using namespace std;




int main()
{ 
	setlocale(LC_ALL, "RU");
	cout << "Конструктор без параметров:\n";
	Word map1;
	map1.setData();
	map1.remake();
	map1.showData();
	cout << endl << endl;


	cout << "Работа конструкторов:\n";
	Word A;
	Word B(A);
	B.setData();
	B.remake();
	B.showData();
	cout << endl<< endl;
	
	Word C;
	Word D = move(C);
	D.setData();
	D.remake();
	D.showData();
	cout << endl << endl;

	cout << "Вызов конструкторов:\n";
	cout << "инициализации слова заданным словом-инициализатором"<<endl;
	Word E("Dad");
	E.showData();
	cout << endl << endl;

	cout << "инициализации слова заданным количеством повторов заданного символа" << endl;
	Word F('s',5);
	F.showData();
	cout << endl << endl;

	cout << "инициализации слова частью заданного слова-инициализатора (первые n символов)" << endl;
	Word G("Dadaaaaaaaaaaaa", 5);
	G.showData();
	cout << endl << endl;



	return 0;
}
