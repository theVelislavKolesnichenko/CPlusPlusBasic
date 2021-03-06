# Многомерен масив

Елементите на масива могат да бъдат от всякакъв тип данни, включително масиви! Масив от масиви се нарича ‎‎многоизмерен масив‎‎.‎

## Деклариране

```c++
//Масив от две измерения. Десет масива с по десет елемента
int array[10][10]; 
//Масив от три измерения. Десет масива от по десет масива с по десет елемента
int array[10][10][10]; 
```

## Достъп до елементите на многомерен масив

```c++
//Достъп до елемента с индекс 2 от масива с индекс 1
cout << array[1][2] << endl; 
//Достъп до елемента с индекс 1 в масива с индекс 6 от масива с индекс 5
cout << array[5][6][1] << endl; 
```

Използването на масови с повече от две измерения изисква повече усилия, затова те са рядко използвани.

## Матрици

За назоваване на многомерните масиви с две измерения се използва термина матрица.

## Деклариране на матрица без начални стойности

```c++
int array[10][10]; 
```

## Деклариране на матрица с размер и начални стойности

```c++
int array[3][5] =
{
    { 1, 2, 3, 4, 5 }, // ред 0
    { 6, 7, 8, 9, 10 }, // ред 1
    { 11, 12, 13, 14, 15 } // ред 2
};
```

## Деклариране на матрица с размер и частични начални стойности

```c++
int array[3][5] =
{
    { 1, 2 }, // ред 0
    { 6, 7, 8, 9 }, // ред 1
    { 11, 12, 13 } // ред 2
};
```

## Деклариране на матрица с размер на колоните и начални стойности

```c++
int array[][5] =
{
    { 1, 2, 3, 4, 5 }, // ред 0
    { 6, 7, 8, 9, 10 }, // ред 1
    { 11, 12, 13, 14, 15 } // ред 2
};
```

## Деклариране на матрица начални стойности, без размер на редове и колони

```c++
int array[][] =
{
    { 1, 2, 3 },
    { 6, 7, 8 },
};
```

## Достъп до елементите на матрица с цикъл

```c++
for (int row = 0; row < numRows; ++row) // цикъл за обхождане на редовете
{
        for (int col = 0; col < numCols; ++col) // цикъл за обхождане на колоните
        {
            cout << "array[" << row << "][" << col << "]= ";
            cout << array[row][col] << " ";
        }
        cout << endl
}
```

## Предаване на матрица към функция

При декларирането на функция която ще обработва многомерни масиви можем да пропуснем броя на редовете но задължително трябва да окажем броя на колоните в матрицата

```c++
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
```
