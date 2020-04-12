#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void writeCharArray(string fileName)
{
	string data;// [100];

	// open a file in write mode.
	ofstream outfile;
	outfile.open(fileName + ".text", ios::trunc);

	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	//cin.getline(data, 100);
	getline(cin, data);
	// write inputted data into the file.
	outfile << data << endl;

	//cout << "Enter your age: ";
	//cin >> data;
	//cin.ignore();

	// again write inputted data into the file.
	//outfile << data << endl;

	// close the opened file.
	outfile.close();
}

void readCharArray(string fileName)
{
	string data;// [100];
	// open a file in read mode.
	ifstream infile;
	infile.open(fileName +".text");

	cout << "Reading from the file" << endl;
	infile >> data;

	// write the data at the screen.
	cout << data << endl;

	// again read the data from the file and display it.
	//infile >> data;
	//cout << data << endl;

	// close the opened file.
	infile.close();

}

int getFileCount()
{
	fstream fp;
	fp.open("testText.txt", ios::binary | ios::in);
	fp.seekg(0L, ios::end);
	long pos = (long)fp.tellg();
	fp.close();

	int n = pos / (sizeof(int));

	return n;
}

void createFile(string fileName) 
{
	fstream outfile(fileName + ".txt", ios::binary | ios::out);

	/*fstream outfile;
	outfile.open(fileName + ".txt", ios::binary | ios::out);*/

	int a[5] = { 1,2,3,4,5 };
	outfile.write((char*)a, 5 * (sizeof(int)));
	outfile.close();

	int n = getFileCount();

	fstream fin(fileName + ".txt", ios::binary | ios::in);

	//fstream fin;
	//fin.open(fileName + ".txt", ios::binary | ios::in);
	int b[10];

	fin.read((char*)b, n * (sizeof(int)));

	for (int i(0); i < n; i++)
	{
		cout << b[i] << ", ";
	}
	fin.close();
}

void deleteFile(string fileName)
{
	fstream outfile(fileName + ".txt", ios::binary | ios::out);
	for (int i = 0; i < 10; i++)
	{
		outfile << i << ", ";
	}
	outfile.close();
	fstream infile(fileName + ".txt", ios::binary | ios::in);
	//string str;
	//getline(infile, str);
	//cout << str;
	while (!infile.eof()) {
		string str;
		infile >> str;
		cout << str;
	}
	infile.close();
}

int main() 
{
	int op;
	do {
		cout << "1. Create file" << endl;
		cout << "2. Save in file" << endl;
		cout << "3. Read file" << endl;
		cout << "4. Delete file" << endl;
		cout << "0. Exit" << endl;

		cout << "Select option: " ;
		cin >> op;

		switch (op)
		{
		case 1:
		{
			cout << "Create file" << endl;
			
			//cin.ignore();
			
			//string fileName;

			//getline(cin, fileName);

			createFile("testText");

			system("pause"); 
		}
		break;
		case 2:
		{
			cout << "Save in file" << endl;
			cin.ignore();

			string fileName;

			getline(cin, fileName);
			writeCharArray(fileName);

			system("pause"); 
		}
		break;
		case 3:
		{
			cout << "Read file" << endl;
			cin.ignore();

			string fileName;

			getline(cin, fileName);
			readCharArray(fileName);
			system("pause"); 
		}
		break;
		case 4:
		{
			cout << "Delete file" << endl;
			//cin.ignore();

			//string fileName;

			//getline(cin, fileName);
			deleteFile("fileName");

			system("pause"); 
		}
		break;
		case 0:
		{
			cout << "Select <y> for exit or <n> for continue: ";
			char ch;
			cin >> ch;
			if (ch == 'n' || ch == 'N') 
			{
				op = 5;
			}
		}
		break;
		default:
			cout << "Invalid operatin" << endl;
			system("pause");
			break;
		}

		system("cls");
	} while (op != 0);

	return 0;
}