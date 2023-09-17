#include <iostream>

using namespace std;

int main()
{
	int gr1, gr2, gr5, gr10, gr20, gr50;
	cout << "Podaj liczbe monet 1gr: ";
	cin >> gr1;
	cout << "Podaj liczbe monet 2gr: ";
	cin >> gr2;
	cout << "Podaj liczbe monet 5gr: ";
	cin >> gr5;
	cout << "Podaj liczbe monet 10gr: ";
	cin >> gr10;
	cout << "Podaj liczbe monet 20gr: ";
	cin >> gr20;
	cout << "Podaj liczbe monet 50gr: ";
	cin >> gr50;
	double zl = (gr1 + gr2 * 2 + gr5 * 5 + gr10 * 10 + gr20 * 20 + gr50 * 50) / 100;
	if (zl > 1)
		cout << "Masz wiecej niz 1zl";
	else if (zl < 1)
		cout << "Masz mniej niz 1zl";
	else
		cout << "Masz dokladnie 1zl";
		
	cout << endl;
	system("pause");
	return 0;
}
