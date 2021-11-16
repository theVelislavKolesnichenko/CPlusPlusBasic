#include <iostream>
#include <iomanip>
using namespace std;

//������� �� �������� �� ��������� �� ���������� �� ������
void enterArray(int a[], int count);
//������� �� ��������� ����������� � ���������� �� ������
void printArray(int a[], int count);
//������� �� ��������� ����������� � ���������� �� ������
void updateArray(int a[], int count);
int main()
{
    const int arrayCount = 10;
    int array[arrayCount];
    //[1,10]
    cout << "Enter array value: " << endl;
    enterArray(array, arrayCount);
    cout << "Print array value:" << endl;
    printArray(array, arrayCount);
    cout << "Update array value" << endl;
    updateArray(array, arrayCount);
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

void updateArray(int a[], int count) 
{
    for (int index = 0; index < count; index++)
    {
        //1 % 2 -> !1 -> false
        //2 % 2 -> !0 -> true
        //3 % 2 -> !1 -> false
        if((a[index] % 2) == 0) //!(a[index] % 2)
            a[index] = a[index] * 5;
        else if (!(a[index] % 5)) {
            a[index] /= 5;
        }
    }
}