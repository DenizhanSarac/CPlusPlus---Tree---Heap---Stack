#include <iostream>
#include <conio.h>
#include"Header.h"

using namespace std;
int main()
{
	stack *ygt = new stack();
	reset(ygt);
	
	push(ygt, 5);
	push(ygt, 20);
	push(ygt, 58);
	push(ygt, 13);

	int x;
	x = pop(ygt);
	cout << x << ".Silindi!"<<endl;

	x = print(ygt);
	cout << x << " Son Veri.." << endl;
	_getch();

}