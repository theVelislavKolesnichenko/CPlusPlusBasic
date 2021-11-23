#include <iostream> 
using namespace std;

// ��������� �� ��������
int square1(int n);

//��������� �� ��������
void square2(int* n);

//��������� �� �����
void square3(int& n);

int main()
{
    //��������� �� ������� � ��������� �� �������� 
    int n1 = 8;
    cout << "address of n1: " << &n1
        << " Value of n1: " << n1 << endl;
    cout << "Square of n1: " << square1(n1) << "\n";
    cout << "Value of n1: " << n1 << "\n";

    //��������� �� ������� � ��������� �� ��������
    cout << "address of n1: " << &n1
        << " Value of n1: " << n1 << endl;
    int* ptr = &n1;
    square2(ptr);
    cout << "Value of n1: " << n1 << "\n";

    //��������� �� ������� � ��������� �� �����
    cout << "address of n1: " << &n1
        << " Value of n1: " << n1 << endl;
    square3(n1);
    cout << "Value of n1: " << n1 << "\n";

    return 0;
}

// ��������� �� ��������
int square1(int n)
{
    cout << "address of n in square1: " << &n
        << " Value of n in square1:  " << n << endl;
    n *= n;
    return n;
}

//��������� �� ��������
void square2(int* n)
{
    cout << "address of n in square2: " << &n
        << " Value of n in square2:  " << n << endl;
    *n *= *n;
}

//��������� �� �����
void square3(int& n)
{
    cout << "address of n in square3: " << &n
        << " Value of n in square3:  " << n << endl;
    n *= n;
}