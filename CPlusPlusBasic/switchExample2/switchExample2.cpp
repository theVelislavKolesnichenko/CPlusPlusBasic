#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int number;
    cout << "Enter two number: " << endl;
    cin >> number;

    switch (number)
    {
        case 1:
        case 4:
        case 6:
        case 8:
        case 10:
            cout << "������� �� � ������!" << endl; 
        break;
        case 2:
        case 3:
        case 5:
        case 7:
            cout << "������� � ������!" << endl;
        break;
        default:
            cout << "�� ���� ����� � ���� �����!" << endl;
        break;
    }
}
