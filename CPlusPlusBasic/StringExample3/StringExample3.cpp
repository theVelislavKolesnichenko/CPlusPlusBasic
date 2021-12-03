#include <iostream>
using namespace std;

int main()
{
    string str1 = "TU ";

    string str2 = "Varna";

    cout << "str2 == str1 = ?" << (str2 == str1) << endl;
    cout << "str2 < str1 = ?" << (str2 < str1) << endl;
    cout << "str2 > str1 = ?" << (str2 > str1) << endl;

    string str3 = str1 + str2;

    cout << "Value: " << str3 << " Size: " << str3.length() << endl;

    string newStr3 = str3.substr(3, 5);
    cout << "Value: " << newStr3 << " Size: " << newStr3.length() << endl;
}

