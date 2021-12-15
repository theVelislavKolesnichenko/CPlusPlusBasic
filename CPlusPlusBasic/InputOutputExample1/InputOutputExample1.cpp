#include <iostream>
using namespace std;

int enter();

int main()
{
    string str;
    int number;

    do
    {
        cout << "Enter string: ";
        cin >> str;

        cout << "Enter number: ";
        cin >> number;
        number = enter();
    } while (number == 0);



    return 0;
}

int enter() 
{
    int a;
    do
    {
        cin.clear();
        cin.ignore(LLONG_MAX, '\n');
        cin >> a;
    } while (!cin);

    return a;
}



