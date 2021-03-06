# Функции

В програмирането функцията представлява част от програмата, която групира инструкции за изпълнение на конкретна задача (алгоритъм).
В зависимост от това дали дадена функция е предварително дефинирана или създадена от програмист има два вида функция:

- Библиотечни функции - който използвахме от библиотеките math.h и conio.h и iomanip

- Потребителско дефинирани функции

Целта на потребителско дефинираните функции е да се групират инструкции решаващи конкретна задача, който могат да се използват повече от веднъж.
При поставянето на няколко задачи в една функция програмите стават трудно разбираеми, затова е препоръчително да се използват отделни функции за всяка задача.

# Структура на потребителско дефинираната функция

## Прототип (Дефиниция на функция)

C++ програмите се изпълняват последователно отгоре надолу. Поради тази специфика е необходимо всеки елемент (променлива, функция) от програмата да е дефиниран преди да се използва.

  - return_type function_name( parameter list );

  - return_type - тип който се връща като резултат от функция. Може да бъде всеки тип данни от който се създават променливи в c++. Съществува специален тип за функция, която не връща резултат <b>void</b>използва се за функции, които извеждат съдържание към изходни устройства. 

  - function_name - то трябва да е уникално за да се различават различните функции в програмата.
parameter list - списък от променливи който са нужни за изпълнението на задачата (алгоритъма) във функцията.

#### !Важно! 

```
Прототипа се поставя в началото на файла на програмата след използваните библиотеки.

Комбинацията от return_type, function_name и parameter list трябва да е уникална.
```

Пример:

```c++
  int sum(int a, int b);
  int sum(double a, double c);
  double sum(double a, double c);
```

## Имплементация (реализация) на функция

След като една функция е дефинирана реализацията и може да бъде поставена на всяко място във файла с програмата.
Препоръчва се да се поставя след функцията main.

```c++
return_type function_name( parameter_list ) 
{
   body_of_the_function
}
```
  - return_type - тип който се връща като резултат от функция. Може да бъде всеки тип данни от който се създават променливи в c++.
  - function_name - то трябва да е уникално за да се различават различните функции в програмата.
  - parameter_list - списък от променливи който са нужни за изпълнението на задачата (алгоритъма) във функцията.
  - { - отваряща скоба за оказване началото на функцията.
  - body_of_the_function - тяло на функцията в него се записват инструкциите решаващи дадената задача (алгоритъм)
  - } - затваряща скоба за оказване края на функцията 

## Използване на функция

```c++
variable_name = function_name(  real_values );
```

variable_name - променлива на която се присвоява резултата от изпълнението на функцията (връщащата стойност)

function_name - името с което е дефинирана функцията

real_values - реалните стойности, който се използват във функцията

## Променливи

  - Формални променливи - променливите с който се дефинира функцията се наричат формални параметри, те се създават при влизане във функцията и унищожени при излизане. Когато се използва функция се копират стойностите с който се извиква. Формалните променливи могат да имат стойност по подразбиране.

  - Локални променливи - променливи дефинирани в блок с операции (функция)

  - Глобални променливи - променливи дефинирани извън функция достъпни за всички функции в програмата.

#### Пример

```c++
  #include <iostream>
  using namespace std;
  
  int sum(int a, int b);
  
  int main()
  {
    int a,b,c;
    
    c = sum(a, b);
    
    cout << c << endl;
    
    return 0;
  }
  
  int sum(int a, int b)
  {
    int result;
    
    result = a + b;
  
    return result;
  }
```

### Задача 1

Съставете програма която да изчислява цената на пазарни стоки с ДДС от 20% за дрехи, техника, туризъм, 5% за книги, 10% за хранителни продукти. Използвайте функция със стойност по подразбиране за най-често срещаната стойност за ДДС. Изведете цената на:

  - дрехи със стойност 45.8
  
  - техника със стойност 595.7
  
  - туризъм със стойност 5748.4
  
  - книги със стойност 98.6
  
  - хранителни продукти със стойност 354

### Задача 2

Съставете програма която дефинира функции за събиране (), изваждане (), умножение (), деление () и модулно деление (). Използвайте функциите, за да изведете съответните операции за числата 48 и 12.

### Задача 3

Съставете програма която дефинира функции за изчисление обиколка и лице на окръжност. Използвайте функциите, за да изчислите радиуса на окръжност с радиус въведен от клавиатурата.

### Задача 4

Съставете програма която да дефинира структура линия с начална и крайна точка. 

  а) Създайте функции с която да се въвежда и извежда линия. 
  
  б) Създайте функция с която да се изчислява дължината на линия.
