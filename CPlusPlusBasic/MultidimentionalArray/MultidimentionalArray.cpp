#include <iostream>
using namespace std;
void array_in(int array[][10], int rows);
void array_print(int array[][10], int rows);
int main()
{
	int a[10][10];
	cout << "Enter Multidimensional Arrays [10, 10]: " << endl;
		array_in(a, 10);
	cout << "Enter Multidimensional Arrays: " << endl;
	array_print(a, 10);
	return 0;
}
void array_in(int array[][10], int rows)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			cout << "array[" << row << "][" << col << "]= ";
			array[row][col] = row*col;
		}
	}
}
void array_print(int array[][10], int rows)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			cout << "array[" << row << "][" << col << "]= ";
			cout << array[row][col];
		}
		cout << endl;
	}
}