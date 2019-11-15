#include <iostream> 
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
struct pravoagalnik{
	float a;
	float b;
};
pravoagalnik vavedi(){ 
  pravoagalnik prav;
  cout<<"Parvata strana e ravna na ";
  cin>>prav.a;
  cout<<"Vtorata strana e ravna na ";
  cin>>prav.b;
return  prav;
}
float S(pravoagalnik prav){
   float s=0;
   s=prav.a*prav.b;
   return s;
}
int main(){   
pravoagalnik prav;  
prav=vavedi();
cout<<"a="<<prav.a<<"  b="<<prav.b<<endl;
cout<<"Liceto na pravoagalnika e ravno na "<<S(prav)<<endl;
system ("pause");
return 0;	
}
