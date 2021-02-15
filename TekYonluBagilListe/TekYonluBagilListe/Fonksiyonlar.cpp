#include<iostream>
#include<conio.h>
#include"Header.h"

using namespace std;

void printlist(struct node *kok)
{
	if (kok == NULL)
		cout<<"Liste Bos!!" << endl;
	node *gecici = new node();
	gecici = kok;
	while (gecici != NULL)
	{
		cout << gecici->veri << " ";
		gecici = gecici->next;
	}
	cout << endl;
}


struct node *TYBL_basaekle(struct node *kok, int data)
{
		struct node *gecici = new node();
		gecici->veri = data;
		gecici->next = kok;
		kok = gecici;
		return kok;
}

struct node *TYBL_sonaekle(struct node *kok, int data)
{
	node *gecici = new node();
	gecici->veri = data;
	gecici->next = NULL;

	node *gecici2 = kok;
	while (gecici2->next != NULL)
		gecici2 = gecici2->next;
	gecici2->next = gecici;
	return kok;
}


struct node *TYBL_bastansil(struct node *kok)
{
	if (kok == NULL)
		cout << "Liste Boss" << endl;
	node *gecici = kok;
	gecici = gecici->next;
	kok = gecici;
	return kok;
}

struct node *TYBL_sondansil(struct node *kok)
{
	if (kok==NULL)
		cout << "Liste Boss" << endl;
	else if (kok->next == NULL)
	{
		kok = NULL;
		return kok;
	}
	else
	{
		node *gecici = kok;
		while (gecici->next->next != NULL)
			gecici = gecici->next;
		node *gecici2 = gecici->next;
		gecici->next = gecici->next->next;
		free(gecici2);
		return kok;
	}
}

struct node *TYBL_belirlisil(struct node *kok, int veri)
{
	if (kok == NULL)
	{
		cout << "Liste Boss!!" << endl;
		return kok;
	}
	else if (kok->veri == veri)
	{
		node *gecici = kok;
		gecici = gecici->next;
		kok = gecici;
		return kok;
	}
	else
	{
		node *gecici = kok;
		while (gecici->next->veri != veri)
			gecici = gecici->next;
		node *gecici2 = gecici->next->next;
		node *gecici3 = gecici;
		free(gecici->next);
		gecici3->next = gecici2;
		return kok;
	}
}

struct node *TYBL_siraliekle(struct node *kok, int veri)
{
	if (kok == NULL)
	{
		kok = TYBL_basaekle(kok, veri);
		return kok;
	}
	else
	{
		node *gecici = kok;
		while (gecici->veri > veri)
			gecici = gecici->next;
		node *yeni = new node();
		yeni->veri = veri;
		node *gecici1 = gecici->next;
		gecici->next = yeni;
		yeni->next = gecici1;
		return kok;
	}
}