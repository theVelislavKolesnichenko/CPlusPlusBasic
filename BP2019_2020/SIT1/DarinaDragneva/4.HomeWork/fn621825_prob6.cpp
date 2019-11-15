#include<iostream>
using namespace std;
void show_per(int num, const char symb);
int main()
{
    char type;
    cout<<"Vuvedete typ grafika(a,b,c): ";
    cin>>type;
    switch (type)
    {
        case 'a':
        {
            for(int i=5;i>0;i--)
            {
                show_per(i,'%');
                cout<<endl;
            }
            break;

        }
        case 'b':
        {
            int j=0;
            for(int i=1;i<6;i++)
            {
                (i<4)?j++:j--;
                show_per(j,'%');
                cout<<endl;
            }
            break;
        }
        break;
        case 'c':
        {
            int j=0;
            for(int i=5;i>0;i--)
            {
                j=5-i;
                show_per(j,' ');
                show_per(i*2,'%');
                show_per(j,' ');
                cout<<endl;
            }
            break;
        }
        break;
        default: cout<<"Nepoznat typ";
    }
    return 0;
}
void show_per(int num, const char symb)
{
    for(int i=1;i<=num;i++)  cout<<symb;


}
