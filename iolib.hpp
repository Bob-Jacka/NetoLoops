#pragma once 

#include <iostream>

using namespace std;

void println(string str = "") {
	cout << str << endl;
}

template <typename T>
void print(T str) {
	cout << str;
}

/*
Writes down int value into variable
*/
void intUserInput(int &variableAddress) {
	cin >> variableAddress;
}

/*
Writes down string value into variable
*/
void stringUserInput(string &variableAddress) {
	cin >> variableAddress;
}