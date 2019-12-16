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
	int row;
	int col;
public:
	node* getHead() { return head; }
	List() : head(NULL), row(0), col(0) {};
	List(int m, int n) : head(NULL), row(m), col(n) {};
	void construct();
	void show();
	int volume(int, int);
};

