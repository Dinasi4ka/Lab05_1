// Lab05_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y);

int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double z = pow(k(p + sqrt(q), q - sqrt(p)), 2) - k(1, p + q);

	cout << "z = " << z << endl;

	return 0;
}

double k(const double x, const double y)
{
	return (x / fabs(pow(x, 3) + pow(y, 3))) + (y / fabs(x + y));
}
