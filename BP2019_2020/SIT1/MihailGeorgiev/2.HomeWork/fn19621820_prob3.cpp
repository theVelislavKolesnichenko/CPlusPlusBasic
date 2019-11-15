#include <iostream>

using namespace std;

float inputInVar(char ch);

float avg(float a, float b, float c, float d);

main()
{
  float a, b, c, d;

  a = inputInVar('A');
  b = inputInVar('B');
  c = inputInVar('C');
  d = inputInVar('D');

  cout << avg(a, b, c, d);
}

float inputInVar(char ch)
{
  float temp;

  cout << ch << "= ";
  cin >> temp;

  return temp;
}

float avg(float a, float b, float c, float d)
{
  return (a + b + c + d) / 4;
}
