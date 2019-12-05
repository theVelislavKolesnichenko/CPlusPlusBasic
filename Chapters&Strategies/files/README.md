# Файлове

## Библиотека за работа с файлове (файлови потоци)

```c++
#include <fstream>
```

Типове данни за работа с файлове

```c++

ofstream име;  //  файл само за запис    
ifstream име;  //  файл само за четене    
fstream име;  //  файл за четене и запис

```

променлива.open("име на файл", режим); //функция за отваряне на файл 

- променлива.is_open(); // функцията връща истина (true), ако файла е успешно
- променлива.bad(); // функцията връща истина (true), ако файла е отворен неуспешно
- променлива.good(); // функцията връща истина (true), ако файла е отворен успешно
- променлива.fail(); // функцията връща истина (true), ако четенето от файла е неуспешно
- променлива.eof(); // функцията връща истина (true), ако е прочетен последния символ от файла
- променлива.tellg(); // функцията връща броя на байтовете намиращи се от началото на файла до курсова за четене
- променлива.seekg(позиции за изместване, флаг); // функция която измества курсора от флаг с брой позиции

- ios::in – отваря файла за четене  
- ios::out – отваря файла за запис, като изтрива съдържанието му, ако файла съществува
- ios::app – отваря файла за добавяне само в края на файла. Съдържанието му се запазва.
- ios::ate – отваря файла за запис и премества указателя за запис в края на файла. Указателят може да бъде преместван на произволни места.  
- ios::trunc – отваря файла за запис. Изтрива съдържанието му, ако съществува такова.  
- ios::nocreate – ако файла съществува, го отваря. Не го създава, ако не съществува.  
- ios::noreplace – създава и отваря файл само ако файла не съществува.  
- ios::binary – отваря файла в двоичен режим на достъп
- ios::beg - измества от началото на файла
- ios::cur - измества от текущата позиция на файла
- ios::end - измества от края на файла

променлива << израз; //  запис 

променлива >> променлива; //  четене

променлива.close(); // функция за затваряне на файл

променлива.write (променлива , размер ); // фнкция за записване в двойчен файл

променлива.read ( променлива, размер); // функция за записване в двойчен файл

## Пример Текстови файлове

```c++
#include <iostream>
#include <fstream>
using namespace std;

void file_in(int a[], int count);
void file_out(int a[], int count);
void array_print(int a[], int count);

int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, b[];
	
	cout << "Text File write"
	file_out(a, 10);
	
	cout << "Text File read"
	file_in(b, 10);
	
	cout << "Array Print"
	arrey_print(b, 10);
	
	return 0;
}

void file_out(int a[], int count)
{
	fstream file;
	file.open("chisla.txt", ios::out);
	
	for(int i = 0; i < count; i++)
	{
		file << a[i] << endl;
	}
	
	file.close();
}

void file_in(int a[], int count)
{
	fstream file;
	file.open("chisla.txt", ios::in);
	
	for(int i = 0; i < count; i++)
	{
		file >> a[i];
	}
	
	file.close();
}

void array_print(int a[], int count)
{
	for(int i = 0; i < count; i++)
	{
		cout << a[i] << endl;
	}
}

```

## Пример Двoични файлове

```c++
#include <iostream>
#include <fstream>
using namespace std;

void file_in(int a[], int count);
void file_out(int a[], int count);
void array_print(int a[], int count);

int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, b[];
	
	cout << "Text File write"
	file_out(a, 10);
	
	cout << "Text File read"
	file_in(b, 10);
	
	cout << "Array Print"
	arrey_print(b, 10);
	
	return 0;
}

void file_out(int a[], int count)
{
	оfstream file("chisla.bin", ios::binary);
	file.write((char*)a, sizeof(a)*count);
	file.close();
}

void file_in(int a[], int count)
{
	fstream file("chisla.bin", ios::binary);
	
	file.seekg(0, ios::end);
	int n = file.tellg();
	file.seekg(0, ios::beg);

	if(n <= count*sizeof(int))
		file.read((char*)a, n);
	
	file.close();
}

void array_print(int a[], int count)
{
	for(int i = 0; i < count; i++)
	{
		cout << a[i] << endl;
	}
}

```
