#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch1[9] = "Tu-Varna";//\0//9
    string str;
    cout << str << endl;
    cout << sizeof(str) << endl;
    str = "TU-Varna TU-Varna TU-Varna TU-Varna";
    cout << str << " : " << str.length() << endl;

    str = "TU";
    cout << str << " : " << str.length() << endl;

    cout << "Enter string: ";
    
    //cin >> str;
    //cout << "cin >> " << str << endl;

    getline(cin, str);
    cout << "getline " << str << endl;

    cout << str[0] << endl;
    cout << str.length() << endl;
    cout << str[str.length() - 1] << endl;
    cout << sizeof(str) << endl;

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << endl;
    }
}
