#include "List.h"
node* newNode(int d)
{
	node* temp = new node;
	temp->data = d;
	temp->right = temp->down = NULL;
	return temp;
}

List::~List()
{

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

void List::constructLinkedMatrix(int** mat, int m, int n)
{
	node** rowhead = new node*[m];
	node* righttemp =  NULL, *newptr = NULL;

	for (int i = 0; i < m; i++) {

		// initially set the head of ith row as NULL 
		rowhead[i] = NULL;
		for (int j = 0; j < n; j++) {
			newptr = newNode(mat[i][j]);

			// stores the mat[0][0] node as 
			// the mainhead of the linked list 
			if (!head)
				head = newptr;

			if (!rowhead[i])
				rowhead[i] = newptr;
			else
				righttemp->right = newptr;

			righttemp = newptr;
		}
	}

	// Then, for every ith and (i+1)th list, 
	// we set the down pointers of 
	// every node of ith list 
	// with its corresponding 
	// node of (i+1)th list 
	for (int i = 0; i < m - 1; i++) 
	{

		node* temp1 = rowhead[i], * temp2 = rowhead[i + 1];

		while (temp1 && temp2) 
		{

			temp1->down = temp2;
			temp1 = temp1->right;
			temp2 = temp2->right;
		}
	}
}

int List::volume(int n, int m)
{
	node* temp = head;
	for (int i = 0; i < n - 1; i++)
		temp = temp->right;

	for (int j = 0; j < m - 1;j)
	{
		j;
	}


}