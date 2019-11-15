#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b, c, AVG;

    cout << "Enter 3 whole numbers" << std::endl;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;

    AVG = (a + b + c)/3;
    cout << "The average of a, b, c is " << AVG << std::endl;

    return 0;

}