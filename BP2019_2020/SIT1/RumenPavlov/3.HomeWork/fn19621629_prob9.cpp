#include <iostream>
using namespace std;
void agecalc(int age);
int main()
{
	int age;
	cout<<"Въведете възраст"<<endl;
	cin>>age;
    agecalc(age);



return 0;
}
void agecalc(int age)
{
if (age>=0 && age<1)
	cout<<"Baby"<<endl;
else if (age>=1 && age<3)
	cout<<"Toddler"<<endl;
else if (age>=3 && age<5)
	cout<<"Preschool"<<endl;
else if (age>=5 && age<=12)
	cout<<"Gradeschooler"<<endl;
else if (age>=13 && age<18)
	cout<<"Teen"<<endl;
else if (age>=18 && age<21)
	cout<<"Young adult"<<endl;
else if (age>21)
	cout<<"Adult"<<endl;
else
	cout<<"Въведете валидна възраст"<<endl;
}