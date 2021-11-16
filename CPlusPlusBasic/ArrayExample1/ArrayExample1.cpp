#include <iostream>
using namespace std;

int main()
{
    int a = 5;
                    //0, 1, 2, 3, 4, 5, 6, 7
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    *(array + 8) = 9;//8
    array[9] = 10;//9

    cout << "sizeof(a): " << sizeof(a) << endl;
    cout << "a = " << a << endl;

    cout << "sizeof(array): " << sizeof(array) << endl;
    cout << "array = " << array << endl;

    cout << "array[0] = " << array[0] << endl;//*(array + 0)
    cout << "array[1] = " << array[1] << endl;//*(array + 1)
    cout << "array[2] = " << array[2] << endl;//*(array + 2)
    cout << "array[3] = " << array[3] << endl;//*(array + 3)
    cout << "array[4] = " << array[4] << endl;//*(array + 4)
    cout << "array[5] = " << array[5] << endl;//*(array + 5)
    cout << "array[6] = " << array[6] << endl;//*(array + 6)
    cout << "array[7] = " << array[7] << endl;//*(array + 7)
    cout << "array[8] = " << array[8] << endl;//*(array + 8)
    cout << "array[9] = " << array[9] << endl;//*(array + 9)

    cin >> array[0];
    cin >> array[1];
    cin >> array[2];
    cin >> array[3];
    cin >> array[4];
    cin >> array[5];
    cin >> array[6];
    cin >> array[7];
    cin >> array[8];
    cin >> array[9];


    cout << "sizeof(array[10]): " << sizeof(array[9]) << endl;
    cout << "array[9] = " << array[9] << endl;
}