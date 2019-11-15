#include <iostream>

using namespace std;

float inputInVar(char ch);

float sum(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

main()
{
  float a, b, c, d, e, f, g, h;

  a = inputInVar('A');
  b = inputInVar('B');

  cout << "a + b = " << a << " + " << b << " = " << sum(a, b) << endl;

  c = inputInVar('C');
  d = inputInVar('D');

  cout << "c - d = " << c << " - " << d << " = " << sub(c, d) << endl;

  e = inputInVar('E');
  f = inputInVar('F');

  cout << "e / f = " << e << " / " << f << " = " << div(e, f) << endl;

  g = inputInVar('G');
  h = inputInVar('H');

  cout << "g * h = " << g << " * " << h << " = " << mul(g, h) << endl;
}

float inputInVar(char ch)
{
  float temp;

  cout << ch << "= ";
  cin >> temp;

  return temp;
}

float sum(float a, float b)
{
  return a + b;
}

float sub(float a, float b)
{
  return a - b;
}

float mul(float a, float b)
{
  return a * b;
}

float div(float a, float b)
{
  return a / b;
}
