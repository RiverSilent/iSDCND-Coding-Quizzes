#include <iostream>
using namespace std;

int main(){

	float a = 11.0;
	double b = 11.0;
	int divisions = 100000;

	a /= divisions;
	b /= divisions;

	float sum_float = 0.0;
	double sum_double = 0.0;

	for (int i = 0; i < divisions; ++i)
	{
		sum_float += a;
	}

	for (int i = 0; i < divisions; ++i)
	{
		sum_double += b;
	}

	cout << "Final a (float): " << sum_float << endl;
	cout << "Final b (double): " << sum_double << endl;

	return 0;
}