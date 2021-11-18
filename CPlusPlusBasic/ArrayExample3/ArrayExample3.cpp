#include <iostream>
using namespace std;

int main()
{
    char ch[] = { 'T', 'u', '-' };
    char ch1[] = "Tu-Varna";//\0
    char ch2[3] = "Tu";
    char ch3[5] = "Varn";
    char ch4[10];

    cout << "Enter characters:" << endl;
    //cin >> ch4;
    cin.get(ch4, 10);
    //Достъп до елемент от масив
    cout << endl << ch4[0] << endl;
    cout << endl << ch4[4] << endl;
    cout << endl << ch4[9] << endl;

    //Извеждане на масив
    cout << endl << ch1 << endl;
    cout << endl << ch2 << endl;
    cout << endl << ch3 << endl;
    cout << endl << ch4 << endl;
}