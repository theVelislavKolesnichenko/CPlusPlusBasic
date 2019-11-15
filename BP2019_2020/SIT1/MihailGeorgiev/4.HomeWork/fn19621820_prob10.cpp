#include <iostream>
#include <math.h>

using namespace std;

float doMath(int);

main()
{
  int number;

  cout << "Въведете число: ";
  cin >> number;

  cout << "Сумата е: " << doMath(number);
}

float doMath(int number)
{
  int sum(0);

  for (int i = 0; i < 20; i++)
  {
    sum += pow(number, i) + i / 2 + 1;
  }

  return sum;
}
