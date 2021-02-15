#include <iostream>
#include <stdbool.h>
#include <conio.h>
#include "Header.h"

using namespace std;

int main()
{
	kuyruk *y = (kuyruk*)malloc(sizeof(kuyruk));
	degerBaslangic(y);
	int secim, deger;

	while (1)
	{
		cout << "Eleman Ekle:      1" << endl;
		cout << "Eleman Sil:       2" << endl;
		cout << "Kuyrugu Yazdir:   3" << endl;
		cin >> secim;
		switch (secim)
		{
		case 1:
			cout << "Veriyi Giriniz: "; cin >> deger;
			elemanekle(y, deger);
			break;
		case 2:
			elemansilme(y);
			break;
		case 3:
			elemanyazdir(y);
			break;
		default:
			cout << "Yanlis Secim !!" << endl;
			break;
		}
	}
}
