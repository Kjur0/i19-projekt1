#include <iostream>
#include <cmath>

using namespace std;

int rng()
{
	int rn = rand() % 5;
	int rn = floor(rand() * 5);
	switch (rn)
	{
	case 0:
		cout << "Wisnie";
		break;
	case 1:
		cout << "Pomarancze";
		break;
	case 2:
		cout << "Sliwki";
		break;
	case 3:
		cout << "Dzwonki";
		break;
	case 4:
		cout << "Melony";
		break;
	case 5:
		cout << "Sztabki";
		break;
	}
	return rn;
}

int main()
{
	int hais, a, b, c;
	char wybor;
graj:
	cout << "Wplac sume: ";
	cin >> hais;
	a = rng();
	cout << ' ';
	b = rng();
	cout << ' ';
	c = rng();
	cout << endl;
	if (a == b && b == c)
		hais *= 3;
	else if (a == b || b == c || a == c)
		hais *= 2;
	else
		hais *= 0;
	cout << "Wygrales: " << hais;
jeszczeRaz:
	cout << endl
		 << "Czy chcesz powtorzyc? (t/n): ";
	cin >> wybor;
	if (wybor == 't')
		goto graj;
	else if (wybor == 'n')
		goto koniec;
	else
		goto jeszczeRaz;
koniec:
	cout << endl;
	system("pause");
	return 0;
}
