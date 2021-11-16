#include <iostream>
#include <iomanip>
using namespace std;

//Функция за добавяне на стойности за елементите на масива
void enterArray(int a[], int count);
//Функция за извеждане стойностите в елементите на масива
void printArray(int a[], int count);
int main()
{
    const int arrayCount = 10;
    int array[arrayCount];
    cout << "Enter array value: " << endl;
    enterArray(array, arrayCount);
    cout << "Print array value:" << endl;
    printArray(array, arrayCount);
}
//Функция за добавяне на стойности за елементите на масива
void enterArray(int a[], int count)
{
    for (int arrayIndex = 0; arrayIndex < count; arrayIndex++)
    {
        cout << "array[" << arrayIndex << "]= ";
        cin >> a[arrayIndex];
    }
}
//Функция за извеждане стойностите в елементите на масива
void printArray(int a[], int count)
{
    for (int arrayIndex = 0; arrayIndex < count; arrayIndex++)
    {
        cout << "array[" << arrayIndex << "]=" << a[arrayIndex] << endl;
    }
}

