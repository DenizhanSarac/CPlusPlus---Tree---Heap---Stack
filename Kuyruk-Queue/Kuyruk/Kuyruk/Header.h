#ifndef Fonksiyonlar
#define Fonksiyonlar
#define Boyut 7
typedef struct {
	int cephe;
	int geri;
	int sayim;
	int dizi[Boyut];
}kuyruk;

void degerBaslangic(kuyruk*);
void elemanekle(kuyruk*, int);
void elemansilme(kuyruk*);
bool bosMu(kuyruk*);
bool doluMu(kuyruk*);
void elemanyazdir(kuyruk*);
#endif