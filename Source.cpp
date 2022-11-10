#include <iostream>
#include <cmath>
using namespace std;


int Sum(int a, int b);
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(double a, int b);
double Power(double a, int b);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
	int a, b;
	cout << "¬ведите два числа:"; cin >> a >> b;
	int c = Sum (a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Difference(a, b)<< endl;
	cout << a << "*" << b << "=" << Product(a, b) << endl;
	cout << a << "/" << b << "=" << Quotient(a, b) << endl;
	cout << a << "^" << b << "=" << Power (a,b) << endl;
}
int Sum(int a, int b)
{
	int sum = a + b;
	return sum;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(double a, int b)

{
	return a / b;
}
double Power(double a, int b)
{
	return a ^ b;
}
