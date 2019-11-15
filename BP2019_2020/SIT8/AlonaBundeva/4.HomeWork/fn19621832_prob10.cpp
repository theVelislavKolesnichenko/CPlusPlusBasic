#include<iostream>
using namespace std;
int main()
{
	int x, sum;
	cout<<"enter x= ";
	cin>>x;
	for(int i=1; i<=20; i++)
	{
		sum +=(pow(x, i)+1)/(2*i+1);
	}
			cout<<sum;
			return 0;
}