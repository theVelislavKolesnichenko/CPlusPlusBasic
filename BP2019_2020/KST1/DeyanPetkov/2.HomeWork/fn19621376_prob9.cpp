#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int p (int a, int b, int c);// funkciq za presmqtane na obikolka
struct tri//tri=triuguknik
{
    int a,b,c;//strani na triugulnika
};
int main()
{
    tri A;
    cout<<"Vuvedete stranata a=";
    cin>>A.a;
    cout<<"Vuvedete stranata b=";
    cin>>A.b;
    cout<<"Vuvedete stranata c=";
    cin>>A.c;
    if(A.a==A.b==A.c)
        cout<<"Obikolkata na ravnostranniq triugulnik e P="<<p(A.a,A.b,A.c);
        else if (A.a==A.b||A.c==A.b||A.a==A.c)
    cout<<"Obikolkata na ravnobedreniq triugulnik e P="<<p(A.a,A.b,A.c);
    else
    cout<<"Obikolkata na raznostranniq triugulnik e P="<<p(A.a,A.b,A.c);
    return 0;
}
int p(int a, int b, int c)
{
    return a+b+c;//formula za obikolka
}
