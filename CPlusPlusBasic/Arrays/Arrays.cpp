#include <iostream>
#include <iomanip>
using namespace std;

//������� �� �������� �� ��������� �� ���������� �� ������
void enterArray(int a[], int count);
//������� �� ��������� ����������� � ���������� �� ������
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
//������� �� �������� �� ��������� �� ���������� �� ������
void enterArray(int a[], int count)
{
    for (int arrayIndex = 0; arrayIndex < count; arrayIndex++)
    {
        cout << "array[" << arrayIndex << "]= ";
        cin >> a[arrayIndex];
    }
}
//������� �� ��������� ����������� � ���������� �� ������
void printArray(int a[], int count)
{
    for (int arrayIndex = 0; arrayIndex < count; arrayIndex++)
    {
        cout << "array[" << arrayIndex << "]=" << a[arrayIndex] << endl;
    }
}

