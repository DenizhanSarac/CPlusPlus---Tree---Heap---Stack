#ifndef Fonksiyonlar
#define Fonksiyonlar
#define SIZE 5
typedef struct{
	int dizi[SIZE];
	int top;
}stack;
void reset(stack *);
void push(stack *, int);
int pop(stack *);
int print(stack *);
#endif