#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A = 576;
    cout << " Units " << A % 10;
    cout << " Tens " << A / 10 % 10;
    cout << " Hundreds " << A / 100 % 10 << endl;




    return 0;
}
