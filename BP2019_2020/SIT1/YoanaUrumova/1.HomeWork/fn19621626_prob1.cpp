#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    //Подточка А
int A,B;
float C;
cout<<"Vavedete A=";
cin>>A;
cout<<"Vavedete B=";
cin>>B;
C=A/B;
cout<<"C="<<C<<endl;    

//Подточка Б
float D;
D=(float)A/B;
cout<<"D="<<D<<endl;

//В подточка А имаме целочислено деление, следователно резултатът е цяло число(тип int) 
//В подточка Б имаме явно преобразуване, числото А се преобразува в реално преди извършването на делението, следователно резултатът също е реално число
system ("pause");
	return 0;
}
