#pragma once
#include <iostream>
template<class T>
class Stack
{
	int top = 0;
	T* elements;
	int add = 2;
public:
	void MAKENULL();
	void PUSH(T);
	T POP();
	T TOP();
	bool EMPTY();
	void PRINT();
private:
	void RenewMem();
};