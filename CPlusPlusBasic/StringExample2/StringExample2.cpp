﻿#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	char text[] = {'T', 'u', '-', 'V', 'a', 'r', 'n', 'a', '\0'};

	cout << "Дължината на масива е: " << strlen(text) << endl;

	cout << "Разнера масива е: " << sizeof(text) << endl;

	char copy[19];
	strcpy_s(copy, text);
	cout << "Стойноста на cppy e: " << copy << endl;

	cout << "copy[19] равно ли е на text[9]: " << strcmp(copy, text) << endl;
	char cpm[19] = "TU-varna";
	cout << "cpm[19] \"TU-varna\" равно ли е на text[9]: " << strcmp(copy, text) << endl;

	cout << "copy[19] равно ли е на text[9]" << strncmp(copy, text, 2) << endl;
	cout << "cpm[19] \"TU-varna\" равно ли е на text[9]: " << strncmp(copy, text, 2) << endl;

	cout << "copy[19] равно ли е на text[9]" << _stricmp(copy, text) << endl;
	cout << "cpm[19] \"TU-varna\" равно ли е на text[9]: " << _stricmp(copy, text) << endl;

	_strupr_s(text, sizeof(text));
	cout << "Големи букви: " << text << endl;
	_strlwr_s(text, sizeof(text));
	cout << "Малки букви: " << text << endl;

	char cat[30] = "University ";
	strcat_s(cat, text);
	cout << "Стойноста на cat e: " << cat << endl;

	char ncat[20] = "University ";
	strncat_s(ncat, text, 2);
	cout << "Стойноста на cat e: " << ncat << endl;

	cout << "Среща ли се буквата 'v' в низът text: " << strchr(text, 'v') << endl;
	cout << "Среща ли се буквата низър \"-v\"  в низът text: " << strstr(text, "-v") << endl;

	char number[] = "132";
	int integer = atoi(number); 
	cout << "integer = " << integer << "\ninteger + 1 = " << integer + 1 << endl;

}

