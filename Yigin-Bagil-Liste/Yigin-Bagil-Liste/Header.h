#ifndef Fonksiyonlar
#define Fonksiyonlar
#define STACK_SIZE 4
typedef struct{
	struct node *top;
	int cnt;
}stack;
struct node{
	struct node *next;
	int data;
};
bool isEmpty(stack *);
bool isFull(stack *);
void push(stack *,int);
int pop(stack *);
int top(stack*);
#endif