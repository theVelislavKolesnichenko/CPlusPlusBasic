#include <iostream>
#include <math.h>

using namespace std;

float doMath(float, float);

main()
{
  float a, c;

  cout << "a = ";
  cin >> a;
  cout << "c = ";
  cin >> c;

  if (a < 1 || c == 0)
    cout << "Invalid Input";
  else
    cout << "𝑦 = √(𝑎+2) − 2/𝑐 = " << doMath(a, c);
}

float doMath(float a, float c)
{
  return sqrt(a + 2) - 2 / c;
}
