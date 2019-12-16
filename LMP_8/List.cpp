#include "List.h"
node* newNode(int d)
{
	node* temp = new node;
	temp->data = d;
	temp->right = temp->down = NULL;
	return temp;
}

void List::show()
{
	node* rp, * dp = head;

	// loop until the down pointer is not NULL 
	while (dp) {
		rp = dp;

		// loop until the right pointer is not NULL 
		while (rp) {
			cout << rp->data << " ";
			rp = rp->right;
		}
		cout << endl;
		dp = dp->down;
	}
}

void List::construct()
{
	head = NULL;

	node** arrhead = new node*[row];
	node* righttemp = NULL, * newptr = NULL;

	for (int i = 0; i < row; i++) {
		arrhead[i] = NULL;
		for (int j = 0; j < col; j++) {
			int x;
			cin >> x;
			newptr = newNode(x);


			if (!head)
				head = newptr;

			if (!arrhead[i])
				arrhead[i] = newptr;
			else
				righttemp->right = newptr;

			righttemp = newptr;
		}
	}

	for (int i = 0; i < row - 1; i++) {

		node* temp1 = arrhead[i], * temp2 = arrhead[i + 1];

		while (temp1 && temp2) {

			temp1->down = temp2;
			temp1 = temp1->right;
			temp2 = temp2->right;
		}
	}

}

int List::volume(int x, int y)
{
	node* temp = head;
	for (int i = 0; i < x - 2; i++)
	{
		temp = temp->down;
		for (int j = 0; j < y - 2; j++)
		{
			temp = temp->right;
		}
	}

	if (x == 1 || y == 1 || x == row || y == col)
		return 0;

	int min = temp->right->data;

	if (temp->down->data < min)
		min = temp->down->data;
	if (temp->down->data < min)
		min = temp->down->data;
	if (temp->right->right->down->data < min)
		min = temp->right->right->down->data;
	if (temp->down->down->right->data < min)
		min = temp->down->down->right->data;

	temp = temp->right->down;

	if (temp->data >= min)
		return 0;
	else
		return min;
}

