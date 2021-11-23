#include <iostream> 
using namespace std;

// Предаване по стойност
int square1(int n);

//Предаване на указател
void square2(int* n);

//Предаване на адрес
void square3(int& n);

int main()
{
    //Извикване на функция с предаване на стойност 
    int n1 = 8;
    cout << "address of n1: " << &n1
        << " Value of n1: " << n1 << endl;
    cout << "Square of n1: " << square1(n1) << "\n";
    cout << "Value of n1: " << n1 << "\n";

    //Извикване на функция с предаване на указател
    cout << "address of n1: " << &n1
        << " Value of n1: " << n1 << endl;
    int* ptr = &n1;
    square2(ptr);
    cout << "Value of n1: " << n1 << "\n";

    //Извикване на функция с предаване на адрес
    cout << "address of n1: " << &n1
        << " Value of n1: " << n1 << endl;
    square3(n1);
    cout << "Value of n1: " << n1 << "\n";

    return 0;
}

// Предаване по стойност
int square1(int n)
{
    cout << "address of n in square1: " << &n
        << " Value of n in square1:  " << n << endl;
    n *= n;
    return n;
}

//Предаване на указател
void square2(int* n)
{
    cout << "address of n in square2: " << &n
        << " Value of n in square2:  " << n << endl;
    *n *= *n;
}

//Предаване по адрес
void square3(int& n)
{
    cout << "address of n in square3: " << &n
        << " Value of n in square3:  " << n << endl;
    n *= n;
}