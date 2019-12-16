#pragma once
#include <iostream>

using namespace std;

struct node {
	int data;
	node* right, * down;
};

class List
{
	node* head;
public:
	node* getHead() { return head; }
	List() : head(NULL) {};
	~List();
	void constructLinkedMatrix(int** mat, int m, int n);
	void show();
	int volume(int n, int m);
};

