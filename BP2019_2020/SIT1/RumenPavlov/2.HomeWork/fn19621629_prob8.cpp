#include <iostream>
using namespace std;
const int s=987;
int speed(int t);
int time(int v);
int main()
{
	cout<<"Въведете време за пътуване като цяло число"<<endl;
			int t, neededspeed;
	cin>>t; 
	cout<<"time= "<<t<<" "<<"distance= 987km"<<endl;
	neededspeed = speed(t);
	cout<<"Нужна скорост =  "<<neededspeed<<"km/h"<<endl;

	cout<<"Въведете скорост като цяло число"<<endl;
			int v, neededtime;
	cin>>v; 
	cout<<"speed= "<<v<<" "<<"distance= 987km"<<endl;
	neededtime = time(v);
	cout<<"Нужно време =  "<<neededtime<<"h"<<endl;

	return 0; 
}
int speed(int t)
{
	float v;
	v= s/t;
	return v;
}
int time(int v)
{
	float t;
	t= s/v;
	return t;
}