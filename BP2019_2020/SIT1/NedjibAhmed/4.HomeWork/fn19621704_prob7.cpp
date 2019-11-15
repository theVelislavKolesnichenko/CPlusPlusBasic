#include <iostream>

using std::cout;
using std::cin;

int check(float a);

int main()
{
    float x;
    int pos = 0, neg = 0;
    
    cout << "Enter several nummbers\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        if (check(x) > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    cout << "There are " << pos << " positive numbers and " << neg << " negative numbers.\n";


    return 0;
}
int check(float a)
{
    int p = 1, n = -1;

    if (a >= 0)
    {
        return p;
    }
    else
    {
        return n;
    }

}