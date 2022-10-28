#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double y; 
	double A; 
	double B; 
	cout << "x = "; cin >> x;

	A = (2 + õ)/ (x * x)+ 1;
	if (x < 0)
		B = (x * x * x) - 2 * (x * x * x * x);
	if (0 <= x && x <= 2)
		B = (abs(x) + exp(x)) * (abs(x) + exp(x)) * (abs(x) + exp(x));
	if (x > 2)
		B = 4 * cos(x * x - 2);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	if (x < 0)
		B = B = (x * x * x) - 2 * (x * x * x * x);
	else
		if (x > 1)
			B = B = (abs(x) + exp(x)) * (abs(x) + exp(x)) * (abs(x) + exp(x));
		else
			B = 4 * cos(x * x - 2);
	
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
