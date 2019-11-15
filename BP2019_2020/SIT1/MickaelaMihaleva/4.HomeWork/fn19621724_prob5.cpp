#include <iostream>
using namespace std;
void fun(int a);
int main(){
	int a;
	do{cout<<"Vuvedi chislo = ";
		cin>>a;
	if(a<=0){
	cout<<"Necorecna stoinost!!!";
	}
	}while (a<0);
	cout<<"Cislata ot 1 do "<<a<<" ca : ";
	fun(a);
system("pause");}
void fun(int a){
for(int i=1;i<=a;i++)
{cout<<i<<" ";
}}