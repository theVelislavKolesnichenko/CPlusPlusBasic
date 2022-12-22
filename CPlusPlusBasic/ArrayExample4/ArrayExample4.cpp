#include <iostream>
using namespace std;

int main()
{
    char ch[] = { 'T', 'u', '-' };//4
    char ch1[] = "Tu-Varna";//\0//9
    char ch2[3] = "Tu";//\0
    char ch3[6] = "Varna";//\0
    char ch4[10];

    cout << "Enter characters:" << endl;
    //cin >> ch4;
    cin.getline(ch4, 10);   
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
