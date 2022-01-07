#include <iostream>
#include <iomanip>
using namespace std;

/*
	Дефиниране на матрица с 10 реда и 10 колони
	- функция за въвеждане със случайни числа [27,80]
	- функция за извеждане
	- функция за намиране сумата от редовете на матрицата
	- функция за намиране сумата от колоните на матрицата
*/

#define ARRAY_COUNT 10
#define ARRAY_SIZE 10

void enterMatrix(int matrix[][ARRAY_SIZE], int rows, int columns);
void printMatrix(int matrix[][ARRAY_SIZE], int rows, int columns);
void rowsSum(int matrix[][ARRAY_SIZE], int rows, int columns);
void columnsSum(int matrix[][ARRAY_SIZE], int rows, int columns);
void avg(int matrix[][ARRAY_SIZE], int rows, int columns);

int main()
{
	int matrix[ARRAY_COUNT][ARRAY_SIZE];

	cout << endl << "Enter Matrix" << endl;
	enterMatrix(matrix, ARRAY_COUNT, ARRAY_SIZE);

	cout << endl << "Print Matrix" << endl;
	printMatrix(matrix, ARRAY_COUNT, ARRAY_SIZE);

	cout << endl << "Print Row Sum" << endl;
	rowsSum(matrix, ARRAY_COUNT, ARRAY_SIZE);

	cout << endl << "Print Columns Sum" << endl;
	columnsSum(matrix, ARRAY_COUNT, ARRAY_SIZE);

	cout << endl << "Matrix Avg" << endl;
	avg(matrix, ARRAY_COUNT, ARRAY_SIZE);
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

void printMatrix(int matrix[][ARRAY_SIZE], int rows, int columns)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < columns; col++)
		{
			cout << setw(2) << matrix[row][col] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

/*
	4 5 6 -> sum -> 15
	7 8 9 -> sum -> 24
	1 2 3 -> sum ->  6
*/
void rowsSum(int matrix[][ARRAY_SIZE], int rows, int columns)
{
	for (int row = 0; row < rows; row++)
	{
		long sum = 0;
		for (int col = 0; col < columns; col++)
		{
			sum += matrix[row][col];
		}
		cout << "Sum of row " << row << " is " << sum << endl;
	}
}

/*
	4  5  6
	7  8  9
	1  2  3
	|  |  |
	V  V  V
	S  S  S
	u  u  u
	m  m  m
	|  |  |
	V  V  V
   12 15 18
*/
void columnsSum(int matrix[][ARRAY_SIZE], int rows, int columns)
{
	for (int col = 0; col < columns; col++)
	{
		long sum = 0;
		for (int row = 0; row < rows; row++)
		{
			sum += matrix[row][col];
		}
		cout << "Sum of column " << col << " is " << sum << endl;
	}
}

/*
	4  5  6
	7  8  9
	1  2  3
*/
void avg(int matrix[][10], int rows, int columns)
{
	double sum = 0;
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < columns; col++)
		{
			sum += matrix[row][col];
		}
	}
	cout << "Avg is " << sum / (rows * columns) << endl;
}