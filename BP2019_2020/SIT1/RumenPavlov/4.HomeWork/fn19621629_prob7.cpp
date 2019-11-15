#include <iostream>
using namespace std;
void f1(int a,int b, int c, int d, int e, int f, int g, int h,int i, int j);
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	cout<<"Въведете 10 числа"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cin>>f;
	cin>>g;
	cin>>h;
	cin>>i;
	cin>>j;
	f1(a,b,c,d,e,f,g,h,i,j);





return 0;
}
void f1(int a,int b, int c, int d, int e, int f, int g, int h,int i, int j)
{
	int positive=0, negative=0;
	if (a>0)
      positive++;
	else
		negative++;
	if (b>0)
      positive++;
	else
		negative++;
	if (c>0)
      positive++;
	else
		negative++;
	if (d>0)
      positive++;
	else
		negative++;
	if (e>0)
      positive++;
	else
		negative++;
	if (f>0)
      positive++;
	else
		negative++;
	if (g>0)
      positive++;
	else
		negative++;
	if (h>0)
      positive++;
	else
		negative++;
	if (i>0)
      positive++;
	else
		negative++;
	if (j>0)
      positive++;
	else
		negative++;
	cout<<"Броят на положителните числа е: "<<positive<<endl<<"Броят на отрицателните числа е: "<<negative<<endl;
}