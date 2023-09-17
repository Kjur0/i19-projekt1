#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Podaj liczbe z przedzialu 1-10: ";
	cin >> n;
	if (n > 10 || n < 1)
	{
		cout << "Liczba nie jest z przedzialu 1-10";
		return 0;
	}
	cout << "Liczba " << n << " w systemie dziesietnym to ";
	switch (n)
	{
	case 1:
		cout << "I";
		return 0;
	case 2:
		cout << "II";
		return 0;
	case 3:
		cout << "III";
		return 0;
	case 4:
		cout << "IV";
		return 0;
	case 5:
		cout << "V";
		return 0;
	case 6:
		cout << "VI";
		return 0;
	case 7:
		cout << "VII";
		return 0;
	case 8:
		cout << "VIII";
		return 0;
	case 9:
		cout << "IX";
		return 0;
	case 10:
		cout << "X";
		return 0;
	}
}
