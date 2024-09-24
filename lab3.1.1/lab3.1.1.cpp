#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y{}; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = (x * x) + 1;
	if (x < 4)
		B = 4 * (x * x * x * x * x * x * x) - (x * x * x * x * x) + (x * x * x) - 2;
	else
		if (x >= 7)
			B= log10(abs(x + exp(4 * x + 11)));
		else B = atan((abs(x) + 1) / 2) + 8, 3 * x;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}