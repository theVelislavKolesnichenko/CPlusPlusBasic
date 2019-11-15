#include <iostream>
#include <iomanip>
using namespace std;

void f1(int a);

int main()
{
	int a=5;
	f1(a);
	return 0;
}
void f1(int a)
{
while(a==0)
{
cout<<setw(a)<<setfill('%')<<" "<<endl;
a--;
}

}

