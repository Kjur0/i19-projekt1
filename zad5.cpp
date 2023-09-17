#include <iostream>

using namespace std;

int main()
{
	int rok;
	char wybor;
wprowadzanie:
	cout << "Wprowadz rok: ";
	cin >> rok;
sprawdzanie:
	if (rok <= 0)
	{
		cout << "Taki rok nie istnieje" << endl;
		goto czyPowtorzyc;
	}
	if (rok % 400 == 0 || (rok % 4 == 0 && rok % 100 != 0))
	{
		cout << "WYGRALES!!!" << endl
			 << "Rok " << rok << " jest przestepny" << endl;
		goto koniec;
	}
	else
	{
		cout << "PRZEGRALES!!!" << endl
			 << "Rok " << rok << " nie jest przestepny" << endl;
		goto czyPowtorzyc;
	}
czyPowtorzyc:
	cout << "Czy chcesz sprobowac ponownie? (t/n): ";
	cin >> wybor;
	if (wybor == 't')
		goto wprowadzanie;
	else if (wybor == 'n')
		goto koniec;
	else
		goto czyPowtorzyc;
koniec:
	cout << endl;
	system("pause");
	return 0;
}
