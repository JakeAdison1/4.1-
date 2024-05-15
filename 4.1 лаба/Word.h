#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class Word
{
	char* W;
	int size;
public:
	Word();
	Word(const char* P);
	Word(const char S, int n);
	Word(const char* S, int n);
	Word(const Word& slovo);
	Word(Word&& slovo) noexcept;
	~Word();

	void setData();
	void showData();
	void remake();

};