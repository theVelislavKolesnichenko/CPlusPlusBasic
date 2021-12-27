#include <iostream>
#include <fstream>
using namespace std;

const string filename = "chisla.txt";

void file_in_v1(int a[], int count);
int file_in_v2(int a[], int count);
int file_in_v3(int a[], int count);
void file_out(int a[], int count);
void array_print(int a[], int count);

int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, 
		b[20];

	cout << "Text File write\n";
	//file_out(a, 10);

	cout << "Text File read\n";
	//file_in_v1(b, 20);
	int sizeOfarrayB = file_in_v2(b, 20);

	cout << "Array Print\n";
	//array_print(b, 20);
	array_print(b, sizeOfarrayB);

	return 0;
}
void file_out(int a[], int count)
{
	fstream fout;
	fout.open(filename, ios::out);

	for (int i = 0; i < count; i++)
	{
	  //cout << a[i] << endl;
		fout << a[i];

		if ((i + 1) < count) 
		{
			fout << endl;
		}
	}

	fout.close();
}

void file_in_v1(int a[], int count)
{
	fstream fin;
	fin.open(filename, ios::in);

	for (int i = 0; i < count; i++)
	{
	  //cin >> a[i];
		fin >> a[i];
	}

	fin.close();
}

int file_in_v2(int a[], int count)
{
	fstream file;
	file.open(filename, ios::in);
	int index = 0;// Прочетените стойности
	while (!file.eof() && count > index)
	{
		if (file.fail())
		{
			cout << "File red fail";
		}

		file >> a[index];

		if (file.fail())
		{
			file.clear();
			file.ignore(LLONG_MAX, '\n');
			cout << "File red fail";
		}
		else 
		{
			index++;
		}
	}

	file.close();

	return index;
}

int file_in_v3(int a[], int count)
{
	fstream file;
	file.open(filename, ios::in);

	int index;
	for (index = 0; index < count && !file.eof(); index++)
	{
		file >> a[index];
	}

	file.close();

	return index;
}

void array_print(int a[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << a[i] << endl;
	}
}