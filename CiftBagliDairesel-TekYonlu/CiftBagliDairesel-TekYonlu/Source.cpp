#include<iostream>
#include<conio.h>
#include"Header.h"
using namespace std;

int main()
{
	int secim, veri, sayi;

	while (true)
	{
		cout << "----------->Panele Hosgeldiniz <----------" << endl;
		cout << "Tek Yonlu Bagil Liste           -> 1 " << endl;
		cout << "Cift Yonlu Dairesel Bagli Liste -> 2 " << endl;
		cout << "Uygulamayi Kapat                -> 3 " << endl;
		cin >> secim;
		switch (secim)
		{
		case 1:
			system("cls");
			while (true)
			{
				cout << "<------Tek Yonlu Bagil Liste--------->" << endl;
				cout << "Basa Eleman Ekle   -> 1 " << endl;
				cout << "Sona Eleman Ekle   -> 2 " << endl;
				cout << "Sirali Eleman Ekle -> 3 " << endl;
				cout << "Bastan Eleman Sil  -> 4 " << endl;
				cout << "Sondan Eleman Sil  -> 5 " << endl;
				cout << "Belirli Eleman Sil -> 6 " << endl;
				cout << "Menuye Don         -> 7 " << endl;

				cin >> secim;
				switch (secim)
				{
				case 1:
					cout << "Girmek Istediginiz Elemani Giriniz" << endl;
					cin >> veri;
					TYBL_basaelemanekle(veri);
					break;
				case 2:
					cout << "Girmek Istediginiz Elemani Giriniz" << endl;
					cin >> veri;
					TYBL_sonaelemanekle(veri);
					break;
				case 3:
					cout << "Kac Tane Eleman Gireceksiniz : " << endl;
					cin >> sayi;
					for (int i = 0; i < sayi; i++)
					{
						cout << i + 1 << ". girmek Istediginiz Elemani Giriniz" << endl;
						cin >> veri;
						TYBL_siralielemanekle(veri);
					}
					yazdir(); cout << endl;
					break;
				case 4:
					TYBL_bastanelemansilme();
					break;
				case 5:
					TYBL_sondanelemansilme();
					break;
				case 6:
					cout << "Silmek Istediginiz Veriyi Giriniz: " << endl;
					cin >> veri;
					TYBL_belirlielemansilme(veri);
					break;
				case 7:
					system("cls");
					C_bellek_Temizle();
					main();
					break;

				default:
					break;
				}
			}
			break;
		case 2:
			system("cls");
			while (true)
			{
				cout << "<------Cift Yonlu Dairesel Bagil Liste--------->" << endl;
				cout << "Basa Eleman Ekle   -> 1 " << endl;
				cout << "Sona Eleman Ekle   -> 2 " << endl;
				cout << "Sirali Eleman Ekle -> 3 " << endl;
				cout << "Bastan Eleman Sil  -> 4 " << endl;
				cout << "Sondan Eleman Sil  -> 5 " << endl;
				cout << "Belirli Eleman Sil -> 6 " << endl;
				cout << "Menuye Don         -> 7 " << endl;
				cin >> secim;
				switch (secim)
				{
				case 1:
					cout << "Girmek Istediginiz Elemani Giriniz: ";
					cin >> veri;
					CYDBL_basaelemanekle(veri);
					yazdircift(); cout << endl;
					break;
				case 2:
					cout << "Girmek Istediginiz Elemani Giriniz: ";
					cin >> veri;
					CYDBL_sonaelemanekle(veri);
					yazdircift(); cout << endl;
					break;
				case 3:
					cout << "Girmek Istediginiz Eleman Sayisini Giriniz: ";
					cin >> sayi;
					for (int i = 0; i < sayi; i++)
					{
						cout << "Girmek Istediginiz Elemani Giriniz: ";
						cin >> veri;
						CYDBL_siralielemanekle(veri);
					}
					break;
				case 4:
					cout << endl;
					CYDBL_bastanelemansilme();
					break;
				case 5:
					cout << endl;
					CYDBL_sondanelemansilme();
					break;
				case 6:
					cout << "Silmek Istediginiz Elemani Giriniz: ";
					cin >> veri;
					CYDBL_belirlielemansilme(veri);
					break;
				case 7:
					system("cls");
					C_bellek_Temizle();
					main();
					break;
				default:
					break;
				}
			}
			break;
		case 3:
			C_bellek_Temizle();
			exit(0);
		default:
			break;
		}
	}

}