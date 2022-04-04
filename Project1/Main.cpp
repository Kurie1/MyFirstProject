#include <iostream>
using namespace	std;
	

int main() {

	int nam;

	cout << "nhap mot nam bat ki(tu 0 den 3000):";



	cin >> nam;


	bool dieuKien = nam <= 3000 and nam >= 0;




	if (dieuKien) {
		if (nam % 4 == 0) {
			cout << "NAM NHUAN";

		}
		else
		{
			cout << "NAM THUONG";
		}
		
	}
	else
	{
		cout << "BAN DA NHAP SAI";


	};


	











	cout << endl;

	system("pause");

	return 0;
	}