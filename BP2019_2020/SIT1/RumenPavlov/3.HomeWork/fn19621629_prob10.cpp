#include <iostream>
using namespace std;
void number(int num);
int main()
{
	int num;
	cout<<"Въведете число"<<endl;
	cin>>num;
    number(num);



return 0;
}
void number(int num)
{
if (num % 2==0)
	cout<<"Even"<<endl;
else
	cout<<"Odd"<<endl;
}