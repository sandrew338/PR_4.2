// Lab_03_1.cpp	
// < Назаркевич, Андрій >
// Лабораторна робота № 4.2
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 1.17
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	// спосіб 2: розгалуження в повній формі
	while (x < xk)
	{
		y = x * x + 1;
		if (x < 4)
		{
			y += 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
		}
		else
		{
			if (x >= 7)
			{
				y += abs(log(2 * x + exp(4 * x + 1)));
			}
			else
			{
				y += atan((abs(x) + 1) / 2) + 8.3 * x;
			}
		}
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	

	cout << "---------------------------"<< endl;
	return 0;
}