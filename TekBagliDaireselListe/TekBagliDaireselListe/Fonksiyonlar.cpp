#include<iostream>
#include<conio.h>
#include "Header.h"
using namespace std;

struct node *baslangic = NULL;

void TYDBL_basaEkleme(int veri)
{
	if (baslangic == NULL)
	{
		baslangic = new node();
		baslangic->data = veri;
		baslangic->next = baslangic;
	}
	else
	{
		node *gecici = new node();
		node *sonuncu = baslangic;
		gecici->data = veri;
		while (sonuncu->next != baslangic)
			sonuncu = sonuncu->next;
		gecici->next = baslangic;
		sonuncu->next = gecici;
		baslangic = gecici;
	}
}

void TYDBL_sonaEkleme(int veri)
{
	if (baslangic == NULL)
	{
		baslangic = new node();
		baslangic->data = veri;
		baslangic->next = baslangic;
	}
	else
	{
		node *gecici = new node();
		gecici->data = veri;
		node *iter = baslangic;
		while (iter->next != baslangic)
			iter = iter->next;
		gecici->next = baslangic;
		iter->next = gecici;
	}
}

void printlist()
{
	if (baslangic == NULL)
		cout << "Liste Boss !!" << endl;
	else if (baslangic->next == baslangic)
	{
		cout << "1. Eleman : " << baslangic->data << endl;
	}
	else
	{
		int counter = 0;
		node *gecici = baslangic;
		while (gecici->next != baslangic)
		{
			cout << counter + 1 << ". Eleman: " << gecici->data <<endl;
			gecici = gecici->next;
			counter++;
		}
		cout << counter + 1 << ". Eleman: " << gecici->data << endl;
	}
}

void TYDBL_bastansil()
{
	if (baslangic == NULL)
		cout << "Liste Boss !!" << endl;
	else
	{
		struct node *gecici = baslangic;
		while (gecici->next != baslangic)
			gecici = gecici->next;
		struct node *gecici2 = gecici->next;
		gecici->next = gecici->next->next;
		free(gecici2);
		baslangic = gecici;
	}
}

void TYDBL_sondansil()
{
	if (baslangic == NULL)
		cout << "Liste Boss !!" << endl;
	else
	{
		struct node *gecici = baslangic;
		while (gecici->next->next != baslangic)
			gecici = gecici->next;
		node *gecici2 = gecici->next;
		gecici->next = gecici->next->next;
		free(gecici2);
		gecici->next = baslangic;
	}
}

void TYDBL_belirlisil(int gelen)
{
		if (baslangic == NULL)
		cout << "Liste Boss !!" << endl;

		struct node *gecici = baslangic;
		if (baslangic->data == gelen)
		{
			struct node *last = baslangic;
			while (last->next != baslangic)
				last = last->next;
			baslangic = baslangic->next;
			last->next = baslangic;
			free(gecici);
		}
		else if (gecici->next == baslangic)
			cout << "Silmek istediginiz veri bulunmamaktadir." << endl;
		else
		{
			while (gecici->next->data != gelen)
			{
				if (gecici->next->next == baslangic)
				{
					cout << "Silmek istediginiz veri bulunmamaktadir." << endl;
					return;
				}
				gecici = gecici->next;
			}
		}
			struct node *gecici2 = gecici->next;
			gecici->next = gecici->next->next;
			free(gecici2);
		
		

}

void TYDBL_siraliekleme(int veri)
{

	if (baslangic == NULL)
	{
		baslangic = new node();
		baslangic->next = baslangic;
		baslangic->data = veri;
		return;
	}
		
	node *gecici = baslangic; //s
	node *eklenecek = new node(); //gecici
	if (baslangic->data > veri)
	{
		eklenecek->data = veri;
		eklenecek->next = baslangic;
		while (gecici->next != baslangic)
			gecici = gecici->next;
		gecici = gecici->next;
		return;

	}
	while (gecici->next != baslangic && gecici->next->data < veri)
	{
		gecici = gecici->next;
	}

	eklenecek->next = gecici->next;
	eklenecek->data = veri;
	gecici->next = eklenecek;
	return;

}