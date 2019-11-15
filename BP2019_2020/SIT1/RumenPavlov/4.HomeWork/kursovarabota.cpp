#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;



void add_shipf();   
void add_shipsf();
void shipmentsf();
void load_shipf();         //прототипи
void cancel_loadf();
void shipments_infof();  


int main()
{ 
	int menu_choice; // променлива чрез, която избираме функция от менюто



	cout<<" MENU "<<endl;
	cout<<" Изберете функция от менюто: "<<endl;
	cout<<" 1. Добавяне на един кораб "<<endl;
	cout<<" 2. Добавяне на списък от кораби "<<endl;
	cout<<" 3. Извеждане на всички превози на екрана "<<endl;
	cout<<" 4. Натоварване на кораб "<<endl;
	cout<<" 5. Отказ от превоз "<<endl;
	cout<<" 6. Справки за корабни превози"<<endl;
	cout<<" 0. Изход "<<endl;
	cin>>menu_choice;


		do 
	{
		cout<<"Въведете валидно число"<<endl; 
		cin>>menu_choice;
	}
	while (menu_choice >=7);

	if (menu_choice==0)
	{ 
	}
	else
	{
	switch(menu_choice)
	{
	case 1:
		 add_shipf();
			  break;
	case 2:
		 add_shipsf();
			  break;
	case 3:
		 shipmentsf();
			  break;
	case 4:
		 load_shipf();
			  break;
	case 5:
		 cancel_loadf();
			  break;
	case 6:
		shipments_infof();
			  break;

	}	// край на switch
	}   // край на else
	
	return 0;
}


void add_shipf()
{ 
	cout<<"Later1"<<endl;
}
void add_shipsf()
{
	cout<<"Later2"<<endl;
}
void shipmentsf()
{
	cout<<"Later3"<<endl;
}
void load_shipf()
{
	cout<<"Later4"<<endl;
}
void cancel_loadf()
{
	cout<<"Later5"<<endl;
}
void shipments_infof()
{
	cout<<"Later6"<<endl;
}