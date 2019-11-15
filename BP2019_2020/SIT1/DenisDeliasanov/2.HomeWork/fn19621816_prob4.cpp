#include <iostream>
#include<cmath>
using namespace std;
int edinitsi(int a)
{
    return a%10;
}
int desetitsi(int a)
{
    return (a/10)%10;
}
int stotitsi(int a)
{
    return (a/100)%10;

}
int main()
{
  int a;
  cout<<"a="; cin>>a;
  cout<<"edinitsi="<<edinitsi(a)<<endl;
  cout<<"desetitsi="<<desetitsi(a)<<endl;
  cout<<"stotitsi="<<stotitsi(a)<<endl;

  return 0;






}
