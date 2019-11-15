#include <iostream>

using namespace std;

float inputInVar(char ch);

float calc(float a, float b);

main()
{
  float a, b;

  a = inputInVar('A');
  b = inputInVar('B');

  cout << "x = 2((a−b)/(b−a)) = " << calc(a, b);
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
  return 2 * ((a - b) / (b - a));
}
