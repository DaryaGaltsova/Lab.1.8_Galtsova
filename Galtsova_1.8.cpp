#include <iostream>
#include <cmath>

using namespace std;

double time();

double trainSpeed();

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "** Программа вычисляет путь, пройденный поездом **";

	double s, s1, s2, a;
	double t = time();
	double v = trainSpeed();

	/*t (время)

	v (постоянная скорость)

	s (расстояние от А до В)

	s1 (путь при равномерном движении)

	s2 (путь при равнозамедленном движении)

	a (ускорение)

	*/

	a = v / t;

	s1 = v * t;

	s2 = (a * pow(t, 2)) / 2;

	s = s1 + s2;
	
	s = (3 * v * t) / 2;

	cout << "\n** Расстояние между пунктами А и В = " << s << endl;
}
double time()
{
	while (true)
	{
		cout << "\n** Введите время: ";
		double t;
		cin >> t;

		if (cin.fail() || t <= 0)
		{
			cin.clear();
			cin.ignore(33333, '\n');
		}
		else
		{
			return t;
		}
	}
}

double trainSpeed()
{
	while (true)
	{
		cout << "** Введите постоянную скорость поезда: ";
		double v;
		cin >> v;

		if (cin.fail() || v < 0)
		{
			cin.clear();
			cin.ignore(33333, '\n');
		}
		else
		{
			cin.ignore(33333, '\n');

			return v;
		}
	}
}
