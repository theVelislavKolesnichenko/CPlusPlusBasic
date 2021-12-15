#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Book {
	int number;
	int count;

	char title[50];
	char author[50];
	int pages;
	double pice;
};

#define booksCount 3

void bookIn(Book books[], int count);
void bookOut(Book books[], int count);
void bookBinaryFileSave(Book books[], int count);
void bookBinaryFileRead(Book books[]);
void bookTextFileSave(Book books[], int count);
void bookTextFileRead(Book books[]);
void bookSort(Book books[], int count);
void sale(Book books[], int count);

int main()
{
	Book newBooks[booksCount];
	int op;
	do {
		cout << "1. Enter Books" << endl;
		cout << "2. Print Books" << endl;
		cout << "3. Save Books in binary file" << endl;
		cout << "4. Read Books from binary file" << endl;
		cout << "5. Save Books in text file" << endl;
		cout << "6. Read Books from text file" << endl;
		cout << "7. Sort array" << endl;
		cout << "8. Sale book" << endl;
		cout << "0. Exit" << endl;
		cout << "Select option: ";
		cin >> op;
		switch (op)
		{
		case 1:
		{
			bookIn(newBooks, booksCount);
			system("pause");
		}
		break;
		case 2:
		{
			bookOut(newBooks, booksCount);
			system("pause");
		}
		break;
		case 3:
		{
			bookBinaryFileSave(newBooks, booksCount);
			system("pause");
		}
		break;
		case 4:
		{
			bookBinaryFileRead(newBooks);
			system("pause");
		}
		break;
		case 5:
		{
			bookTextFileSave(newBooks, booksCount);
			system("pause");
		}
		break;
		case 6:
		{
			bookTextFileRead(newBooks);
			system("pause");
		}
		break;
		case 7:
		{
			bookSort(newBooks, booksCount);
			system("pause");
		}
		break;
		case 8:
		{
			sale(newBooks, booksCount);
			system("pause");
		}
		break;
		case 0:
		{
			cout << "Exit with <y> : ";
			char ch;
			cin >> ch;
			if (ch != 'y' && ch != 'Y')
			{
				op = -1;
			}
		}
		break;
		default:
			cout << "Invalid operatin" << endl;
			system("pause");
			cin.ignore();
			break;
		}
		system("cls");
	} while (op != 0);
	return 0;
}

void bookIn(Book books[], int count)
{
	cout << "1. Enter Books" << endl;
	srand(time(0));
	for (int i = 0; i < count; i++)
	{
		//cin.ignore();
		cout << "Enter number "; cin >> books[i].number;
		cout << "Enter title "; cin.getline(books[i].title, 50);
		cout << "Enter author "; cin.getline(books[i].author, 50);
		cout << "Enter pages "; cin >> books[i].pages;
		cout << "Enter price "; cin >> books[i].pice;
		cout << "Enter count "; books[i].count = 1 + rand() % 50;
	}
}

void bookOut(Book books[], int count)
{
	cout << "2. Print Books" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "Book " << i << endl;
		cout << "Number: " << books[i].number << endl;
		cout << "Title: " << books[i].title << endl;
		cout << "Author: " << books[i].author << endl;
		cout << "Pages: " << books[i].pages << endl;
		cout << "Price: " << books[i].pice << endl;
		cout << "Count: " << books[i].count << endl;
	}
}

void bookBinaryFileSave(Book books[], int count)
{
	cout << "3. Save Books in binary file" << endl;
	fstream file;
	file.open("Books.bin", ios::binary | ios::out);
	file.write((char*)books, count * (sizeof(Book)));
	file.close();
}

void bookBinaryFileRead(Book books[])
{
	cout << "4. Read Books from binaty file" << endl;
	fstream file;
	file.open("Books.bin", ios::binary | ios::in);
	file.seekg(0L, ios::end);
	long pos = (long)file.tellg();
	file.close();
	int n = pos / (sizeof(Book));
	file.open("Books.bin", ios::binary | ios::in);
	file.read((char*)books, n * (sizeof(Book)));
	file.close();
}

void bookTextFileSave(Book books[], int count)
{
	cout << "5. Save Books in text file" << endl;
	fstream file;
	file.open("Books.txt", ios::out);
	for (int i = 0; i < count; i++)
	{
		file << books[i].title << endl;
		file << books[i].author << endl;
		file << books[i].pages << endl;
		file << books[i].pice << endl;
	}

	file.close();
}

void bookTextFileRead(Book books[])
{
	cout << "6. Read Books from text file" << endl;
	fstream file;
	file.open("Books.txt", ios::in);
	for (int i = 0; i < booksCount; i++)
	{
		file.getline(books[i].title, 50);
		file.getline(books[i].author, 50);
		file >> books[i].pages;
		file >> books[i].pice;
		file.ignore();
	}
	file.close();
}

void bookSort(Book books[], int count)
{
	cout << "7. Sort array" << endl;
	int i, j;

	for (i = 0; i < count - 1; i++) 
	{
		for (j = 0; j < count - i - 1; j++) 
		{
			if (books[j].pice > books[j + 1].pice)
			{
				Book temp = books[j];
				books[j] = books[j + 1];
				books[j + 1] = temp;
			}
		}
	}
}

void sale(Book books[], int count) 
{
	cout << "8. Sale book" << endl;
	cout << "Enter number ";
	int number;
	cin >> number;

	for (int i = 0; i < count; i++)
	{
		if (books[i].number == number) 
		{
			if (books[i].count > 0)
			{
				books[i].count--;
			}
			break;
		}
	}
}