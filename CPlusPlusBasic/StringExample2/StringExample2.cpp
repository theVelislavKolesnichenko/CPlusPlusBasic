#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	char text[] = {'T', 'u', '-', 'V', 'a', 'r', 'n', 'a', '\0'};

	cout << "��������� �� ������ �: " << strlen(text) << endl;

	cout << "������� ������ �: " << sizeof(text) << endl;

	char copy[19];
	strcpy_s(copy, text);
	cout << "��������� �� cppy e: " << copy << endl;

	cout << "copy[19] ����� �� � �� text[9]: " << strcmp(copy, text) << endl;
	char cpm[19] = "TU-varna";
	cout << "cpm[19] \"TU-varna\" ����� �� � �� text[9]: " << strcmp(copy, text) << endl;

	cout << "copy[19] ����� �� � �� text[9]" << _stricmp(copy, text) << endl;
	cout << "cpm[19] \"TU-varna\" ����� �� � �� text[9]: " << _stricmp(copy, text) << endl;

	_strupr_s(text, sizeof(text));
	cout << "������ �����: " << text << endl;
	_strlwr_s(text, sizeof(text));
	cout << "����� �����: " << text << endl;

	char cat[30] = "University ";
	strcat_s(cat, text);
	cout << "��������� �� cat e: " << cat << endl;

}

