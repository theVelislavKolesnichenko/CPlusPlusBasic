#include <iostream>
#include <fstream>
using namespace std;

const string filename = "chisla.bin";

void file_in(int a[], int count);
void file_out(int a[], int count);
void array_print(int a[], int count);

int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, b[20];

	cout << "Text File write";
	file_out(a, 10);

	cout << "Text File read";
	file_in(b, 10);

	cout << "Array Print";
	array_print(b, 10);

	return 0;
}
void file_out(int a[], int count)
{
	ofstream file(filename, ios::binary);
	file.write((char*)a, sizeof(a) * count);
	file.close();
}
void file_in(int a[], int count)
{
	fstream file(filename, ios::binary);

	file.seekg(0, ios::end);
	int n = file.tellg();
	file.seekg(0, ios::beg);

	if (n <= count * sizeof(int)) 
	{
		file.read((char*)a, n);
	}
	else 
	{
		file.read((char*)a, count);
	}

	file.close();
}
void array_print(int a[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << a[i] << endl;
	}
}