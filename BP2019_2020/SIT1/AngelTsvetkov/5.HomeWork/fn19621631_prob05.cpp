#include <iostream>
using namespace std;
int funkciq(int n);
int main()
{
	int n;
	cout << "Insert 10 numbers: " << endl;
	cin >> n;
	cout << "Rezultat: "<< funkciq(n)<<endl;
	return 0;
}
int funkciq(int n)
{
	int k;
	int count =1;
	int result=0;
	for (k=n; count<10; count++)
	{
		cin >> k;
		result+=k;
	}
	return (result+n)/10;
}