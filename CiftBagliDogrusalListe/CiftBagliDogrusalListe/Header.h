#ifndef Fonksiyonlar
#define Fonksiyonlar
struct node{
	int veri;
	node *bironceki, *birsonraki;
};
void menu();
void yonlendirme(int);
void basaEkle();
void sonaEkle();
void yazdir();
void arayaEkle();
void bastanSil();
void sondanSil();
void aradanSil();

#endif