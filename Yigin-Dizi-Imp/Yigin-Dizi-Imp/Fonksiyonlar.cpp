#include <iostream>
#include <conio.h>
#include"Header.h"

using namespace std;
void reset(stack *ygt)
{
	ygt->top = -1;
}
void push(stack *ygt, int x)
{
	if (ygt->top == SIZE - 1)
	{
		cout << "Stack Dolu !! " << endl;
	}
	else
	{
		ygt->top++;
		ygt->dizi[ygt->top] = x;
		cout <<ygt->top<< ". Eklendi !! " << endl;
	}
}

int pop(stack *ygt)
{
	if (ygt->top == -1)
		cout << "Stack Boss !" << endl;
	else
	{
		int x=ygt->top--;
		return x;
	}
}

int print(stack *ygt)
{
	if (ygt->top == -1)
		cout << "Stack Boss !" << endl;
	else
		return(ygt->dizi[ygt->top]);
}


