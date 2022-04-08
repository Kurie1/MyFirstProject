#include <iostream>
using namespace std;

int main() {

	int n;

	cout << "nhap so am bat ki:";

	cin >> n;

	if (n < 0) {
		for (int i = 0; n < i; i--) {
			if ( i %2 != 0) { 
				cout << i << " ";

			}
		}
	}

	cout << endl;

	system("pause");

	return 0;
}