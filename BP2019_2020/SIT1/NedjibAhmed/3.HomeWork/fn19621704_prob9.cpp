#include <iostream>

using std::cin;
using std::cout; 

void f_age(int x);

int main()
{
    int age;
    cout << "How old are they?" << std::endl;
    cin >> age;
    f_age(age);

    return 0;
}
void f_age(int x)
{
    if(x == 0)
    {
        cout << "Baby";
    }
    else if (x >= 1 && x < 3)
    {
        cout << "Toddler";
    }
    else if (x >= 3 && x < 5)
    {
        cout << "Preschool";
    }
    else if (x >= 5 && x <= 12)
    {
        cout << "Gradeschool";
    }
    else if (x >= 13 && x < 18)
    {
        cout << "Teen";
    }
    else if (x >= 18 && x < 21)
    {
        cout << "Young Adult";
    }
    else
    {
        cout << "The age must be between 0 and 21.";
    }
    
}