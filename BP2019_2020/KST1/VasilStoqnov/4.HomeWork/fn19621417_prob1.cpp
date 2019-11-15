#include <iostream>
using namespace std;
int func(int minusche,int nulichka);
int main()
{
	int a, c;
	cout << "vuvedete a=";
	cin >> a;
	cout << "vuvedete c=";
	cin >> c;
	cout<<"y=sqrt(a+2)-2/c="<<func(a, c);
}
int func(int minusche, int nulichka)
{
	if (minusche < 0 && nulichka == 0)
		cout << "invalid output   ";
	
	
	else
		
	return sqrt(minusche + 2) - (2 / nulichka);
	
		
	

}