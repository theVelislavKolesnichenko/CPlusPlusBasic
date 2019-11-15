#include <iostream>
#include<conio.h>
#include<string>

using namespace std;

float input(char symb);
float aritm_operations(float val1, float val2, int operation_id);
string operation_name(int id);
string operation_symbol(int id);

int main()
{
	cout << " - Homework N2, Ex 2 - \n\n";
	char a('a'), b('b');
	float in1, in2;
	for (int i = 0; i <= 3; i++)
	{
		cout << "Entering values for the " << operation_name(i) << endl;
		in1 = input(a);
		in2 = input(b);

		cout << in1 << operation_symbol(i)
			<< in2 << "=" << aritm_operations(in1, in2, i)
			<<endl<<endl;
	}
	system("pause");
}

float input(char symb)
{
	float val;
	cout << "Please enter a value for " << symb << ":";
	cin >> val;
	return val;
}

float aritm_operations(float val1, float val2, int operation_id)
{
	float val;
	switch(operation_id)
	{
		case 0:
			val = val1 + val2;
			break;
		case 1:
			val = val1 - val2;
			break;
		case 2:
			val = val1 / val2;
			break;
		case 3:
			val = val1 * val2;
	}
	return val;
}

string operation_name(int id)
{
	string res;
	switch(id)
	{
		case 0:
			res = "Summing";
			break;
		case 1:
			res = "Subtraction";
			break;
		case 2:
			res = "Division";
			break;
		case 3:
			res = "Multiplication";
			break;
		default:
			res = "none";
			break;
	}
	return res;
}

string operation_symbol(int id)
{
	string res;
	switch (id)
	{
	case 0:
		res = "+";
		break;
	case 1:
		res = "-";
		break;
	case 2:
		res = "/";
		break;
	case 3:
		res = "*";
		break;
	default:
		res = "none";
		break;
	}
	return res;
}




//Съставете програма с функции за :
//	- Въвеждане на реално число.Приема като входни параметри символа на променливата 
//		която ще се въвежда.Връща като резултат стойността на въведеното число.
//	- Аритметични операции.Приема като входни параметри две реални числа и връща
//		като резултат стойността от съответната аритметична операция.
//Във функция main въведете по две реални числа за всяка аритметична операция и
//изведете отговора, със стойностите на двете променливи и резултата.