#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;


int main()
{
	int n;
	struct avl *kok = NULL;
	int dizi[] = { 60, 45, 30, 90, 120 };
	n = sizeof(dizi) / sizeof(dizi[0]);
	Heap *H_kok = heap_Olustur(n);
	int secim;
	cout << "Dizi: ";
	for (int x : dizi)
		cout << x << " ";
	cout << endl;
	while (true)
	{
		cout << "Diziyi AVL Agacina Eklemek Icin --> 1" << endl;
		cout << "Diziyi Heap'a Eklemek Icin      --> 2" << endl;
		cout << "Uygulamayi Kapat                --> 3" << endl;
		cin >> secim;
		switch (secim)
		{
		case 1:
			for (int i = 0; i < n; i++)
				kok = AVL_Ekle(kok, dizi[i]);
			cout << "-----------> AVL Yazdirma <-------------------" << endl;
			AVL_yazdir(kok);
			cout << endl;
			break;
		case 2:
			for (int i = 0; i < n; i++)
				H_Ekle(H_kok, dizi[i]);

			H_yazdir(H_kok);
			break;
		case 3:
			free(H_kok);
			free(kok);
			exit(0);
		default:
			break;
		}


	}
	_getch();
}