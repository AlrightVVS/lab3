#include "Stack.h"
using namespace std;
template<class T>
void Stack<T>::MAKENULL()
{
	if (elements != nullptr)
		delete[]elements;


	elements = nullptr;
}
template<class T>
void Stack<T>::PUSH(T element)
{
	if (elements == nullptr)
		RenewMem();
	if (top == add)
		RenewMem();
	elements[top] = element;
	top++;
}
template<class T>
T Stack<T>::POP()
{
	T element = top - 1 >= 0 ? elements[top - 1] : NULL;
	if (top - 1 >= 0)
		elements[--top] = NULL;
	return element;
}
template<class T>
T Stack<T>::TOP()
{
	return top - 1 >= 0 ? elements[top - 1] : NULL;
}
template<class T>
bool Stack<T>::EMPTY()
{
	return elements == nullptr || top == 0;
}
template<class T>
void Stack<T>::PRINT()
{
	for (int i = 0; i < top; i++)
		cout << elements[i] << ' ';
}
template<class T>
void Stack<T>::RenewMem()
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
