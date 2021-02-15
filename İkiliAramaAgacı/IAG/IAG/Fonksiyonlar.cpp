#include <iostream>
#include <conio.h>
#include "Header.h"
using namespace std;

void agacYazdir(struct dugum* kok);
int enBuyukBul(struct dugum *kok);
int enKucukBul(struct dugum *kok);
struct dugum *kokOlustur(int gelen)
{
	struct dugum *yeni = (dugum*)malloc(sizeof(dugum));
	yeni->sag = yeni->sol = NULL;
	yeni->veri = gelen;
	return yeni;
}

struct dugum *elemanEkle(int gelen, struct dugum *kok)
{
	if (kok == NULL)
		return kokOlustur(gelen);

	if (kok->veri < gelen)
		kok->sag = elemanEkle(gelen, kok->sag);
	else
		kok->sol = elemanEkle(gelen, kok->sol);

	return kok;
}

struct dugum * elemanSil(int silinecek, struct dugum* kok)
{
	if (kok == NULL)
	{
		cout << "Silinecek Eleman Yoktur!!" << endl;
		return NULL;
	}

	if (kok->veri> silinecek)
	{
		kok->sol = elemanSil(silinecek, kok->sol);
		return kok;
	}
	else if (kok->veri < silinecek)
	{
		kok->sag = elemanSil(silinecek, kok->sag);
		return kok;
	}

	if (kok->sag == NULL)
	{
		struct dugum *gecici = kok->sol;
		delete kok;
		return gecici;
	}
	else if (kok->sol == NULL)
	{
		struct dugum *gecici = kok->sag;
		delete kok;
		return gecici;
	}
	else
	{
		struct dugum *tepe = kok;
		struct dugum *gecici1 = kok->sag;
		while (gecici1->sol != NULL)
		{
			tepe = gecici1;
			gecici1 = gecici1->sol;
		}

		if (tepe != kok)
			tepe->sol = gecici1->sag;
		else
			tepe->sag = gecici1->sag;

		kok->veri = gecici1->veri;
		free(gecici1);
		return kok;
	}
}

int enBuyukBul(struct dugum *kok)
{
	dugum *dolasan = kok;
	while (dolasan->sag != NULL)
		dolasan = dolasan->sag;

	return dolasan->veri;
}

int enKucukBul(struct dugum *kok)
{
	dugum *dolasan = kok;
	while (dolasan->sol != NULL)
		dolasan = dolasan->sol;

	return dolasan->veri;
}

struct dugum* elemanAra(int gelen, struct dugum* kok)
{
	if (kok == NULL || kok->veri == gelen)
		return kok;
	if (kok->veri < gelen)
		return elemanAra(gelen, kok->sag);
	return elemanAra(gelen, kok->sol);
}

void agacYazdir(struct dugum* kok)
{
	if (kok != NULL)
	{
		agacYazdir(kok->sol);
		cout << kok->veri << endl;
		agacYazdir(kok->sag);
	}
}