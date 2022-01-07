#include <iostream>
#include <iomanip>
using namespace std;

void array_in(int array[][10], int rows);
void array_print(int array[][10], int rows);

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	int array[3][5] =
	{
		{  1,  2,  3,  4,  5 }, // ред 0 -> 1 масив
		{  6,  7,  8,  9, 10 }, // ред 1 -> 2 масив
		{ 11, 12, 13, 14, 15 } // ред 2 -> 3 масив
	};

	int a[10][10];	

	cout << "Enter Multidimensional Arrays [10, 10]: " << endl;
	array_in(a, 10);

	cout << "Enter Multidimensional Arrays: " << endl;
	array_print(a, 10);
	return 0;
}

//for (int col = 0; col < 10; col++)
//{
//	array[col] = col;
//}

void array_in(int array[][10], int rows)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			array[row][col] = row * col;
		}
	}
}

void array_print(int array[][10], int rows)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			cout << "array[" << row << "][" << col 
				<< "]= ";
			cout << setw(2) << array[row][col] 
				<< " ";
		}
		cout << endl;
	}
}