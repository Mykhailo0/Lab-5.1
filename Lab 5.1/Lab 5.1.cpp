// Lab 5_1
// < ������ �������>
// ����������� ������ � 5.1
// �������, �� ������ ������������ �����
// ������ 31 

#include <iostream>
#include <cmath>
using namespace std;
double p(const double x); // ��������
int main()
{
	double s;

	cout << "s = "; cin >> s;

	double c = (pow(p(1 + 2 * s + s * s), 2) - pow(1 + 3 * s + s * s * s, 3)) / (1 + sqrt(p(s) + pow(s, 4)));
	cout << "c = " << c << endl;
	return 0;
}
    double p(const double x) // ����������
{
	return (1 + x * x) / 2 - (x * x * x * x) / 4;
}