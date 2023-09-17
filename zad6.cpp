#include <iostream>
#include <cmath>

using namespace std;

double kineticEnergy(double m, double v)
{
	return 0.5 * m * pow(v, 2);
}

int main()
{
	double m, v;
	cout << "Podaj mase: ";
	cin >> m;
	cout << "Podaj predkosc: ";
	cin >> v;
	cout << "Energia kinetyczna wynosi: " << kineticEnergy(m, v) << endl;
	return 0;
}
