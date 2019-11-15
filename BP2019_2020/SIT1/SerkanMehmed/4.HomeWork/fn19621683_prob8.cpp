#include <iostream>
using namespace std;
char am(int a);

int main()
{
	int a;
	cout<<"Vuvedete chetiritsifreno chislo"<<endl;
	cin>>a;
	cout<<am(a);

	return 0;
}
char am(int a)
{
	if(a>=1000 && a<=9999)
	{
	 cout<<"four-digit";
	return 0;
	}

else if(a>0 && a<1000)
	{
		cout<<"less four-digit";
	return 0;
	}

     else if(a>=10000)
	 {
		cout<<"more four-digit";
	return 0;
	}
	 else if(a==0)
	 {
		 cout<<"End";
		return 0;
	 }
}
	

