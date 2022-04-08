#include <iostream>
using namespace std;

int main() {

	int n;

	cout << "nhap so bat ki:";

	cin >> n;

	if (n >= 0) {
		for (int i = 0; i < n; i++) {
			if ( i %2 == 0) { 
				cout << i << " ";

			}
		}
	}

	cout << endl;

	system("pause");

	return 0;
}