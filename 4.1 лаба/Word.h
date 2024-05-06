#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class Word
{
	char* W;
	int size;
	const char* alphabet = "abcdefghijklmnopqrstuvwxyz";
public:
	Word();
	Word(char* slovo);
	Word(int n, char p);
	Word(int n, char* p);
	Word(char* p, int n);
	Word(const Word& slovo);
	Word(Word&& slovo) noexcept;
	~Word();
	void setData();
	void showData();
	void remake();

};