#include<iostream>
using namespace std;
int Pos_neg(float number);
int main()
{
    int pos=0,neg=0;
    float number;
    for (int i=1;i<=10;i++)
    {
        cout<<"Vuvedete chislo nomer "<<i<<":";
        cin>>number;
        if (Pos_neg(number)>0)
        {
            pos++;
        }
        if (Pos_neg(number)<0)
        {
            neg++;
        }
    }
    cout<<"Broqt na polojitelnite chisla e: "<<pos<<endl;
    cout<<"Broqt na otricatelnite chisla e: "<<neg<<endl;
    return 0;
}
int Pos_neg(float number)
{
    if (number>0) return 1;
    if (number<0) return -1;
    return 0;
}
