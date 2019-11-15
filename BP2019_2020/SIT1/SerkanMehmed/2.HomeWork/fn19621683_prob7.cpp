#include <iostream>
using namespace std;
double funkciq(double y);
int main()
{ 
	int y;
	cout<<"Insert y=";
	cin>>y;
	
	cout<<funkciq(y);

	return 0;
}		
	double funkciq(double y)
	{
			return 2*(2*y+5)/(14-y/3);
	}
