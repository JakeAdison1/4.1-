#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Word.h"

using namespace std;

 Word::Word()//конструктор без параметров
{
	W = nullptr;
	size = 0;
}

Word::Word(char* slovo) { //конструктор с параметром
	W = slovo;
	size = strlen(slovo);

}
Word::Word(int n, char p) {
	size = n;
	W = new char[n + 1];
	for (int i = 0; i < n; i++) {
		W[i] = p;
	}
	W[n] = '\0';
}
Word::Word(int n, char* p) {
	if (n > strlen(p)) {
		W = p;
	}
	else {
		W = new char[n + 1];
		for (int i = 0; i < n; i++) {
			W[i] = p[i];
		}
		W[n] = '\0';
	}
}
Word::Word(char* p, int n) {
	if (n > strlen(p)) {
		W = p;
	}
	else {
		W = new char[n + 1];
		for (int i = 0; i < n; i++) {
			W[i] = p[strlen(p) - n + 1];
		}
		W[n] = '\0';
	}
}

Word::Word(const Word& slovo) {
	cout << "Конструктор копирования" << endl;
	W = slovo.W;
	size = slovo.size;
}
Word::Word( Word&& slovo) noexcept
{
	cout << "Конструктор преермещения" << endl;
	size = slovo.size;
	W = slovo.W;
	slovo.W = nullptr;
	slovo.size = 0;
}
Word::~Word() {
	cout << "Destrucor is working";
	delete W;
	W = nullptr;
}
void Word::setData() {
	
	char word[100];
	cin.getline(word, 100);
	W = new char[strlen(word) + 1];
	for (int i = 0; i < strlen(word); i++) {
		W[i] = word[i];
	}
	W[strlen(word)] = '\0';
	size = strlen(W);
}
void Word::showData() {
	if (W == nullptr) {
		cout << "error";
	}
	else
		cout << W;
}

void Word::remake()
{
	int counter = 0;
	int value;
	for (int i = 0; i < size; i++)
	{
		if (static_cast<int>(W[i]) >= 97)
		{
			value = static_cast<int>(W[i]) - 96;
			while (value != 0)
			{
				value = value / 10;
				counter++;
			}

		}
	}

	char* str = new char[strlen(W) + counter + 1];
	int part_value;
	counter = 0;
	int j;
	int k;
	for (int i = 0; i < size; i++)
	{
		j = 0;
		if (static_cast<int>(W[i]) >=97)
		{
			value = static_cast<int>(W[i]) - 96;
			while (value != 0)
			{
				value = value / 10;
				j++;
			}
			k = j;
			value = static_cast<int>(W[i]) - 96;
			while (value != 0)
			{
				part_value = value % 10;
				value = value / 10;
				str[--j + counter] = static_cast<char>(part_value + 48);
			}

			counter = counter + k;
		}
		else
		{
			str[counter++] = W[i];
		}
	}

	str[counter] = '\0';

	delete[] W;

	W = &str[0];
}