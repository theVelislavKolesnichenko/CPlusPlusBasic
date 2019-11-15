#include <iostream>
using namespace std;
int func(char ch)
{
	int character = (int)ch;                
	if (character > 96)                   //izpolzvam ascii kod za da si spestq pisane i taka imam i za glavni i za malki bukvi
	{
		return character - 96;
	}
	else if (character > 64 && character<96)
	{
		return (character - 64);
	}
}
int main()
{
	char ch;
	cout << "vuvedete simvol "; cin >> ch;
	cout << func(ch) << endl<<endl;
	return 0;
}