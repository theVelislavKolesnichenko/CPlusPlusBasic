#include <iostream> 
#include <string>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
using namespace std;
int vavedi(int a){
cout<<"Vavedete vazrast cqlo chislo ";
cin>>a;
return a;
}
void izvedi(int vazrast){
//Po uslovieto nqma kak da izleze "Baby" mejdudrugoto, samo spomenavam
if(vazrast>0&&vazrast<1) cout<<"Baby."<<endl;
else if(vazrast>=1&&vazrast<3) cout<<"Toddler."<<endl;
else if(vazrast>=3&&vazrast<5) cout<<"Preschool."<<endl;
else if(vazrast>=5&&vazrast<=10) cout<<"Gradeschooler."<<endl;
else if(vazrast>=13&&vazrast<18) cout<<"Teen."<<endl;
else if(vazrast>=18&&vazrast<21) cout<<"Young Adult."<<endl;
}
 
int main(){
int vazrast;
for(int i=0;i<10;i++){
vazrast=vavedi(vazrast);
izvedi(vazrast);
}

system ("pause");
return 0;	
}


