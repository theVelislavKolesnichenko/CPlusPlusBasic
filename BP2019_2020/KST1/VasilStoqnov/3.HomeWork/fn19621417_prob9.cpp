#include <iostream>
using namespace std;
void func(double age)
{
	if (age > 0 && age < 1)cout << "baby"<<endl;
	else if (age >= 1 && age < 3)cout << "toddler"<<endl;
	else if (age >= 3 && age < 5)cout << "preschool"<<endl;
	else if (age >= 5 && age <= 12)cout << "gradeschooler"<<endl;
	else if (age >= 13 && age < 12)cout << "teen" << endl;
	else if (age >= 18 && age < 21)cout << "young adult" << endl;
}
int main()
{
	double age;
	cout << "vuvedete vuzrast ";
	cin >> age;
	func(age);
	return 0;
} 