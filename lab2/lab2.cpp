#include <iostream>
#include <conio.h>
#include "Stack.cpp"
#include "Queue.cpp"
void STry()
{
	Stack<char> S;
	char word;
	S.MAKENULL();
	word = _getch();
	while (word != '=')
	{
		switch (word)
		{
		case '#':
			S.POP();
			break;
		case '@':
			S.MAKENULL();
			break;
		case '^':
			S.PUSH(S.TOP());
			break;
		default:
			S.PUSH(word);
			break;
		}
		word = _getch();
	}
	S.PRINT();
}
void QTry()
{
	Queue<char> Q;
	char word;
	Q.MAKENULL();
	word = _getch();
	while (word != '=') {
		Q.ENQUEUE(word);
		word = _getch();
	}
	Q.DEQUEUE();
	Q.DEQUEUE();
	Q.ENQUEUE('<');
	while (!Q.EMPTY())
	{
		printf("%c, ", Q.FRONT());
		Q.DEQUEUE();
	}
	printf("\n");
}
int main()


{
	STry();
	QTry();
	return 0;
}