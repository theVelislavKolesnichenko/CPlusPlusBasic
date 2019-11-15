#include <iostream>
#include <math.h>

using namespace std;

int inputInVar(char ch);
void calc(int y);

main()
{
  int y;

  y = inputInVar('Y');

  calc(y);
}

int inputInVar(char ch)
{
  int temp;

  cout << ch << "= ";
  cin >> temp;

  return temp;
}

void calc(int y)
{
  int x;
  if (y <= 5)
  {
    x = pow(y, 3) + (pow(y, 4) + 2 * y);
    cout << "x = y³ + (y4 + 2y) = " << x;
  }
  else
  {
    x = 2 * (2 * y + 5) / (14 - y / 3);
    cout << "x = 2(2y + 5)/(14 – y/3) = " << x;
  }
}
