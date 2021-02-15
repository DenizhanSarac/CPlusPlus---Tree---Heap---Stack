#include <iostream>
#include <conio.h>
#include <stdbool.h>
#include "Header.h"

using namespace std;

bool isEmpty(stack *ygt)
{
	return(ygt->cnt == 0);
}
bool isFull(stack *ygt)
{
	return(ygt->cnt == STACK_SIZE);
}

void push(stack *ygt, int x)
{
	if (!isFull(ygt))
	{
		struct node *gecici = (struct node*)malloc(sizeof(struct node));
		gecici->data = x;
		gecici->next = ygt->top;
		ygt->top = gecici;
		ygt->cnt++;
		cout << x << ". Eklendi." << endl;
	}
	else
		cout << "Yigin Dolu !!" << endl;
}

int pop(stack *ygt)
{
	if (!isEmpty(ygt))
	{
		struct node *gecici = ygt->top;
		ygt->top = ygt->top->next;
		int x = gecici->data;
		free(gecici);
		ygt->cnt--;
		return x;
	}
	else
		cout << "Liste Bos !!" << endl;
}

int top(stack *ygt)
{
	if (!isEmpty(ygt))
		return(ygt->top->data);
	else
		cout << "Liste Bos !!" << endl;
}