
# Модификатори

- signed - позволява работа с положителни и отрицателни числа. Стандартно поведение на типовете данниу в C++.

- unsigned - позволява работа само с положителни числ с двапъти по голяма стойност от стандартния размер на типовете в C++ 

- short - заделя пространство от памет за работа с малък набор от стоиности 

- long - заделя пространство от памет за работа с голям набор от стоиности . 

# Типове данни

| Име | Диапазон | Памет | 
| --- | --- | --- |
char, signed char | -128 до 127 | 1В |
unsigned char | 0 до 255 | 1В |
short, signed short | -32 768 до 32 767 | 2B|
unsigned short | 0 до 65 535 | 2B |
int , signed int | -32 768 до 32 767 | 2B |
unsigned, unsigned int | 0 до 65 535 | 2B |
long, signed long | -2147483648 до 2147483647 | 4B
unsigned long | 0 до 4294967295 |4B
float | -3.4*10<sup>38</sup> до 3.4*10<sup>38</sup> | 4В
doluble | -1.74*10<sup>308</sup> до 1.74*10<sup>308</sup> | 8В

### Задача 1

Размерността на типовете данни варира в зависимост от разредеността на операционната система (16bit, 32bit, 64bit).
Проверете размера на типовете данни във Visual Studio с функцията sizeof(име_на_тип)

Пример:

```c++
  cout << sizeof(char) << endl;
```

## 1 Константи

Константите са променливи с не променяема стойност по време на изпълнение на програма. 

const - е ключова дума с която се дефинират константи

Пример:

```c++
const double pi = 3.14;
```

### Задача 2

Съставете програма с дефинирана константа "пи". Опитаите да промените стойноста на константата и след това да я изведете.
Какво наблюдавахте по време на изпълнение на програмата.

### Задача 3

В с++ съществуват предварително дефинирани константи за максималната и минималната стойност която могат да заемат променливити.

| Константа | Значение | Стоиност |
|--|--|--|
CHAR_BIT | Броят битове в променлива char. | 8
SCHAR_MIN | Минималната стойност на тип signed char. | -128
SCHAR_MAX | Максималната стойност на тип signed char. | 127
UCHAR_MAX | Максималната стойност на тип unsigned char. | 255
CHAR_MIN | Минималната стойност на тип char. | -128;
CHAR_MAX | Максималната стойност на тип char. | 127;
SHRT_MIN | Минималната стойност на тип short. | -32768
SHRT_MAX | Максималната стойност на тип short. | 32767
USHRT_MAX | Максималната стойност на тип unsigned short. | 65535
INT_MIN | Минималната стойност на тип int. | -2147483647
INT_MAX | Максималната стойност на тип int. | 2147483647
UINT_MAX | Максималната стойност на тип unsigned int. | 4294967295
LONG_MIN | Минималната стойност на тип long. | -2147483647
LONG_MAX | Максималната стойност на тип long. | 2147483647
ULONG_MAX | Максималната стойност на тип unsigned long. | 4294967295

Съставете програма която да изведе стойноста на всички константи.

## 2 Неявно преобразуване 

- извършва се от компилатора при определени условия, без да се указва от програмиста.

```c++

  double d = 5.8;
  int i = d;
  
  cout << "double d = " << d << endl;
  cout << "int i = " << i << endl;

```
### Задача 4

Съставете програма която да включва фрагмента от примера. 

Защо резултатите от извеждането са такива ?
Какво се наблюдава при стойностите на променливите d и i ?

## 3 Явно преобразуване

- указва се от програмиста посредством следната конструкция:

(<име_на_тип>)<израз> - преобразува стоиноста в израза до указания в скобите тип

Явното (изричното) преобразуване (конвертиране) се използва винаги, когато има вероятност от загуба на данни.

Пример:

```c++

  cout << 2.5*6.8 << endl;
  cout << (int)2.5*6.8 << endl;
  cout << (int)(2.5*6.8) << endl;

```

### Задача 5

Съставете програма която да включва фрагмента от примера. 

Резултата от умножението на 2,5 с 6,8 еднакъв ли е ?
Защо резултатите от умножението са такива ?

## 4 Макроси

Макроса представлява обособена част от програмата, която може да се повтаря многократно. 

Синтаксис:

```c++
#define <име>  <код_на_макроса> 
```

При компилиране на програмата местата където се използва името на макроса се заменят с кода на макроса.

Пример:

```c++
#define SUM(a, b) (a + b)
```

### Задача 6

Съставете програма която използва макроси за събиране (SUM), изваждане(DIV), умножение (MUL), деление (SUB,MOD) на две реални числа въведени от клавиатурата. 

Макросите могат да се използват и за дефиниране на константи

Пример:

```c++
#define PI 3.14
```

### Задача 7

Съставете програма която намира обиколката и лицето на окръжност, чиито радиус е въведен от клавиатурата.

# Функцич за преобразуване на типове

static_cast<тип>(променлива)