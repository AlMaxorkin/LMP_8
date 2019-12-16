#include <iostream>
#include "List.h"

using namespace std;

int main()
{
	int m = 3, n = 4;

	int** mat = new int* [n];
	for (int i = 0; i < m; i++)
		mat[i] = new int[m];
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> mat[i][j];

	List A;
	A.constructLinkedMatrix(mat, m, n);
	A.show();
	return 0;
}