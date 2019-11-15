#include <iostream>
using namespace std;
int smetki(float a, float b);
int main()
{
	cout<<"Въведете 2 променливи"<<endl;
			float a, b, smetka;
	cin>>a;
	cin>>b;  //Въвеждаме 2 променливи
	if (a==b) // ако 2-те променливи са равни, влизаме в loop, в който не ни дава да продължим докато не въведем 2 различни променливи
	{
	do
	{
	cout<<"на 0 не се дели"<<endl<<"Въведи 2 числа, които не са еднакви."<<endl;
	cin>>a;
	cin>>b;
	
    }
	while (a==b); 
	} 
	if (a != b) // ако са различни програмата продължава
	{
	cout<<"a="<<a<<"   "<<"b="<<b<<endl;
	smetka = smetki(a, b);
	cout<<"x = 2*((a-b)/(b-a)) =  "<<smetka<<endl;
	}

	return 0;
}
int smetki(float a, float b)
{
	float x;
	x= 2*((a-b)/(b-a));
	return x;
}