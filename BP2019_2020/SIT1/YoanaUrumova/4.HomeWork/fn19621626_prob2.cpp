#include <iostream>
#include <math.h>
using namespace std;
void mesec(int nomer){
switch(nomer){
	case 1: case 2: case 12: {cout<<"Zimen mesec."<<endl; break;}
	case 3: case 4: case 5: {cout<<"Proleten mesec."<<endl; break;}
	case 6: case 7: case 8: {cout<<"Leten mesec."<<endl; break;}
	case 9: case 10: case 11: {cout<<"Esenen mesec."<<endl; break;}
	default: { cout<<"Nqma takav mesec."<<endl;	break;}
}
}
int main(){
	int nomer;
	cout<<"Vavedete mesec "; cin>>nomer;
	mesec(nomer);
	return 0;
}
