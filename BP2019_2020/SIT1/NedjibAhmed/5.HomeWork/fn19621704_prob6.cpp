#include<iostream>

using std::cin;
using std::cout;

float Sum3(float a, float b, float c);

int main()
{
    float a, b, c;
    do
    {
        cout << "Input 3 numbers to find their sum\n" << "Input one 0 to end program\n" << "a= ";
        cin >> a;
        cout << "b= ";
        cin >> b;
        cout << "c= ";
        cin >> c;

        cout << "a + b + c = " << Sum3(a, b, c) << std::endl;

    }while((a != 0) && (b != 0) && (c != 0));

    return 0;
}
float Sum3(float a, float b, float c)
{
    float sum;

    sum = a + b + c;
    
    return sum;
}