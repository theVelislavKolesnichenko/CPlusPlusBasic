#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int input(int a[], int free);
void output(int a[], int lenght);
void fileWrite(int a[], int count);
int fileRead(int a[], int count);

int main()
{
	int a[100];
	int count = fileRead(a, 100);
	do
	{
		system("cls");
		cout << "Input Array\n";

		count = input(a, 100 - count);
		cout << "Array Values:\n";
		output(a, count);
		fileWrite(a, count);
		system("pause");
	} while (true);

	return 0;
}

int input(int a[], int free)
{
	int count;
	do
	{
		cout << "Enter count between 1 - " 
			<< free << ": ";
		cin >> count;
	} while (count < 1 || count > free);

	int start = 100 - free;

	for (int i = start; i < start + count; i++)
	{
		//[56-58]
		a[i] =1 + rand() % (1 - 10 + 1);
	}

	return start + count;
}

void output(int a[], int length) 
{
	for (int i = 0; i < length; i++)
	{
		cout << "a[" << i << "]= " << a[i] << endl;
	}
}

void fileWrite(int a[], int count) 
{
	fstream file;
	file.open("in.txt", ios::out | ios::app);
	for (int i = 0; i < count; i++)
	{
		file << a[i];
		if (count > i+1) 
		{
			file << " ";
		}
	}

	file.close();
}

int fileRead(int a[], int count) 
{
	fstream file;
	file.open("in.txt", ios::in);

	int size = 0;

	while(!file.eof() && count > size)
	{
		file >> a[size];
		size++;
	}

	file.close();

	return size;
}