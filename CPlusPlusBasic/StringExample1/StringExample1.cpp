#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << str << endl;
    cout << sizeof(str) << endl;
    str = "TU-Varna TU-Varna TU-Varna TU-Varna";
    cout << str << endl;

    cout << "Enter string: ";
    
    //cin >> str;
    //cout << "cin >> " << str << endl;

    getline(cin, str);
    cout << "getline " << str << endl;

    cout << str[0] << endl;
    cout << str.length() << endl;
    cout << str[str.length()-1] << endl;
    cout << sizeof(str) << endl;
    //char ch[5];
    //cout << "Enter ch: ";
    //cin.get(ch, 5);
    //cout << ch << endl;
}
