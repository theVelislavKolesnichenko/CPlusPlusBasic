#include <iostream>
#include <math.h>

using namespace std;

float inputInVar(char ch);

float calc(float a, float b);

main()
{
  float a, b;

  a = inputInVar('A');
  b = inputInVar('B');

  cout << "x = (a+b)³ + (a² + 2ba – 2ab + b²) = " << calc(a, b);
}

float inputInVar(char ch)
{
  float temp;

  cout << ch << "= ";
  cin >> temp;

  return temp;
}

float calc(float a, float b)
{
  return pow((a + b), 3) + pow(a, 2) + 2 * a * b - 2 * a * b + pow(b, 2);
}
