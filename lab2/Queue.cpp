#include "Queue.h"
template<class T>
void Queue<T>::MAKENULL()
{
	if (elements != nullptr)
		delete[]elements;
	elements = nullptr;
}
template<class T>
void Queue<T>::ENQUEUE(T element)
{
	if (elements == nullptr)
		RenewMem();
	if (rear == add)
		RenewMem();
	elements[rear] = element;
	rear++;
}
template<class T>
T Queue<T>::DEQUEUE()
{
	T element = front != rear ? elements[front] : NULL;
	if (front != rear) {
		DelFirstAndRenew();
		rear--;
	}
	return element;
}
template<class T>
T Queue<T>::FRONT()
{
	return !EMPTY() ? elements[front] : NULL;
}
template<class T>
bool Queue<T>::EMPTY()
{
	return elements == nullptr || front == rear;
}
template<class T>
void Queue<T>::PRINT()
{
	for (int i = 0; i < rear; i++)
		std::cout << elements[i] << ' ';
}


template<class T>
void Queue<T>::DelFirstAndRenew()
{
	T* temp = new T[add];
	for (int i = 0, j = 1; j < add; i++, j++)
		temp[i] = elements[j];
	MAKENULL();
	elements = temp;
}
template<class T>
void Queue<T>::RenewMem()
{
	if (elements == nullptr)
		elements = new T[add];
	else
	{
		T* temp = new T[add * 2];
		for (int i = 0; i < add; i++)
			temp[i] = elements[i];
		MAKENULL();
		elements = temp;
		add *= 2;
	}
}
