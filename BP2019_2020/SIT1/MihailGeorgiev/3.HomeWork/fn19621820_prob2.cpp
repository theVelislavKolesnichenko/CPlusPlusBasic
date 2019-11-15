#include <iostream>

using namespace std;

int inputInVar(char ch);
int max(int a, int b);

main()
{
  int a, b;

  a = inputInVar('A');
  b = inputInVar('B');

  cout << max(a, b);
}

int inputInVar(char ch)
{
  int temp;

  cout << ch << "= ";
  cin >> temp;

  return temp;
}

int max(int a, int b)
{
  return a >= b ? a : b;
}
