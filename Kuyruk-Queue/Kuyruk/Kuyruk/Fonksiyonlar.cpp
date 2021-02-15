#include <iostream>
#include <stdbool.h>
#include <conio.h>
#include "Header.h"

using namespace std;
void degerBaslangic(kuyruk *k)
{
	k->cephe = 0;
	k->geri = -1;
	k->sayim = 0;
}

bool doluMu(kuyruk *k)
{
	return(k->sayim == Boyut);
}
bool bosMu(kuyruk *k)
{
	return(k->sayim == 0);
}

void elemanekle(kuyruk *k, int veri)
{
	if (!doluMu(k))
	{
		k->geri++;
		k->sayim++;

		if (k->geri == Boyut)
			k->geri = 0;
		k->dizi[k->geri] = veri;

	}
	elemanyazdir(k);
}

void elemansilme(kuyruk *k)
{
	if (!bosMu(k))
	{
		int y = 0;
		y = k->dizi[k->cephe];
		k->cephe++;
		k->sayim--;

		if (k->cephe == Boyut)
			k->cephe = 0;

	}
	elemanyazdir(k);
}

void elemanyazdir(kuyruk *k)
{
	if (k->sayim == 0)
		cout << "Liste Bos!!" << endl;
	for (int i = 0; i < k->sayim; i++)
		cout << i + 1 << ". Eleman: " << k->dizi[i] << " ";
	cout << endl;
}