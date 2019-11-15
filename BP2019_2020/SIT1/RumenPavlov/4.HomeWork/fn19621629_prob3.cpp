#include <iostream>
using namespace std;
int lcmf(int a, int b);
int gcdf(int a, int b);
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin>>a;
	cin>>b;
    lcmf(a, b);
	gcdf(a, b);
    return 0;
}
int lcmf(int a, int b)
{
	int LCM;
		if(a>b)
		LCM=a;
	else
		LCM=b;
    do
    {
        if (LCM % a == 0 && LCM % b == 0)
        {
            cout << "LCM = " << LCM<<endl;
            break;
        }
        else
            ++LCM;
    } while (true);
	return LCM;
}
int gcdf(int a, int b)
{   
	int gcd;
    for (int i = 1; i <= a && i <= b; i++) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            gcd = i;
        }
	}
	cout<<"GCD = "<<gcd<<endl;
		 return gcd; 
}