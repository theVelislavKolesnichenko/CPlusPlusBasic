#include <iostream>
using namespace std;

int main()
{
	int number = 20;

	cout << "Value of Number: "
		 << number << endl
	     << "Address of Number: "
		 << &number << endl;

	int* pointer = &number;

	cout << "Value of Pointer: "
		 << pointer << endl
		 << "Address of Pointer: "
		 << &pointer << endl
	     << "Value of Number from pointer: "
		 << *pointer << endl;
	(*pointer)++;
	cout << "Value of Number: "
		<< number << endl;
	//21       *= 21 -> 
	//(*pointer) = 21 * 21
	(*pointer) *= (*pointer);
	cout << number << endl;

	pointer++;
	cout << *pointer << endl;
	cout << pointer << endl;
}
