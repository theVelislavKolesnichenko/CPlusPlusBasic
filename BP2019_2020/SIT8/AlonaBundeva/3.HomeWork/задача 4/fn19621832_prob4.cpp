#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int x, y;
	cout<<"y= ";
	cin>>y;
	if (y==0)
	{
		cout<<"�� ���� �� �� ���� �� 0"<<endl;
	}
	else
	{
		cout<<(x=20/y)<<endl;
	}
	return 0;
}