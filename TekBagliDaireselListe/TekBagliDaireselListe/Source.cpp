#include<iostream>
#include<conio.h>
#include "Header.h"
using namespace std;

int main()
{

	int secim, veri, adet;
	cout << "------> Tek Yonlu Dairesel Bagli Liste <------" << endl;
	while (1)
	{
		cout << "Basa Eleman Ekleme   : 1 " << endl; 
		cout << "Sona Eleman Ekleme   : 2" << endl;
		cout << "Sirali Eleman Ekleme : 3" << endl;
		cout << "Bastan Eleman Sil    : 4" << endl;
		cout << "Sondan Eleman Sil    : 5" << endl;
		cout << "Belirli Eleman Sil   : 6" << endl;
		cout << "Listeyi Yazdir       : 7" << endl;
		cin >> secim;

		switch (secim)
		{
		case 1:
			cout << "Veriyi Giriniz: "; cin >> veri;
			TYDBL_basaEkleme(veri);
			break;
		case 2:
			cout << "Veriyi Giriniz: "; cin >> veri;
			TYDBL_sonaEkleme(veri);
			break;
		case 3:
			cout << "Kac Tane Veri Gireceksiniz: "; cin >> adet;
			for (int i = 0; i < adet; i++)
			{
				cout <<i+1<< ".Veriyi Giriniz: "; cin >> veri;
				TYDBL_siraliekleme(veri);
			}
			break;
		case 4:
			TYDBL_bastansil();
			break;
		case 5:
			TYDBL_sondansil();
			break;
		case 6:
			cout << "Silinecek Veriyi Giriniz: "; cin >> veri;
			TYDBL_belirlisil(veri);
			break;
		case 7:
			cout << "Liste Yazdiriliyor... " << endl; 
			printlist();
			break;
		default:
			break;
		}
	}
}