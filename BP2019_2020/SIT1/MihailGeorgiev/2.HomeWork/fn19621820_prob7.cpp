#include <iostream>

using namespace std;

float inputInVar(char ch);

float calc(float y);

main()
{
  float y;

  y = inputInVar('Y');

  cout << "x = 2(2y + 5)/(14 – y/3) = " << calc(y);
}

float inputInVar(char ch)
{
  float temp;

  cout << ch << "= ";
  cin >> temp;

  return temp;
}

float calc(float y)
{
  return 2 * (2 * y + 5) / (14 - 3 * y);
}
