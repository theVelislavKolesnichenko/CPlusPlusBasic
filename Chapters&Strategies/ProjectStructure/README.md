# Структура на C++ проект

Всяка програма се състои от функции. Функцията са съставна програмна единица, съдържаща един или повече оператори и/или други функции.

Всяка програма се състои от функция int main(), която е първото място от където започва да се изпълнява програмата. Всяка програма има само една функция main.

Всяка програма започва с добавяне на библиотеки с инструкцията #include <име на библиотека>.

iostream - библиотека за входно изходни операции.

инструкцията using namespace std добавя стандартни функции.

main функцията завършва с инструкция за връщане на резултат към управляващата програма return 0;

```c++
#include <iostream>
using namespace std;

int main() 
{
	cout << "The answer to the ultimate question of life, the universe and everything is " << (7 * 6) << endl;

	return 0;
}
```

## Задача 1

Намерете грешките в програмите:

### а)

```c++
#include <iostream>
using namespace std;

cout << "TU-Varna" << endl;

int main() 
{
	return 0;
}
```

### b)

```c++
#include <iostream>
using namespace std;

int main() 
{
	cout << "TU-Varna << endl;

	return 0;
}
```

### c)

```c++
#include <iostream>
using namespace std;

int main() 
{
	cout << "Tu-Varna" << endline;
	
	return 0;
}
```

### d)

```c++
#include <iostream>
using namespace std;

int main() 
{
	cout << 7 * 6 << endl

	return 0;
}
```
