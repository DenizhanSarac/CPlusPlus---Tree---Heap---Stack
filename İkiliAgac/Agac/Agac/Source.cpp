#include <iostream>
#include <conio.h>
#include "Header.h"
using namespace std;

int main()
{
	
	Agac *myroot = NULL; 
	int i = 0; 
	do {
		cout << "\n\nAgaca veri eklemek icin sayi giriniz...\nSayi = ";
		cin >>i;
		if (i != -1) 
			myroot = insert(myroot, i); 
	} 
	while (i != -1); 
	postOrder(myroot); 
	_getch(); 
	return 0;
}