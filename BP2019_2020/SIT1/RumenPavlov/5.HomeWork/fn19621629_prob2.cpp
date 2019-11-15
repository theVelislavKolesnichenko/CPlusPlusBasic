#include <iostream>;

using namespace std;
int amount(int number);
int main()
{
	int number;
	cout<<"Enter a number"<<endl;
	cin>>number;
	amount(number);









	return 0;
}
int amount(int number)
{
	int numbercount=0;
    while(number!=0)
	{
		number=number/10;
		numbercount++;
	}
return numbercount;
}