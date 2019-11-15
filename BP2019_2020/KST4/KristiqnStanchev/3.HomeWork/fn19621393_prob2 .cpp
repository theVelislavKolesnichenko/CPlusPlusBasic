#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double doubleIn(string);
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

int main()
{
	double numb1, numb2;
	numb1 = doubleIn("numb1");
	numb2 = doubleIn("numb2");

	cout<<("%f + %f = %f", numb1, numb2, add(numb1, numb2));
    cout<<("%f + %f = %f", numb1, numb2, sub(numb1, numb2));
	cout<<("%f + %f = %f", numb1, numb2, mul(numb1, numb2));
	cout<<("%f + %f = %f", numb1, numb2, div(numb1, numb2));

	return 0;
}

double doubleIn(string variableName) {

	double x = 0.0;
	cout<<("variable %s: ", variableName.c_str());
	cout<<("%d", &x);

	return x;
}

double add(double x, double y) {
	return x + y;
}

double sub(double x, double y) {
	return x - y;
}

double mul(double x, double y) {
	return x * y;
}

double div(double x, double y) {
	return x / y;
}
