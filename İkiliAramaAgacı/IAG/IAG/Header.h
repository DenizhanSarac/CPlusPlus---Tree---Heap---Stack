#ifndef Fonksiyonlar
#define Fonksiyonlar

struct dugum
{
	int veri;
	dugum *sag, *sol;
};

struct dugum *elemanEkle(int, struct dugum*);
struct dugum *elemanSil(int, struct dugum*);
struct dugum *elemanAra(int, struct dugum*);
void agacYazdir(struct dugum*);
int enBuyukBul(struct dugum *kok);
int enKucukBul(struct dugum *kok);
#endif