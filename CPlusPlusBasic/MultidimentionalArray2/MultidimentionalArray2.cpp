#include <iostream>
#include <iomanip>
using namespace std;

/*
	Дефиниране на матрица с 10 реда и 10 колони
	- функция за въвеждане със случайни числа [27,80]
	- функция за извеждане
	- функция за извеждане на левия диагонал
	- функция за извеждане на десния диагонал
*/

void enterMatrix(int matrix[][10], int rows, int columns);
void printLeftDiagonal(int matrix[][10], int rows, int columns);
void printRightDiagonal(int matrix[][10], int rows, int columns);
void printMatrix(int matrix[][10], int rows, int columns);

int main()
{
	int matrix[10][10];

	cout << endl << "Enter Matrix" << endl;
	enterMatrix(matrix, 10, 10);

	cout << endl << "Print Matrix" << endl;
	printMatrix(matrix, 10, 10);

	cout << endl << "Print left diagonal" << endl;
	printLeftDiagonal(matrix, 10, 10);

	cout << endl <<"Print right diagonal" << endl;
	printRightDiagonal(matrix, 10, 10);
}

void enterMatrix(int matrix[][10], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = 27 + rand() % 54;
		}
	}
}

/*
	4 - -
	- 5 -
	- - 6
*/
void printLeftDiagonal(int matrix[][10], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		cout << matrix[i][i] << "\t";
	}
}

/*
	- - 4
	- 5 -
	6 - -
*/
void printRightDiagonal(int matrix[][10], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{                         //(3 - 1) - 2 -> 0
		cout << matrix[i][(columns - 1) - i] << "\t";
	}
}

void printMatrix(int matrix[][10], int rows, int columns)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			cout << setw(2) << matrix[row][col] << " ";
		}
		cout << endl;
	}
}