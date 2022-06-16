#pragma once
#include <iostream>
template<class T>
class Queue
{
	int front = 0;
	int rear = 0;
	T* elements;
	int add = 2;
public:
	void MAKENULL();
	void ENQUEUE(T element);
	T DEQUEUE();
	T FRONT();
	bool EMPTY();
	void PRINT();
private:
	void DelFirstAndRenew();
	void RenewMem();
};
