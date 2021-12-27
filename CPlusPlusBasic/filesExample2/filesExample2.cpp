#include <iostream>
#include <fstream>
using namespace std;

const string filename = "chisla.bin";

int file_in(int a[], int count);
void file_out(int a[], int count);
void array_print(int a[], int count);

int main()
{
	//10 -> 40
	int a[10] = { 
		1, 2, 3, 4, 5, 6, 7, 8, 9, 0 },
		b[20];
	//20 -> 80

	cout << "Text File write\n";
	file_out(a, 10);

	cout << "Text File read\n";
	int sizeOfArrayB = file_in(b, 20);

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
//20 -> 80
int file_in(int a[], int count)
{
	fstream file(filename, ios::binary | ios::in);

	file.seekg(0, ios::end);
	int size = file.tellg();//40
	file.seekg(0, ios::beg);

	if (size > count * sizeof(a))
	{
		size = count * sizeof(a);//80
	}

	file.read((char*)a, size);
	file.close();

	return size / sizeof(a);//броя на елементите в масива
}
void array_print(int a[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << a[i] << endl;
	}
}