#include<iostream>
#include<conio.h>
#include"Header.h"

using namespace std;

int main()
{
	int secim, veri,adet;
	struct node *head=new node();
	head = NULL;
	cout << "------>Tek Bagil Listeye Hosgeldiniz<-------" << endl;
	while (1)
	{
	cout << "Basa Eleman Ekleme : 1" << endl;
	cout << "Sona Eleman Ekleme : 2" << endl;
	cout << "Sirali Eleman Ekleme: 3" << endl;
	cout << "Bastan Eleman Silme: 4" << endl;
	cout << "Sondan Eleman Silme: 5" << endl;
	cout << "Belirli Eleman Silme: 6" << endl;
	cout << "Listeyi Yazdir :7 " << endl;
	cin >> secim;


	switch (secim)
	{
	case 1:
		cout << "Eklemek Istediðiniz Eleman: "; cin >> veri;
		head=TYBL_basaekle(head, veri);
		break;
	case 2:
		cout << "Eklemek Istediginiz Eleman: "; cin >> veri;
		head = TYBL_sonaekle(head, veri);
		break;
	case 3:
		cout << "Kac Tane Eleman Gireceksiniz: "; cin >> adet;
		for (int i = 0; i < adet; i++)
		{
			cout << i + 1 << ". Veriyi Giriniz: " << endl; cin >> veri;
			head=TYBL_siraliekle(head, veri);
		}
		break;
	case 4:
		head = TYBL_bastansil(head);
		break;
	case 5:
		head = TYBL_sondansil(head);
		break;
	case 6:
		cout << "Silmek Istediginiz Veri: "; cin >> veri;
		head = TYBL_belirlisil(head, veri);
		break;
	case 7:
		cout << "Liste yazdiriliyor : ";
		printlist(head);
		break;

	default:
		break;
	}
	}

	_getch();
}