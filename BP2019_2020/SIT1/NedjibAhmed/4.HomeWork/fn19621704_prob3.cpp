#include <iostream>

using std::cout;
using std::cin;

int NOK(int a, int b);
int NOD(int a, int b);

int main()
{
    int x, y;
    cout << "Enter two numbers to find their LCM:\n";
    cin >> x;
    cin >> y;
    cout << "LCM = " << NOK(x, y) << std::endl;
    cout << "GCD = " << NOD(x, y) << std:: endl;

    return 0;
   
}
int NOK(int a, int b)
{
    int lcm;

    if(a > b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }
        while(1) 
    {
    if( lcm % a==0 && lcm % b==0 ) 
    {
        return lcm;
        break;
    }
    lcm++;
    }

}
int NOD(int a, int b)
{
    if (a == 0)
    { 
        return b;
    } 
    return NOD(b % a, a); 
}