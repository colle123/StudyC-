#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>
using namespace std;

template<typename T>
class Cal {

private:
	T xpos, ypos;

public:
	Cal(T x = 0, T y = 0);

	T Add(T x, T y);
	T Minus(T x, T y);
	T Multiplication(T x, T y);
	T Division(T x, T y);
};

#endif
