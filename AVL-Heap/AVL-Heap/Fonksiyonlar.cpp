#include <iostream>
#include <conio.h>
#include "Header.h"
#include<stdlib.h>
using namespace std;

struct avl *dugumOlustur(int gelen)
{
	struct avl *yeni = (struct avl*)malloc(sizeof(struct avl));
	yeni->veri = gelen;
	yeni->sag = NULL;
	yeni->sol = NULL;
	yeni->yukseklik = 1;
	return yeni;
}

int karsilastir(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}

int yukseklik(struct avl *dugum)
{
	if (dugum == NULL)
		return 0;
	else
		return dugum->yukseklik;
}

struct avl* sagaDondur(struct avl* z)
{
	avl *gecici = z->sol;
	z->sol = gecici->sag;
	gecici->sag = z;

	z->yukseklik = karsilastir(yukseklik(z->sol), yukseklik(z->sag)) + 1;
	gecici->yukseklik = karsilastir(yukseklik(gecici->sol), yukseklik(gecici->sag)) + 1;
	return gecici;
}

struct avl* solaDondur(struct avl* z)
{
	avl *gecici = z->sag;
	z->sag = gecici->sol;
	gecici->sol = z;

	z->yukseklik = karsilastir(yukseklik(z->sol), yukseklik(z->sag)) + 1;
	gecici->yukseklik = karsilastir(yukseklik(gecici->sol), yukseklik(gecici->sag)) + 1;
	return gecici;
}

struct avl* solSagDondur(struct avl *z)
{
	z->sol = solaDondur(z->sol);
	return sagaDondur(z);
}

struct avl* sagSolDondur(struct avl *z)
{
	z->sag = sagaDondur(z->sag);
	return solaDondur(z);
}

struct avl* AVL_Ekle(struct avl* kok, int gelen)
{
	if (kok != NULL)
	{
		if (gelen < kok->veri)
			kok->sol = AVL_Ekle(kok->sol, gelen);
		else if (gelen > kok->veri)
			kok->sag = AVL_Ekle(kok->sag, gelen);
		else
			return kok;

		kok->yukseklik = karsilastir(yukseklik(kok->sol), yukseklik(kok->sag)) + 1;

		if ((yukseklik(kok->sol) - yukseklik(kok->sag)) > 1 && gelen < kok->sol->veri)
			return sagaDondur(kok);

		if ((yukseklik(kok->sol) - yukseklik(kok->sag)) >1 && gelen > kok->sol->veri)
			return solSagDondur(kok);

		if ((yukseklik(kok->sol) - yukseklik(kok->sag)) < -1 && gelen>kok->sag->veri)
			return solaDondur(kok);

		if ((yukseklik(kok->sol) - yukseklik(kok->sag)) < -1 && gelen < kok->sag->veri)
			return sagSolDondur(kok);
	}
	else
		kok = dugumOlustur(gelen);
	return kok;
}

void AVL_yazdir(struct avl *agac)
{
	if (agac != NULL)
	{
		cout << agac->veri << " ";
		AVL_yazdir(agac->sol);
		AVL_yazdir(agac->sag);

	}

}

/////////////////////////////////////////////


Heap *heap_Olustur(int kapasite)
{
	Heap *h = (Heap*)malloc(sizeof(Heap));
	if (h == NULL)
	{
		cout << "Bellek Hatasi!! ";
		return 0;
	}
	h->sayici = 0;
	h->kapasite = kapasite;
	h->dizi = (int*)malloc(kapasite*sizeof(int));

	if (h->dizi == NULL)
	{
		cout << "Bellek Hatasi !! ";
		return 0;
	}
	return h;
}

void H_Ekle(Heap *h, int veri)
{
	if (h->sayici < h->kapasite)
	{
		h->dizi[h->sayici] = veri;
		alt_ust(h, h->sayici);
		h->sayici++;
	}
}

void alt_ust(Heap *h, int indis)
{
	int gecici;
	int e_dugum = (indis - 1) / 2;

	if (h->dizi[e_dugum] > h->dizi[indis])
	{
		gecici = h->dizi[e_dugum];
		h->dizi[e_dugum] = h->dizi[indis];
		h->dizi[indis] = gecici;
		alt_ust(h, e_dugum);
		//Rekürsif bir swap fonksiyonu tanýmý yapýlmýþtýr.
	}
}

void H_yazdir(Heap *h)
{
	cout << "------------> Heap Yazdirma <--------------" << endl;
	for (int i = 0; i < h->sayici; i++)
		cout << "-> " << h->dizi[i];
	cout << endl;
}