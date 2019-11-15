#include <iostream>
using namespace std;

float speed(float s,float v,float t);
float time(float s,float v,float t);
int main()
{
int s=987;
int t,v;
cout<<"Time: ";cin>>t;
cout<<"Speed: "<<speed(s,v,t)<<endl;

cout<<"Speed: ";cin>>v;
cout<<"Time: "<<time(s,v,t);

return 0;
}
float speed(float s,float v,float t)
{
    v=s/t;
    return v;
}
float time(float s,float v,float t)
{
    t=s/v;
    return t;
}
