#include <iostream>
#include <fstream>
using namespace std;

const string filename = "chisla.bin";

int file_in(int a[], int count);
void file_out(int a[], int count);
void array_print(int a[], int count);

int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, b[20];

	cout << "Text File write\n";
	file_out(a, 10);

	cout << "Text File read\n";
	int sizeOfArrayB = file_in(b, 10);

	cout << "Array Print\n";
	array_print(b, sizeOfArrayB);

	return 0;
}

void file_out(int a[], int count)
{
	fstream file(filename, ios::binary | ios::out);
	file.write((char*)a, sizeof(a) * count);
	file.close();
}

int file_in(int a[], int count)
{
	fstream file(filename, ios::binary | ios::in);

	file.seekg(0, ios::end);
	int size = file.tellg();
	file.seekg(0, ios::beg);

	if (size > count * sizeof(int))
	{
		size = count * sizeof(int);
	}

	file.read((char*)a, size);
	file.close();

	return size / sizeof(int);
}
void array_print(int a[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << a[i] << endl;
	}
}