#ifndef Fonksiyonlar
#define Fonksiyonlar
struct node{
	int veri;
	node *next;
};
void printlist(struct node *);

struct node *TYBL_basaekle(struct node*, int);
struct node *TYBL_sonaekle(struct node*, int);
struct node *TYBL_bastansil(struct node*);
struct node *TYBL_sondansil(struct node*);
struct node *TYBL_belirlisil(struct node*,int);
struct node *TYBL_siraliekle(struct node*, int);
#endif