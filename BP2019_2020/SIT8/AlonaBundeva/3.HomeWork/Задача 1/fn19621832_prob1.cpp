#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 int a, b;
 cout << "Enter value for a: " << endl;
 cin >> a;
 cout << "Enter value for b: " << endl;
 cin >> b;
 cout << (a && b) << endl;
 cout << (a || b)<<endl;
 cout << (a ^ b) << endl;
 cout << (~ b)<<endl;
 cout.setf(ios::left);
 cout << setw(5) << a << setw(5) << b << endl;
 cout.setf(ios::right);
 cout << setw(4) << a << setw(4) << b << endl;
 return 0;
}