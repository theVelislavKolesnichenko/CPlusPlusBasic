#include <iostream>

using std::cout;
using std::cin;

float sumMult(float a, float b, float sum);

int main()
{
    float a, b, sum;

    do
    {
        cout << "Input two positive numbers.\n" << "Input a zero to end program.\n" << "a= ";
        cin >> a;
        cout << "b= ";
        cin >> b;
        
        if(a < 0 || b < 0)
        {
            cout << "You must input two positive numbers.\n\n";
        }
        else
        {
            cout << "a * b = " << sumMult(a, b, sum) << std::endl;   
        }

    } while ((a != 0) && (b != 0));

    return 0;
}
float sumMult(float a, float b, float sum)
{
    sum = (a) * (b);

    return sum;
}