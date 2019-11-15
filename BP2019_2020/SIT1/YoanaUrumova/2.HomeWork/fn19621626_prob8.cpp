#include <iostream> 
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

float izchisliV(float t){ 
  float v=0;
  v=987/t;
  return  v;
}
float izchisliT(float v){ 
  float t=0;
  t=987/v;
 return  t;
}
int main(){   
float t;  
float v;
cout<<"Vavedete vreme za patuvane v celi chasove ";
cin>>t;
cout<<"Vlaka trqbva da patuva sas skorost "<<izchisliV(t)<<" km/h."<<endl;
cout<<"Vavedete skorost za patuvane ";
cin>>v;
int min;
min=(izchisliT(v)-(int)izchisliT(v))*60;
cout<<"Vlaka trqbva da patuva "<< izchisliT(v)<<" chasa."<<endl;
cout<<"Ili vlaka trqbva da patuva "<< (int)izchisliT(v)<<" chasa i "<<min<<" minuti."<<endl;

system ("pause");
return 0;	
}
