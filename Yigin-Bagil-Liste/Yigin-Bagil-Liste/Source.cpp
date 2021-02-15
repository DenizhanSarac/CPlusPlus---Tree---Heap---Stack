#include <iostream>
#include <conio.h>
#include <stdbool.h>
#include "Header.h"

using namespace std;

int main()
{
	stack *yigin = new stack();
	push(yigin, 15);
	push(yigin, 2);
	push(yigin, 44);
	push(yigin, 1);

	int x;
	x = pop(yigin);
	cout << x << " Silindi." << endl;
	x = pop(yigin);
	cout << x << " Silindi." << endl;

	x = top(yigin);
	cout << "En Usteki Veri: " << x << endl;
	_getch();
}