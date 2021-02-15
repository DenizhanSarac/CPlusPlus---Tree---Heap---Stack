#ifndef Fonksiyonlar
#define Fonksiyonlar
struct node{
	int data;
	struct node *right, *left;
};
typedef struct node Agac;
Agac *insert(Agac *,int);
void postOrder(Agac *);

#endif