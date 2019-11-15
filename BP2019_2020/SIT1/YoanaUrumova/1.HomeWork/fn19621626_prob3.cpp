#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
int a,ed,des,st;
cout<<"Vavedete tricifreno chislo a=";
cin>>a;
ed=a%10;
des=(a/10)%10;
st=(a/100)%10;
cout<<"Units "<<ed<<" Tens "<<des<<" Hundreds "<<st<<endl;

system ("pause");
	return 0;
}
