# Масиви от символи

## Деклариране, въвеждане и извеждане на масив от символи

```c++
char ch1[] = "Tu-Varna";
char ch2[2] = "TU";
char ch3[5] = "Varna"
char ch4[10];

cout << "Enter characters:" << endl;
cin >> ch4;

//Достъп до елемент от масив
cout << endl << ch4[0] << endl;
cout << endl << ch4[4] << endl;
cout << endl << ch4[9] << endl;

//Извеждане на масив
cout << endl << ch1 << endl;
cout << endl << ch2 << endl;
cout << endl << ch3 << endl;
cout << endl << ch4 << endl;
```

## Функции за работа с символни масиви

<b>\<string></b> - библиотеката съдържаща стандартни функции за работа с масиви от символи

|Име C++ 98|Име Visual C++ 11|Значение|
|--|--|--|
strlen(str1) | определя броя на символите в str1
strcpy(str1, str2) | strcpy_s(str1, str2) | копира str2 в str1 и връща указател към str1
strncpy(str1, str2, n)| strncpy_s(str1, str2, n) | копира първите n символа от str2 в str1 и връща указател към str1
strcmp(str1, str2)|strcmp(str1, str2)| сравнява str1 и str2 по символи. Връща 0 - str1=str2, -1 - str1 < str2, 1 - str1 > str2
strncmp(str1, str2, n)|strncmp(str1, str2, n)| сравнява първите n символа от str2 в str1 по символи. Връща 0 - str1=str2, -1 - str1 < str2, 1 - str1 > str2
stricmp(str1, str2)|stricmp(str1, str2)|сравнява два символни масива без значение от размера и вида на буквите 
strupr(str1)| _strupr_s(str1)|преобразува малките символи в големи
strlwr(str)| _strlwr_s(str) |преобразува големите символи в малки
strcat(str1, str2)|strcat_s(str1, str2)|добавя копие на str2 към стр1
strncat(str1, str2)|strncat_s(str1, str2)|добавя копие на първите n символа от str2 към str1
strchr(str1, ch)|strchr(str1, ch)|връща указател към първото срещане на символа ch в масива от символи str1. Ако не се среша връща празен указател.
strpbrk(str1, str2)|strpbrk(str1, str2)|връща указател към първото срещане на символа от str2 в str1. Ако не се среша връща празен указател.
strstr(str1, str2)|strstr(str1, str2)|връща указател към първото срещане на str2 в str1. Ако не се среша връща празен указател.
atoi(str1) |atoi(str1) | преобразува масив от числови символи в число

## Въвеждане с функция getline

getline има два формата на извикване.
- cin.getline(символен масив, размер на масива)

# Символни низове

<b>Низ</b> е крайна поредица от символи. Типа данни за низ е <b>string</b>, за да използваме този тип е необходимо да добавим библиотеката <b>\<string></b>.

## Деклариране

```c++
string str = "Tu-Varna";
cout << str << endl;
```

## Въвеждане с оператор cin

```c++
string str;

cout << "Enter string";
cin >> str;
cout << str << endl;
```

## Въвеждане с функция getline

- getline(cin, символен низ)

### Пример

```c++
string str;

cout << "Enter string";
getline(cin, str);
cout << str << endl;

char ch[5];
//Присвоява на променливата ch 
cin.getline(ch, sizeof(ch));
```

## Конкатениране на низове 

Сливане на два символни низа става посредством оператор (+).

```c++
string str1 = "TU ";
string str2 = "Varna";

string str3 = str1 + str2;

cout << st3 << endl;
```

## Функции за обработка на низове

|Име|Действие|Пример
|--|--|--|
length | връща броя на символите вниз| str.length()
substr | извлича текст от между два индекса | str.substr(2,5);



