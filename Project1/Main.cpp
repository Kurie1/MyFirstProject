#include <iostream>
using namespace std;


int main() {

	int a, b, c;
	
	cout << "nhap canh a:";

	cin >> a;
	
	cout << "nhap canh b:";

	cin >> b;

	cout << "nhap canh c:";

	cin >> c;

	if (a + b > c && a + c > b && b + c > a) {

		cout << "tam giac hop le"<<endl;

		if (a == b || a == c || b == c) {
			
			cout << "tam giac can" << endl;
		}
		else {
			cout << "tam giac ko can" << endl;
		}
		
		if (a == b&&a==c) {

			cout << "tam giac deu" << endl;
		}
		else {
			cout << "tam giac ko deu" << endl;
		}
	}
	else {
		cout << "ko phai tam giac";
	}

	cout << endl;

	system("pause");

	return 0;

}