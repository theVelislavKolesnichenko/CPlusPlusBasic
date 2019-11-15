#include <iostream>
using namespace std;
int z(double t);
int n(double v);
const int S=987;
int main()
{
	int t, v;
	cout<<"t=";
	cin>>t;
	cout<<z(t)<<endl;
	cout<<"v=";
	cin>>v;
	cout<<n(v);

	return 0;
}
int z(double t)
{
	return S/t;
}
int n(double v)
{
	return S/v;
}

