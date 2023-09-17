#include <iostream>

using namespace std;

int main()
{

	// init zakup
	int num = 10000;
	double priceInit = 32.87;
	double prov[2];
	prov[0] = 0.02 * num * priceInit;

	cout << "Janek zaplacil " << num * priceInit << "zl za akcje" << endl
		 << "Prowizja kosztowala go: " << prov[0] << "zl" << endl;

	// week 1
	int sold = 1000;
	num -= sold;
	double price = 33.92;
	prov[1] = sold * price * 0.02;

	cout << "Janek zarobil " << sold * price << "zl za sprzedane akcje" << endl
		 << "Prowizja kosztowala go: " << prov[1] << "zl" << endl;

	double bal = sold * (price - priceInit) - prov[1] - (sold * priceInit * 0.02);

	if (bal > 0)
		cout << "Janek zyskal " << bal << "zl na tych transakcjach";
	else
		cout << "Janek stracil " << 0 - bal << "zl na tych transakcjach";

	cout << endl;
	system("pause");
	return 0;
}
