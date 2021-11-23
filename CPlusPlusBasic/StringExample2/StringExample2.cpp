#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	char text[] = {'T', 'u', '-', 'V', 'a', 'r', 'n', 'a', '\0'};

	cout << "Дължината на масива е: " << strlen(text) << endl;

	char copy[19];
	cout << "Стойноста на cppy e: " << strcpy_s(copy, text) << endl;

	cout << "copy[19] равно ли е на text[9]" << strcmp(copy, text) << endl;
	char cpm[19] = "TU-varna";
	cout << "cpm[19](\"TU - varna\" равно ли е на text[9]" << strcmp(copy, text) << endl;

	cout << "copy[19] равно ли е на text[9]" << _stricmp(copy, text) << endl;
	cout << "cpm[19](\"TU - varna\" равно ли е на text[9]" << _stricmp(copy, text) << endl;

	_strupr_s(text, sizeof(text));
	cout << "Големи букви: " << text << endl;
	_strlwr_s(text, sizeof(text));
	cout << "Малки букви: " << text << endl;

	char cat[30] = "University ";
	strcat_s(cat, text);
	cout << "Стойноста на cat e: " << cat << endl;

}

