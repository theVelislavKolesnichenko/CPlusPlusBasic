#include <iostream>
#include <math.h>
using namespace std;

void input();
int main()
{

    input();
    return 0;
}

void input ()
{
    int positive=0;
    int negative=0;
    for(int i=1;i<=10;i++)
    {
        int x;
        cout<<"Enter a number: ";cin>>x;
        if(x>0)
        {

            positive++;
        }
        else if(x<0)
        {

            negative++;
        }
    }
    cout<<"The positive numbers are: "<<positive<<endl;
    cout<<"The negative numbers are: "<<negative<<endl;


}

