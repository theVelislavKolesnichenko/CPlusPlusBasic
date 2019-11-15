#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	//Подточка А
int a;
cout<<"Zadaite parvi parametar ";
cin>>a;
for(int i=a;i>0;i--){
for(int j=i;j>0;j--){
	cout<<"%";
}
cout<<endl;
}
cout<<endl;

//Втори начин
for(int i=a;i>0;i--)
{
cout<<setfill('%')<<setw(i+1)<<" "<< endl;
}
cout<<setfill(' ')<<setw(1);

//-------------------------------------------------------------------------
     //Подточка Б
int b;
cout<<"Zadaite vtori parametar ";
cin>>b;
for(int i=1;i<=b;i++){
cout<<setw(b-i+1);
     for(int j=1;j<=i;j++){
	 cout<<"%";
    }
cout<<endl;
}

for(int i=b-1;i>0;i--){
	for(int j=i;j>0;j--){
	cout<<"%";
	}
cout<<endl;
}

//Втори начин
for(int i=1;i<b;i++){
	 cout<<setfill(' ')<<setw(b-i)<<" ";
     cout<<setfill('%')<<setw(i+1)<<" "<< endl;
  
}

for(int i=b;i>0;i--){
	cout<<setfill('%')<<setw(i+1)<<" "<< endl;
}
cout<<setfill(' ')<<setw(1);


//-------------------------------------------------------------------------
	//Подточка В
int c;
cout<<"Zadaite treti parametar ";
cin>>c;
for(int i=0;i<c;i++){
cout<<" ";
cout<<setw(c-i);
for(int j=0;j<=i;j++){
	cout<<"%";
}
cout<<endl;
}

//Втори начин
for(int i=0;i<=c;i++){
cout<<setfill(' ')<<setw(c-i+1)<<" ";

cout<<setfill('%')<<setw(i+1)<<" "<< endl;
}
cout<<setfill(' ')<<setw(1);
cout<<endl;
//-------------------------------------------------------------------------
	//Подточка Г
int d;
cout<<"Zadaite chetvarti parametar ";
cin>>d;
for(int i=d;i>0;i=i-2){
for(int j=i;j>0;j--){
	cout<<"%";
}
cout<<endl;
}


//Втори начин
cout<<endl;
for(int i=d;i>0;i=i-2)
{
cout<<setfill('%')<<setw(i+1)<<" "<< endl;
}
cout<<setfill(' ')<<setw(1);

system ("pause");
	return 0;
}
