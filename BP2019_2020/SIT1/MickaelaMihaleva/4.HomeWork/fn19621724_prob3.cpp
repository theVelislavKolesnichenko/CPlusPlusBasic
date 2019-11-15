#include <iostream>
using namespace std;
double nod(int a,int b);
long long nok(int a, int b);
int main(){
	cout<<"---Namirane na HOK i HOD---"<<endl;
	int a,b;
	cout<<"Vuvedi purvo chislo=";
	cin>>a;
	cout<<"Vuvedi vtoro chislo=";
	cin>>b;
cout<<"HOD e "<<nod(a, b)<<endl;
	cout<<"HOK e "<<nok(a,b)<<endl;
system("pause");
	}
double nod(int a,int b){
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}
	long long nok(int a, int b) {
    for (long long i = max(a, b); i <= (long long)a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}
	
