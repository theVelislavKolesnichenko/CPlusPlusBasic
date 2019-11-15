#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int y, a, c;
	cout<<"a= ";
	cin>>a;
	cout<<"c= ";
	cin>>c;
	if (a<0||c==0)
	{
		cout<<"Invalid Input"<<endl;
	}
	else
	{
		cout<<(y=sqrt(a+2)-2/c);
	}
	return 0;
}




































