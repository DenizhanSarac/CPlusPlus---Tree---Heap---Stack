#include <iostream>
#include <conio.h>
#include"Header.h"
using namespace std;

struct node *baslangic = NULL;
struct node *geciciDegisken;

struct node* dugumOlustur()
{
	struct node *yenidugum = (node*)malloc(sizeof(node));
	yenidugum->bironceki = NULL;
	yenidugum->birsonraki = NULL;
	return yenidugum;
}

void menu(){
	int secim;
	while (true){
		cout << "1-Basa Ekle" << endl;
		cout << "2-Sona Ekle" << endl;
		cout << "3-Araya Ekle" << endl;
		cout << "4-Bastan Sil" << endl;
		cout << "5-Sondan Sil" << endl;
		cout << "6-Aradan Sil" << endl;
		cin >> secim;
		yonlendirme(secim);
	}
}

void yonlendirme(int secim)
{


	switch (secim)
	{
	case 1:
		basaEkle();
		break;
	case 2:
		sonaEkle();
		break;
	case 3:
		arayaEkle();
		break;
	case 4:
		bastanSil();
		break;
	case 5:
		sondanSil();
		break;
	case 6:
		aradanSil();
		break;
	}

}

void basaEkle()
{
	struct node* element = dugumOlustur();
	cout << "Veriyi Gir: " << endl;
	cin >> element->veri;
	if (baslangic == NULL)
	{
		baslangic = element;
		return;
	}

	baslangic->bironceki = element;
	element->birsonraki = baslangic;
	baslangic = element;
	yazdir(); cout << endl;

}

void sonaEkle()
{

	if (baslangic == NULL)
		basaEkle();
	else
	{
		struct node* element = dugumOlustur();
		cout << "Veriyi Gir: " << endl;
		cin >> element->veri;
		geciciDegisken = baslangic;

		while (geciciDegisken->birsonraki != NULL)
			geciciDegisken = geciciDegisken->birsonraki;
		element->bironceki = geciciDegisken;
		geciciDegisken->birsonraki = element;
		yazdir(); cout << endl;
	}
}

void arayaEkle()
{
	struct node *arayaEklenecek = dugumOlustur();
	struct node *onceki = NULL;

	if (baslangic == NULL)
		basaEkle();
	else
	{

		geciciDegisken = baslangic;
		int counter = 0; int indis;
		cout << "Indis Degerini Giriniz: " << endl;
		cin >> indis;
		cout << "Veri Degerini Giriniz: " << endl;
		cin >> arayaEklenecek->veri;

		while (geciciDegisken->birsonraki != NULL)
		{
			if (counter == indis)
			{
				onceki = geciciDegisken->bironceki;
				break;
			}
			geciciDegisken = geciciDegisken->birsonraki;
			counter++;
		}
		geciciDegisken->bironceki = arayaEklenecek;
		arayaEklenecek->birsonraki = geciciDegisken;
		arayaEklenecek->bironceki = onceki;
		onceki->birsonraki = arayaEklenecek;
	}
	yazdir(); cout << endl;

}

void bastanSil()
{
	if (baslangic == NULL)
	{
		cout << "Liste Bos!!!" << endl;
		return;
	}
	else if (baslangic->birsonraki == NULL)
	{
		free(baslangic);
		baslangic = NULL;
		return;
	}
	geciciDegisken = baslangic->birsonraki;
	free(baslangic);
	geciciDegisken->bironceki = NULL;
	baslangic = geciciDegisken;

	yazdir(); cout << endl;
}

void sondanSil()
{
	if (baslangic == NULL)
	{
		cout << "Liste Boss" << endl;
		return;
	}
	else
	{
		geciciDegisken = baslangic;
		while (geciciDegisken->birsonraki != NULL)
			geciciDegisken = geciciDegisken->birsonraki;
		struct node* onceki = geciciDegisken->bironceki;
		free(geciciDegisken);
		onceki->birsonraki = NULL;
	}
	yazdir(); cout << endl;
}

void aradanSil()
{
	if (baslangic == NULL)
	{
		cout << "Liste Boss!!" << endl;
	}
	else
	{
		geciciDegisken = baslangic;
		int counter = 0; int indis;
		cout << "Indis Degerini Giriniz: " << endl;
		cin >> indis;

		while (geciciDegisken->birsonraki != NULL)
		{
			if (counter + 1 == indis)
			{
				geciciDegisken = geciciDegisken->birsonraki;
				break;

			}
			counter++;
		}
		struct node *onceki = geciciDegisken->bironceki;
		struct node *sonraki = geciciDegisken->birsonraki;
		free(geciciDegisken);
		onceki->birsonraki = sonraki;
		sonraki->bironceki = onceki;

	}

	yazdir(); cout << endl;
}



void yazdir()
{
	if (baslangic == NULL)
		cout << "Liste Bos!!!" << endl;
	else
	{
		geciciDegisken = baslangic;
		int counter = 1;
		while (geciciDegisken->birsonraki != NULL)
		{
			cout << counter << ". Veri : " << geciciDegisken->veri << endl;
			geciciDegisken = geciciDegisken->birsonraki;
			counter++;
		}
		cout << counter << ". Veri : " << geciciDegisken->veri << endl;
	}
}
