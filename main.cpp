// Lab_03_1.cpp	
// < ����������, ����� >
// ����������� ������ � 4.2
// ������������, ������ ��������: ������� ���� �����.
// ������ 1.17
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y;
	cout << "x = "; cin >> x;
	// ����� 1: ������������ � ��������� ����
	y = x * x + 1;
	if (x < 4)
	{
		y += 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
	}
	if (4 <= x && x < 7)
	{
		y += atan((abs(x) + 1) / 2) + 8.3 * x;
	}
	if (x >= 7)
	{
		y += abs(log(2 * x + exp(4 * x + 1)));
	}
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
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

	cout << "2) y = " << y << endl;
	return 0;
}