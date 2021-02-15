#include <iostream>
#include <conio.h>
#include "Header.h"
using namespace std;


Agac *new_node(int data)
{
	Agac *yeni = new Agac();
	yeni->data = data;
	yeni->left = yeni->right = NULL;
	return yeni;
}

Agac *insert(Agac *root, int veri)
{
	if (root != NULL)
	{
		if (veri < root->data)
			root->left = insert(root->left, veri);
		else
			root->right = insert(root->right, veri);
	}
	else
		root = new_node(veri);
	return root;
}

void postOrder(Agac *root)
{
	if (root != NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data <<endl;
	}
}