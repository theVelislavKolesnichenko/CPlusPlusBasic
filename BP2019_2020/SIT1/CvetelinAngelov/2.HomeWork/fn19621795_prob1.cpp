#include <iostream>
#include<conio.h>

using namespace std;

void start();
void final();

int main()
{
	cout << " - Homework N2, Ex 1 - \n\n";
	start();
	_getch();
	final();

	system("pause");
}

void start()
{
	cout << "Start ?\n";
}

void final()
{
	printf("Final !\n");
}

//Съставете програма с функции за :
//	- Извеждане на съобщение „Start ? “.Функцията не приема параметри и не връща стойност.
//	- Извеждане на съобщение „Final !“.Функцията не приема стойност и не връща резултат.
//Във функция main се извиква изписването на старт и се изчаква натискане на бутон от 
//клавиатурата, след което се изписва финал.