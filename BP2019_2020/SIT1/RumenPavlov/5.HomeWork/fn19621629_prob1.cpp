#include <iostream>

using namespace std;
float multiply(float var1, float var2, float mul);
int main()
{
	float var1, var2, mul;
	do
	{
		cout<<"Enter a number larger than 0"<<endl;
		cin>>var1;
		while(var1<0)
		{
			cout<<"Enter a positive number"<<endl;
			cin>>var1;
		}
		cout<<"Once more"<<endl;
		cin>>var2;
		while(var2<0)
		{
			cout<<"Enter a positive number"<<endl;
				cin>>var2;
		}
		mul=var1*var2;
		multiply(var1, var2, mul);
		cout<<multiply(var1, var2, mul)<<endl;
	}while(var1!=0 || var2!=0);

	




	return 0;
}
float multiply(float var1, float var2, float mul)
{
	mul=var1*var2;

	return mul;
}