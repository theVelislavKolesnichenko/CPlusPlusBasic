#include <iostream> 
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
struct triagalnik{
	float a;
	float b;
	float c;
};
triagalnik vavedi(){ 
   triagalnik tr;
  do{
  cout<<"Parvata strana e ravna na ";
  cin>>tr.a;
  cout<<"Vtorata strana e ravna na ";
  cin>>tr.b;
  cout<<"Tretata strana e ravna na ";
  cin>>tr.c;
  if (tr.a+tr.b<tr.c||tr.a+tr.c<tr.b||tr.b+tr.c<tr.a) cout<<"Ne sashtestvuva takav triagalnik"<<endl;
    }
  while (tr.a+tr.b<tr.c||tr.a+tr.c<tr.b||tr.b+tr.c<tr.a);
//Sbora na vseki dve strani trqbva da e po-golqm ot tretata za da moje triagalnika da sashtestvuva          
 return  tr;
}
float P(triagalnik tr){
   float p=0;
   p=tr.a+tr.b+tr.c;
   return p;
}
int main(){   
triagalnik tr;  
tr=vavedi();
cout<<"a="<<tr.a<<"  b="<<tr.b<<"  c="<<tr.c<<endl;
cout<<"Obikolkata e ravna na "<<P(tr)<<endl;
system ("pause");
return 0;	
}
