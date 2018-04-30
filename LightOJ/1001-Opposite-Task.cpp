#include <iostream>

using namespace std;

int main()
{

	int t;
	int n;
	int b;
	cin >> T;
	while (T--) {
		cin >> n;
		
		b = n / 2;
		n = n % 2 + n / 2;
		cout << n << " "<<b << endl;

	}		

}
