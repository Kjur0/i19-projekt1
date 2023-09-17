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
		break;
	case 2:
		cout << "II";
		break;
	case 3:
		cout << "III";
		break;
	case 4:
		cout << "IV";
		break;
	case 5:
		cout << "V";
		break;
	case 6:
		cout << "VI";
		break;
	case 7:
		cout << "VII";
		break;
	case 8:
		cout << "VIII";
		break;
	case 9:
		cout << "IX";
		break;
	case 10:
		cout << "X";
		break;
	}

	cout << endl;
	system("pause");
	return 0;
}
