#include <iostream>

using namespace std;

int getUnits(int number);
int getTens(int number);
int getHundreds(int number);

main()
{
  int a(837), hundreds, tens, units;

  units = getUnits(a);
  tens = getTens(a);
  hundreds = getHundreds(a);

  cout << "Units " << units << endl
       << "Tens " << tens << endl
       << "Hundreds " << hundreds;
}

int getUnits(int number)
{
  return number % 10;
}
int getTens(int number)
{
  return (number % 100) / 10;
}
int getHundreds(int number)
{
  return (number % 1000) / 100;
}
