#include<iostream>
using namespace std;
void Season(int number_of_season);
int main()
{
    int number_of_season;
    cout<<"number of season=";
    cin>>number_of_season;
    cout<<"season=";
    Season(number_of_season);
    return 0;
}
void Season(int number_of_season)
{
    if(number_of_season>=1 && number_of_season<=3)
    {
        cout<<"winter";
    }
    if(number_of_season>=4 && number_of_season<=6)
    {
        cout<<"spring";
    }
    if(number_of_season>=7 && number_of_season<=9)
    {
        cout<<"fall";
    }
    if(number_of_season>=10 && number_of_season<=12)
    {
        cout<<"winter";
    }
    else cout<<"Invalid Input"<<endl;
}
