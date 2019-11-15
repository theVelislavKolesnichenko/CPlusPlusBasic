#include <iostream>
using namespace std;
void year(int choice);
int main()
{
	int choice;
	cout<<"Въведете месец от годината"<<endl;
	cin>>choice;
	while(choice<1 || choice>12)
	{
		cout<<"Това не е месец"<<endl;
		cin>>choice;
	}
	year(choice);



return 0;
}
void year(int choice)
{
if(choice>=1 && choice<=3)
	cout<<"Зима"<<endl;
if(choice>=4 && choice<=6)
	cout<<"Пролет"<<endl;
if(choice>=7 && choice<=9)
	cout<<"Лято"<<endl;
if(choice>=10 && choice<=12)
	cout<<"Есен"<<endl;
}