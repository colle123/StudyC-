#include "Calculator.h"

template <typename T>
Cal<T>::Cal(T x, T y) : xpos(x), ypos(y) { }

template <typename T>
T Cal<T>::Add(T num1, T num2) {

	return num1 + num2;
}

template<typename T>
T Cal<T>::Minus(T num1, T num2) {

	return num1 - num2;
}

template<typename T>
T Cal<T>::Multiplication(T num1, T num2) {

	return num1 * num2;
}

template<typename T>
T Cal<T>::Division(T num1, T num2) {

	return num1 / num2;
}