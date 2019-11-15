#include <iostream>
using namespace std;
int main(){
    int A, B;

    cout<<"A = ";
    cin>>A;
    cout<<"B = ";
    cin>>B;

    float C = A / B; // Резултатът е цяло число защото A и B са цели числа
    float D = (float)A / B; // А се конвертира във float което конвертира и резултатът във float
    
    cout<<"C = "<< C << endl << "D = " << D << endl;
}