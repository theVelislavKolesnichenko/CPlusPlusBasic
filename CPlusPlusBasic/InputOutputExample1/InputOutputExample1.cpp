#include <iostream>
#include <string>
using namespace std;

int enter();

int main()
{
    string str, str1;
    int number;

    do
    {
        cout << "Enter number: ";
        cin >> number;

        cout << "Enter string: ";
        cin >> str;

        cout << "Enter string 1: ";
        cin.ignore(LLONG_MAX, '\n');
        getline(cin, str1);

        number = enter();
    } while (number == 0);

    cout << str << endl;
    cout << str1 << endl;

    return 0;
}

int enter() 
{
    int a;
    do
    {
        cout << "Enter a: ";
        cin.clear();
        cin.ignore(LLONG_MAX, '\n');
        cin >> a;
    } while (!cin);

    return a;
}



