#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int A, B;
    float C, D;

    cout << "What is A?" << std::endl;
    cin >> A;
    cout << "What is B?" << std::endl;
    cin >> B;
    C = A/B;
    D = (float)A/B;
    cout << "C= " << C << std::endl; //получава се цяло число, защото променливите са тип int
    cout << "D= " << D << std::endl; //може да се получи число с десетична заптая, защото едната променлива е конвертирана в тип float 

    return 0;

}