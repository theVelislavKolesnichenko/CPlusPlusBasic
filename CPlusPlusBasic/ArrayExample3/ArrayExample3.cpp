#include <iostream>
using namespace std;

int main()
{
     int array[] = {   1,   2,   3,   4,   5,   6,   7,   8,    9 };
    char   ch[9] = { 'T', 'u', '-', 'V', 'a', 'r', 'n', 'a', '\0' };//4 

    cout << "array = " << sizeof(array) << " : " << array << endl;
    cout << "   ch =  " << sizeof(ch) << " : " << ch << endl;
}