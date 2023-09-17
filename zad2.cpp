#include <iostream>

using namespace std;

int main()
{
	double value;
	cout << "Podaj wartosc sprzedazy: ";
	cin >> value;

	int podatekStanowy = value * 0.04;
	int podatekHrabsto = value * 0.02;

	cout << "Wartosc podatku naliczonego w hrabstwie: " << podatekHrabsto << endl
		 << "Wartosc podatku naliczonego w stanie: " << podatekStanowy << endl
		 << "Wartosc calkowita podatku: " << podatekHrabsto + podatekStanowy << endl;

	cout << endl;
	system("pause");
	return 0;
}
