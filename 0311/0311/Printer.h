#pragma once
#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

class Printer {
private :
	string Sentence;

public :
	void SetString(const string &Sentence);
	void ShowString();
};

inline void Printer::SetString(const string &stc) {
	Printer::Sentence = stc;
}

inline void Printer::ShowString() {
	cout << Printer::Sentence << endl;
}