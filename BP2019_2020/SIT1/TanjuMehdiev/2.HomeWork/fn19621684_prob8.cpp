#include <iostream>
using namespace std;
int skorost(int a);
int vreme(int b);
const int S=987;
int main()
{
	int a,b;
	cout<<"Vreme=";
	cin>>a;
	cout<<"Skorost="<<skorost(a)<<"km/h"<<endl;
	cout<<"Skorost=";
	cin>>b;
	cout<<"Vreme="<<vreme(b)<<"h\n";
}
int skorost(int a)
{
	return S/a;
}
int vreme(int b)
{
	return S/b;
}