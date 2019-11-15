#include <iostream>
using namespace std;
int br(int count);
int main()
{
	int b;
	cout << "vyvedete b:";
	cin >> b;
	cout<<br(b)<<endl;
	return 0;

}
int br(int count)
{ 
	
	int sum= count;
	for (int i = 1; i < count; i++)
	{
		cout<<i;
	}
	return sum;
}