#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

string nSpaces(int);
void a(string *);
void b(string*);
void c(string*);
void printBuffer(string*);

int main()
{
	string consoleBuffer[5];
	a(consoleBuffer);
	b(consoleBuffer);
	c(consoleBuffer);
	printBuffer(consoleBuffer);
	return 0;
}

void a(string * consoleBuffer)
{
	stringstream stream;
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			stream.str(string());
			stream << setfill(' ') << setw(4) << "a) ";
			consoleBuffer[i] += stream.str();
		}
		else {
			stream.str(string());
			stream << setfill(' ') << setw(4) << " ";
			consoleBuffer[i] += stream.str();
		}
		stream.str(string());
		stream << setw(10) << setfill('%') << nSpaces(i+5) << endl;
		consoleBuffer[i] += stream.str();
	}
}

void b(string* consoleBuffer)
{
	stringstream stream;
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			stream.str(string());
			stream << setfill(' ') << setw(4) << "b) ";
			consoleBuffer[i] += stream.str();
		}
		else {
			stream.str(string());
			stream << setfill(' ') << setw(4) << " ";
			consoleBuffer[i] += stream.str();

		}
		stream.str(string());
		int tmp = 0;
		if (i == 0 || i == 4) tmp = 15;
		if (i == 1 || i == 3) tmp = 14;
		if (i == 2) tmp = 13;
		stream << setw(16) << setfill('%') << nSpaces(tmp) << endl;
		consoleBuffer[i] += stream.str();
	}
}

void c(string* consoleBuffer)
{
	stringstream stream;
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			stream.str(string());
			stream << setfill(' ') << setw(4) << "b) ";
			consoleBuffer[i] += stream.str();
		}
		else {
			stream.str(string());
			stream << setfill(' ') << setw(4) << " ";
			consoleBuffer[i] += stream.str();

		}
		stream.str(string());
		stream << setw(5) << left << setfill('%') << nSpaces(i) << endl;
		stream << setw(6) << right << setfill('%') << nSpaces(i) + "s" << endl;
		consoleBuffer[i] += stream.str();
	}
}

void printBuffer(string * buffer)
{
	for (int i = 0; i < 5; i++)
	{
		for (int is = 0; is < buffer->size(); is++)
		{
			if (buffer[i][is] == '\n')
			{
				//cout << buffer[i][is];
			}
			else if (buffer[i][is] == 's')
			{
				cout << endl;
			}
			else {
				cout << buffer[i][is];
				
			}
		}
	}
}

string nSpaces(int i)
{
	string a = "";
	while (i > 0)
	{
		a += " ";
		i--;
	}
	return a;
}