#include <iostream>
#include <iomanip>
using namespace std;

/*
	Дефиниране на матрица с 10 реда и 10 колони
	- функция за въвеждане със случайни числа [27,80]
	- функция за извеждане стойностите и 
		намиране сумата от редовете на матрицата
	- функция за за извеждане стойностите и
		намиране сумата от колоните на матрицата
*/

#define ARRAY_COUNT 10
#define ARRAY_SIZE 10

void enterMatrix(int matrix[][ARRAY_SIZE], int rows, int columns);
void printMatrixWithSumByRows(int matrix[][ARRAY_SIZE], int rows, int columns);
void printMatrixWithSumByColumns(int matrix[][ARRAY_SIZE], int rows, int columns);
void printMatrix(int rows, int columns, int  matrix[][10]);
void printArrow(int columns);
void columnsSum(int matrix[][ARRAY_SIZE], int rows, int columns);

int main()
{
	int matrix[ARRAY_COUNT][ARRAY_SIZE];

	cout << endl << "Enter Matrix" << endl;
	enterMatrix(matrix, ARRAY_COUNT, ARRAY_SIZE);

	cout << "Print Matrix With Sum By Rows" << endl;
	printMatrixWithSumByRows(matrix, ARRAY_COUNT, ARRAY_SIZE);

	cout << "Print Matrix With Sum By Columns" << endl;
	printMatrixWithSumByColumns(matrix, ARRAY_COUNT, ARRAY_SIZE);
}

/*
	 2 3 6 -> 14
	 4 8 9 -> 21
	15 4 6 -> 25
*/
void printMatrixWithSumByRows(int matrix[][ARRAY_SIZE], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		long sum = 0;
		for (int j = 0; j < columns; j++)
		{
			sum += matrix[i][j];
			cout << setw(2) 
				 << matrix[i][j] 
				 << " ";
		}
		cout << "-> " << sum << endl;
	}
}

/*
	2  3  6
	4  8  9
	5  4  6
	|  |  |
	V  V  V
   11 15 21
*/
void printMatrixWithSumByColumns(int matrix[][ARRAY_SIZE], int rows, int columns)
{
	printMatrix(rows, columns, matrix);

	printArrow(columns);

	cout << endl;

	columnsSum(matrix, rows, columns);

	cout << endl;
}

void printMatrix(int rows, int columns, int  matrix[][10])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(3)
				<< matrix[i][j]
				<< " ";
		}
		cout << endl;
	}
}

void printArrow(int columns)
{
	for (int i(0); i < columns; i++)
	{
		cout << "  | ";
	}
	cout << endl;
	for (int i = 0; i < columns; i++)
	{
		cout << "  V ";
	}
}

void columnsSum(int matrix[][ARRAY_SIZE], int rows, int columns)
{
	for (int col = 0; col < columns; col++)
	{
		long sum = 0;
		for (int row = 0; row < rows; row++)
		{
			sum += matrix[row][col];
		}
		cout << setw(3) << sum << " ";
	}
}

void enterMatrix(int matrix[][ARRAY_SIZE], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = 27 + rand() % 54;
		}
	}
}
