#include <iostream>
#include "List.h"

using namespace std;

int main()
{
	int m = 2, n = 2;

	List A(m,n);
	A.construct();
	A.show();
	cout << endl << A.volume(2, 2);
	
	return 0;
}