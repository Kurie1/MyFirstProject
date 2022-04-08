#include <iostream>
using namespace std;

int main() {

	int a;

	cout << "nhap so a bat ki" << endl;

	cin >> a;

	int b;
	
	cout << "nhap so b bat ki" << endl;

	cin >> b;

	if (b > a) {
		for (a; b > a; a++) {
			if (a % 2 == 0) {
				cout << a << " ";
			}
		}
	}
	cout << endl;

	system("pause");

	return 0;
}