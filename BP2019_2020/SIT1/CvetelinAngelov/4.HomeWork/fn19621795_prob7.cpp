#include <iostream>

using namespace std;

void ArrInput(double*);
void signCheck(double*, int&, int&);

int main()
{
	double a[10];
	int b = 0, c = 0;
	ArrInput(a);
	signCheck(a, b, c);
	cout << "Positive: " << b << " | Negative: " << c << endl;
	return 0;
}

void ArrInput(double * a)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number " << i + 1 << "=";
		double b;
		cin >> b;
		a[i] = b;
	}
}

void signCheck(double* a, int & b, int & c)
{
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > 0)
		{
			b += 1;
		}
		else if (a[i] < 0)
		{
			c += 1;
		}
	}
}

//Съставете програма в която да се въведат 10 числа.След като се въведат число с помоща на
//функция да се провери дали числото е положително и да се запази в една променлива броя на
//положителните числоа, а в друга променлива броя на отлицателните числа.Изведете броя на
//положителните и броя на отрицателните числа.