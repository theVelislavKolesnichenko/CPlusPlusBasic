#include <iostream>
#include <math.h>

using namespace std;
int age(int x);
int main()
{
    int x;
    cout<<"Enter the age of a child: ";cin>>x;
    age(x);
    return 0;
}
int age(int x)
{
    if(x>0&&x<1)
    {
        cout<<"Baby";
    }
    else if(x>=1&&x<3)
    {
        cout<<"Toddler";
    }
    else if(x>=3&&x<5)
    {
        cout<<"Preschool";
    }
    else if(x>=5&&x<=12)
    {
        cout<<"Gradeschool";
    }
    else if(x>=13&&x<18)
    {
        cout<<"Teen";
    }
    else if(x>=18&&x<21)
    {
        cout<<"Young Adult";
    }
    else
    {
        cout<<"Not a correct age of a child";
    }
}

