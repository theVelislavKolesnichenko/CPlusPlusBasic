# Указания за самостоятелна задача

1. Създаване на [структора](../Chapters%26Strategies/Structures)

Структората трябва да съдържа необходимите полета за описание на предмета на вашата информационна система.

## Пример

Студентите имат отличителни белези (характеристики) <b>факултетен номер</b>, <b>Име</b>, <b>Списък с дисциплини</b>, <b>пол</b>, <b>възраст</b>, <b>статус</b>. Втези характеристики се включва <b>Списък с дисциплини</b>, списъка е масив от дисциплини, една дисциплина се характеризира с <b>Име</b> и <b>оценка</b>
Статуса на студента може да има стойности "train" обучаем или "graduate" завършил.

```c++
Discipline {
  char name[4]; // Името на дисциплината е текст, който се представя с масив от символи, който може да е съкращение от първите букви на името на дисциплината
  int evaluation; //обенката е цяло число от 2 до 
  };

Student {
  char fnumber[8]; //факултетния номер може да е масив от символи ако ще се използват различни елементи от него или променлива цяло число
  char name[50]; //Името на студента е масив от символи, който ще съдържа имеда на човек
  Discipline discipline[5];//списъка с дисциплини е масив от структората Discipline в който ще се съхраняват 5 дисциплини с име и оценка
  char gender[7];//пола ще е масив от символи в който да се въведе "male" или "female"
  int age;//годините на човек са цели числа от 0 до 100-130
  char status[8];//статуса на студент е масив от символи в който да се съхрани "train" обучаем или "graduate" завършил 
};
```

За дати:
- текст: формат dd.mm.yyyy (по-сложен) ИЛИ mm.yyyy;
mm.yyyy:
char date[8];
-с число:
int date;
mmyyyy 
Пример: mmyyyy -> 51846; mmyyyy -> 111846


МЕНЮ:
Менюто трябва да има вид, в който да могат да бъдат избирани опции в програмата. Елементите се записват чрез масив от структура, за да могат да се обработват по-нататък.
1.Добавяне на един елемент към масива
2. Избор на брой елементи за добавяне, след което се завърта цикъл
Пример:
Car cars[100];
1) int count = 0;
cars[count]=Insert_car();
count++;
2)for(int i=count; i<n; i++){
cars[i]=Insert_car();
}
От 1) - 10
В 2) - 90
cin>>n;
n<=(100-count)&&(n>0)
3. Извеждане
Student students[100];
int count=0; //20
for(int i=0; i<count; i++){
print_students(students, i);
}
void print_students(Student stu[], int index){
cout<<stu[index].name;
cout<<stu[index].f_number;
.
.
.
}
4. Редактиране/Генериране/Допълване
5. Алгоритъм на информационната система 
6. Одит
Одитът се състои от сортиране на данни, търсене на по-голям/по-малък елемент.
7. Записване във файл
8. Четене от файл
9. Изход
Изберете 1-9: _



II ВАРИАНТ МЕНЮ:
Меню Въвеждане
1. Добавяне на 1 запис
2. Добавяне на n записа
3. Назад
Изберете 1-3: _


МЕНЮ ОДИТИ:
1. Сортиране 1 критерии
2. Сортиране 2 критерии
3. Търсене 1 критерии
4. Търсене 2 критерии
5. Назад
Изберете от 1-5: _


ТОЧКИ КУРСОВА РАБОТА: 50
A. 3
B. 7
C. 5
D. 12
E. 8
F. 10
G. 5



(ОТКЛОНЕНИЕ) 
x= a^3 + b:

int x(int a, int b);
int pow3(int a);
int x(int a, int b){
int pow3(a) + b;
return x;
}
int pow3(int a)
{
return a*a*a;
}

СТРУКТУРИ
struct AI{
int number;
char name[50];
I imot[50];
};

struct I{
char kvartal[8];
char ul[20];
double a;
double p;
int b;
int r;
};


void Insert_items(Book books[], int start, int count)
{
	for(int i=start; i<count; i++)
	{
		cin>>books[i].name;
		cin>>books[i].author;
		cin>>books[i].price;
	}
}




Korab Insert()
{
	Korab korab;
cout<<"Enter name=";
cin>>korab.name;
cout<<"Enter numbers=";
cin>>korab.number;
}

int main(){
Korab korabi[20]; 
int count=0;
do{cin>>op;
switch(op){
1) case 1:
{
korabi[count]=Insert();
count++;
}break;

2) do{
korabi[count]=Insert();
count++;
cout<<"Enter new (Y/N)?";
cin>>ch;
}while(ch!='N');

