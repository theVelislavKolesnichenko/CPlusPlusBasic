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
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, b[20];

	cout << "Text File write\n";
	file_out(a, 10);

	cout << "Text File read\n";
	int sizeOfarrayB = file_in_v2(b, 20);

	cout << "Array Print\n";
	array_print(b, sizeOfarrayB);

	return 0;
}
void file_out(int a[], int count)
{
	fstream file;
	file.open(filename, ios::out);

	for (int i = 0; i < count; i++)
	{
	  //cout << a[i] << endl;
		file << a[i];

		if ((i + 1) < count) 
		{
			file << endl;
		}
	}

	file.close();
}

void file_in_v1(int a[], int count)
{
	fstream file;
	file.open(filename, ios::in);

	for (int i = 0; i < count; i++)
	{
	  //cin >> a[i];
		file >> a[i];
	}

	file.close();
}

int file_in_v2(int a[], int count)
{
	fstream file;
	file.open(filename, ios::in);
	int index = 0;
	while (!file.eof() && count > index)
	{
		file >> a[index];
		index++;
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