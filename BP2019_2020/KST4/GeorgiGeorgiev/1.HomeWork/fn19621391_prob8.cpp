#include <iostream>

using namespace std;

int main()
{
    //  x = (2y + 5)/(14 - y/3)
    double y;
    cout << "y = ";
    cin >> y;
    cout << "x = " << (2*y + 5)/(14 - y/3) << endl;

    return 0;
}
