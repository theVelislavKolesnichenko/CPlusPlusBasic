# Файлове

ofstream име;  //  файл само за запис    
ifstream име;  //  файл само за четене    
fstream име;  //  файл за четене и запис

променлива.open(файл, режим);

променлива.is_open();
променлива.bad();
променлива.good();
променлива.fail();
променлива.eof();
променлива.tellg();
променлива.seekg(променлива, флаг);

ios::in – отваря файла за четене  
ios::out – отваря файла за запис, като изтрива съдържанието му, ако файла съществува
ios::app – отваря файла за добавяне само в края на файла. Съдържанието му се запазва.
ios::ate – отваря файла за запис и премества указателя за запис в края на файла. Указателят може да бъде преместван на произволни места.  
ios::trunc – отваря файла за запис. Изтрива съдържанието му, ако съществува такова.  
ios::nocreate – ако файла съществува, го отваря. Не го създава, ако не съществува.  
ios::noreplace – създава и отваря файл само ако файла не съществува.  
ios::binary – отваря файла в двоичен режим на достъп
ios::beg - измества от началото на файла
ios::cur - измества от текущата позиция на файла
ios::end - измества от края на файла

променлива << израз; //  запис 
променлива >> променлива; //  четене

променлива.close(); 

## Текстови файлове

```c++
fstream MyFile; int x; MyFile.open("chisla.txt",ios::out);
do {    cin>>x;    
if (x==0) break;    
MyFile<<x<<endl; } 
while (x!=0); 
MyFile.close();

int sum=0; 
MyFile.open("chisla.txt",ios::in); 
while (MyFile>>x)     
  sum+=x; 
MyFile.close(); 
cout<<"sumata na chislata e "<<sum<<endl;
```
## Двoични файлове

променлива.write (променлива , размер );
променлива.read ( променлива, размер);

streampos begin, end;
```c++
	ofstream myFile2("example.bin", ios::binary);
	int a[10]{ 1,2,3,4,5,6,7,8,9,0 };
	int a2[20];


	myFile2.write((char*)a, sizeof(a));
	myFile2.close();

	ifstream myfile("example.bin", ios::binary);
	begin = myfile.tellg();
	myfile.seekg(0, ios::end);
	end = myfile.tellg();
	myfile.close();
	cout << "size is begin: " << begin << " bytes.\n";

	cout << "size is end: " << end << " bytes.\n";

	cout << "size is: " << (end - begin) << " bytes.\n";

	ifstream myfile3("example.bin", ios::binary);
	myfile3.seekg(0, ios::end);
	end = myfile3.tellg();
	myfile3.seekg(0, ios::beg);
	myfile3.read((char*)a2, sizeof(a2));

	myfile.close();

	for (int i = 0; i < 10; i++)
	{
		cout << a2[i] << endl;
	}

```
