#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

struct Book {
	int number;
	int count;

	//string title;
	char title[50];
	char author[50];
	int pages;
	double pice;
};

#define booksCount 25

void bookIn(Book books[], int count);
void bookOut(Book books[], int start, int end);
void bookBinaryFileSave(Book books[], int count);
int bookBinaryFileRead(Book books[], int count);
void bookTextFileSave(Book books[], int count);
void bookTextFileRead(Book books[]);
void bookSort(Book books[], int count);
void printBookByAuthor(Book books[], int count);
int maxBookCount(Book books[], int count);
void sortBookByAuthor(Book books[], int count);
void sale(Book books[], int count);
void saveBookInFile(Book books[], int count);

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Book newBooks[booksCount];
	int op;
	do {
		cout << "1. Enter Books" << endl;
		cout << "2. Print Books" << endl;
		cout << "3. Files with Books" << endl;

		//cout << "3. Save Books in binary file" << endl;
		//cout << "4. Read Books from binary file" << endl;
		//cout << "5. Save Books in text file" << endl;
		//cout << "6. Read Books from text file" << endl;

		cout << "4. Sort array" << endl;
		cout << "5. Sale book" << endl;
		cout << "6. Odit book" << endl;
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
			bookOut(newBooks, 0, booksCount);
			system("pause");
		}
		break;
		case 3:
		{
			system("cls");
			saveBookInFile(newBooks, booksCount);
		}
		break;
		case 4:
		{
			bookSort(newBooks, booksCount);
			system("pause");
		}
		break;
		case 5:
		{
			sale(newBooks, booksCount);
			system("pause");
		}
		break;
		case 6:
		{
			printBookByAuthor(newBooks, booksCount);
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

void saveBookInFile(Book books[], int count) 
{
	int op;
	do {
		cout << "1. Save Books in binary file" << endl;
		cout << "2. Read Books from binary file" << endl;
		cout << "3. Save Books in text file" << endl;
		cout << "4. Read Books from text file" << endl;
		cout << "0. Back" << endl;
		cout << "Select option: ";
		cin >> op;
		switch (op)
		{
		case 1:
		{
			bookBinaryFileSave(books, count);
			system("pause");
		}
		break;
		case 2:
		{
			bookBinaryFileRead(books, count);
			system("pause");
		}
		break;
		case 3:
		{
			bookTextFileSave(books, count);
			system("pause");
		}
		break;
		case 4:
		{
			bookTextFileRead(books);
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
}

int maxBookCount(Book books[], int count)
{
	int max = books[0].count;
	for (int i = 0; i < count; i++)
	{
		if (max < books[i].count)
		{
			max = books[i].count;
		}
	}
	return max;
}

void sortBookByAuthor(Book books[], int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1 - i; j++)
		{
			if (strcmp(books[j].author, books[j + 1].author) == 1) 
			{
				Book temp = books[j + 1];
				books[j + 1] = books[j];
				books[j] = temp;
			}
		}
	}
}

void printBookByAuthor(Book books[], int count) 
{
	cout << "9. Odit Print Book by author" << endl;
	
	//Nai golemiq broj knigi
	int maxCount = maxBookCount(books, count);

	//Nov Masiv s knigite s nai golqm broj
	Book bookWithMaxCount[booksCount];
	int sizeOfBookWithMaxCount = 0;
	for (int i = 0; i < count; i++)
	{
		if (books[i].count == maxCount)
		{
			bookWithMaxCount[sizeOfBookWithMaxCount] = books[i];
			sizeOfBookWithMaxCount++;
		}
	}

	//Podrevdane po avtor
	sortBookByAuthor(bookWithMaxCount, sizeOfBookWithMaxCount);

	//izwevdane
	bookOut(bookWithMaxCount, 0, sizeOfBookWithMaxCount);
}

void bookIn(Book books[], int count)
{
	cout << "1. Enter Books" << endl;
	srand(time(0));
	for (int i = 0; i < count; i++)
	{
		//cin.ignore();
		cout << "Enter number "; cin >> books[i].number;
		cin.ignore();
		cout << "Enter title "; cin.getline(books[i].title, 50);
		//cout << "Enter title "; getline(cin, books[i].title);
		cout << "Enter author "; cin.getline(books[i].author, 50);
		cout << "Enter pages "; cin >> books[i].pages;
		cout << "Enter price "; cin >> books[i].pice;
		books[i].count = 1 + rand() % 20;
		cout << "Enter count: " << books[i].count << endl;
		cout << "Random Number: " << (100 + rand() % 200) << endl;
	}
}

void bookOut(Book books[], int start, int end)
{
	cout << "2. Print Books" << endl;
	int page = 1;
	for (int i = start; i < end; i++)
	{
		cout << "Book " << i << endl;
		cout << "Number: " << books[i].number << endl;
		cout << "Title: " << books[i].title << endl;
		cout << "Author: " << books[i].author << endl;
		cout << "Pages: " << books[i].pages << endl;
		cout << "Price: " << books[i].pice << endl;
		cout << "Count: " << books[i].count << endl;

		if ((i + 1) % 5 == 0) 
		{
			char op;
			cout << "Page " << page++ << " next page " << page << " (N): ";
			cin >> op;
			if (op != 'N' && op != 'n')
			{
				break;
			}
			system("cls");
		}
	}
}

void bookBinaryFileSave(Book books[], int count)
{
	cout << "3. Save Books in binary file" << endl;
	fstream file;
	file.open("Books.bin", ios::binary | ios::out);
	file.write((char*)books, sizeof(books) * count);
	file.close();
}
//I 
//Books -> 40
//books[15] -> 600
//"Books.bin" -> 680

//II
//Books -> 40
//books[15] -> 600
//"Books.bin" -> 400
int bookBinaryFileRead(Book books[], int count)
{
	cout << "4. Read Books from binaty file" << endl;

	fstream file;
	file.open("Books.bin", ios::binary | ios::in);

	file.seekg(0L, ios::end);
	long size = (long)file.tellg();
	file.seekg(0L, ios::beg);
	        //400 / 40 -> 10
	int n = size / (sizeof(Book));
	//  10 > 15
	if (n > count) {
		       //15  * 40 -> 600
		size = count * sizeof(Book);
		n = count;
	}

	file.read((char*)books, size);
	file.close();

	return n;
}

void bookTextFileSave(Book books[], int count)
{
	cout << "5. Save Books in text file" << endl;
	fstream file;
	file.open("Books.txt", ios::out);
	for (int i = 0; i < count; i++)
	{
		file << books[i].number << endl;
		file << books[i].count << endl;
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
		file >> books[i].number;
		file >> books[i].count;
		file.ignore();
		//getline(file, books[i].title);
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