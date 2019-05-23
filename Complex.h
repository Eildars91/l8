#pragma once
#include<iostream>
#include<string>
#include <cmath>
using namespace std;

class Comp {
public:
	float imz, rez, ab, arg;
	Comp() {
		imz = 0;
		rez = 0;
		ab = 0;
		arg = 0;
	}
	friend ostream& operator<<(ostream& out, Comp& c) {
		out << "Модуль комплексного числа " << c.ab << endl;
		out << "Аргумент комплексного числа " << c.arg << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Comp& c) {
		cout << "Введите действительную ось числа: ";
		in >> c.rez;
		cout << "Введите мнимую ось числа: ";
		in >> c.imz;
		c.ab = sqrt(c.rez * c.rez + c.imz * c.imz);
		c.arg = atan(c.imz / c.rez);
		return in;
	}
	Comp & operator=(Comp & c1) {
		if (this == &c1)
			return *this;
		rez = c1.rez;
		imz = c1.imz;
		ab = c1.ab;
		arg = c1.arg;
		return *this;
	}
};
