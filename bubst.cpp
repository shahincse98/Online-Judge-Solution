#include <iostream>

using namespace std;

int main()
{
	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(a[0]);
	int i, j;

	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-i-1; j++) {
			if (a[j] > a[j+1]) {
				int temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
			}		
		}
	}

	for (i = 0; i < n; i++) {
		cout << a[i] << " ";	
	}

	cout << endl;
	
	return 0;
}
