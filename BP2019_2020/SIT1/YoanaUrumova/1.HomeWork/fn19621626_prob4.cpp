#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;
struct Klasirane{
int nomer;
string Ime;
string Familia;
string Nation;
float Ribbon;
float Ball;
float Batons;
float Hoop; 
float Total;
};
int main()
{
int a; char s;
Klasirane Uchastnici[50];

cout<<"Iskate li da izpolzvate gotoviq model ot uchastnici. Ako da-natisnete 1, ako ne-natisnete koqto i da e druga cifra."<<endl;
cin>>s;
if(s=='1'){
a=5;


	
Uchastnici[0].nomer=1;
Uchastnici[0].Ime="Boryana";
Uchastnici[0].Familia="Kaleyn";
Uchastnici[0].Nation="Bulgaria";
Uchastnici[0].Ribbon=19.900;
Uchastnici[0].Ball=22.400;
Uchastnici[0].Batons=22.350;
Uchastnici[0].Hoop=21.625;
Uchastnici[0].Total=Uchastnici[0].Ribbon+Uchastnici[0].Ball+Uchastnici[0].Batons+Uchastnici[0].Hoop;

Uchastnici[1].nomer=2;
Uchastnici[1].Ime="Dina";
Uchastnici[1].Familia="Averina";
Uchastnici[1].Nation="Russia";
Uchastnici[1].Ribbon=21.650;
Uchastnici[1].Ball=22.950;
Uchastnici[1].Batons=23.000;
Uchastnici[1].Hoop=23.800;
Uchastnici[1].Total=Uchastnici[1].Ribbon+Uchastnici[1].Ball+Uchastnici[1].Batons+Uchastnici[1].Hoop;

Uchastnici[2].nomer=3;
Uchastnici[2].Ime="Vlada";
Uchastnici[2].Familia="Nikolchenko";
Uchastnici[2].Nation="Ukraine";
Uchastnici[2].Ribbon=19.450;
Uchastnici[2].Ball=22.250;
Uchastnici[2].Batons=19.500;
Uchastnici[2].Hoop=22.950;
Uchastnici[2].Total=Uchastnici[2].Ribbon+Uchastnici[2].Ball+Uchastnici[2].Batons+Uchastnici[2].Hoop;

Uchastnici[3].nomer=4;
Uchastnici[3].Ime="Linoy";
Uchastnici[3].Familia="Ashram";
Uchastnici[3].Nation="Izrael";
Uchastnici[3].Ribbon=21.050;
Uchastnici[3].Ball=23.1;
Uchastnici[3].Batons=23.500;
Uchastnici[3].Hoop=22.050;
Uchastnici[3].Total=Uchastnici[3].Ribbon+Uchastnici[3].Ball+Uchastnici[3].Batons+Uchastnici[3].Hoop;

Uchastnici[4].nomer=5;
Uchastnici[4].Ime="Arina";
Uchastnici[4].Familia="Averina";
Uchastnici[4].Nation="Russia";
Uchastnici[4].Ribbon=20.850;
Uchastnici[4].Ball=23.100;
Uchastnici[4].Batons=24.050;
Uchastnici[4].Hoop=23.100;
Uchastnici[4].Total=Uchastnici[4].Ribbon+Uchastnici[4].Ball+Uchastnici[4].Batons+Uchastnici[4].Hoop;
}



else{

//Vavejdane

cout<<"Vavedete broi uchastnici v klasiraneto ";
cin>>a;





for(int i=0;i<a;i++){
Uchastnici[i].nomer=i+1;
cout<<"Vavedete ime na uchastnik "<<i+1<<"  ";
cin>>Uchastnici[i].Ime;

cout<<"Vavedete familia na uchastnik "<<i+1<<"  ";
cin>>Uchastnici[i].Familia;

cout<<"Vavedete Nation na uchastnik "<<i+1<<"  ";
cin>>Uchastnici[i].Nation;

cout<<"Vavedete tochki ot disciplina Ribbon  ";
cin>>Uchastnici[i].Ribbon;

cout<<"Vavedete tochki ot disciplina Ball  ";
cin>>Uchastnici[i].Ball;

cout<<"Vavedete tochki ot disciplina Batons  ";
cin>>Uchastnici[i].Batons;

cout<<"Vavedete tochki ot disciplina Hoop  ";
cin>>Uchastnici[i].Hoop;
Uchastnici[i].Total=Uchastnici[i].Ribbon+Uchastnici[i].Ball+Uchastnici[i].Batons+Uchastnici[i].Hoop;
}
}

//Sortirane
         //Sorttirane po rezultati
for(int l=0; l<a; l++)
for(int i=0; i<a; i++)
{   for(int k=0; k<a; k++)
	{
	
	
		if(i!=k&&Uchastnici[i].Total<Uchastnici[k].Total&&Uchastnici[i].nomer<Uchastnici[k].nomer)
		{
		swap(Uchastnici[i].nomer, Uchastnici[k].nomer);//cout<<"i="<<i<<" k="<<k<<" swaped "<<Uchastnici[i].Ime<<" and "<< Uchastnici[k].Ime<<endl;
		}
		
		if(i!=k&&Uchastnici[k].Total<Uchastnici[i].Total&&Uchastnici[k].nomer<Uchastnici[i].nomer)
		{
		swap(Uchastnici[k].nomer, Uchastnici[i].nomer);//cout<<"i="<<i<<" k="<<k<<" swaped "<<Uchastnici[i].Ime<<" and "<< Uchastnici[k].Ime<<endl;
		}
	
		
		
	}
}

         //Sortirane po azbuchen red pri ravni rezultati
for(int i=0; i<a; i++)
{   for(int k=0; k<a; k++)
	{	if(i!=k&&Uchastnici[i].Total==Uchastnici[k].Total&&Uchastnici[i].nomer<Uchastnici[k].nomer&&(Uchastnici[i].Ime+Uchastnici[i].Familia)>(Uchastnici[k].Ime+Uchastnici[k].Familia)){
		swap(Uchastnici[i].nomer,Uchastnici[k].nomer);	
		}
}}


//Pechat

cout<<endl<<setw(4)<<"Rank"<<setw(21)<<"Gymnast"<<setw(9)<<"Nation"<<setw(8)<<"Ribbon"<<setw(8)<<"Ball"<<setw(8)<<"Batons"<<setw(8)<<"Hoop"<<setw(8)<<"Total"<<endl;
for(int i=0;i<74;i++){cout<<"-";}cout<<endl;

for(int j=0;j<a;j++)
{
    for(int i=0;i<a;i++)
   {
	   if(j+1==Uchastnici[i].nomer)
		{
		 cout<<setw(4)<<Uchastnici[i].nomer;
	     cout<<setw(8)<<Uchastnici[i].Ime<<setw(13)<<Uchastnici[i].Familia;
	     cout<<setw(9)<<Uchastnici[i].Nation;
		 std::cout.precision(3);
		 std::cout<<std::fixed;
	     cout<<setw(8)<<Uchastnici[i].Ribbon;
	     cout<<setw(8)<<Uchastnici[i].Ball;
	     cout<<setw(8)<<Uchastnici[i].Batons;
	     cout<<setw(8)<<Uchastnici[i].Hoop;
	     cout<<setw(8)<<Uchastnici[i].Total<<endl;
	     break;
        }
   }
}
	
	
	


system ("pause");
	return 0;
}
