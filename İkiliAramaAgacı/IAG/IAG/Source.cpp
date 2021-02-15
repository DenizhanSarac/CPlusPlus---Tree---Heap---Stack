#include <iostream>
#include <conio.h>
#include "Header.h"
using namespace std;

int main()
{
	int secim, veri, a = 0;
	dugum *kok = NULL;
	struct dugum *gelen;
	while (true)
	{
		cout << "<-------------Hosgeldiniz---------------->" << endl;
		cout << "Eleman Ekle       -> 1" << endl;
		cout << "Eleman Sil        -> 2" << endl;
		cout << "Arama             -> 3" << endl;
		cout << "Agaci Yazdir      -> 4" << endl;
		cout << "En Buyuk Eleman   -> 5" << endl;
		cout << "En Kucuk Eleman   -> 6" << endl;
		cout << "Uygulamayi Kapat  -> 7" << endl;
		cin >> secim;
		switch (secim)
		{
		case 1:
			cout << "Eleman Degerini Giriniz: " << endl;
			cin >> veri;
			kok = elemanEkle(veri, kok);
			break;
		case 2:
			cout << "Silinecek Elemani Giriniz: " << endl;
			cin >> veri;
			kok = elemanSil(veri, kok);
			break;
		case 3:
			cout << "Aranan Degeri Giriniz: " << endl;
			cin >> veri;
			gelen = elemanAra(veri, kok);
			if (!gelen)
				cout << "Eleman Bulunamadi.." << endl;
			else
				cout << "Eleman Bulundu..." << endl;
			break;
		case 4:
			cout << "Agac Yazdiriliyor..." << endl;
			agacYazdir(kok);
			break;
		case 5:
			veri = enBuyukBul(kok);
			cout << "Agactaki En Buyuk Deger : " << veri << endl;
			break;
		case 6:
			veri = enKucukBul(kok);
			cout << "Agactaki En Kucuk Deger : " << veri << endl;
			break;
		case 7:
			system("cls");
			free(kok);
			exit(0);
			break;
		default:
			break;
		}

	}

}