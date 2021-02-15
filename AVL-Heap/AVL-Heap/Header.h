#ifndef Fonksiyonlar
#define Fonksiyonlar
struct avl{
	int veri;
	struct avl *sag;
	struct avl *sol;
	int yukseklik;
};

void AVL_yazdir(struct avl *);
struct avl* AVL_Ekle(struct avl*, int);
////////////////////

struct heap{
	int *dizi;
	int kapasite;
	int sayici;
};
typedef struct heap Heap;

Heap *heap_Olustur(int);
void alt_ust(Heap*, int);
void H_Ekle(Heap*, int);
void H_yazdir(Heap*);
#endif