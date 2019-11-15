#include <iostream>
#include <string>

using namespace std;

void MUL(int &, int, int);

main()
{
  int mul(0), a, b;

  do
  {
    cin >> a >> b;
  } while (a < b);

  cout << mul << endl;
  MUL(mul, a, b);
  cout << mul << endl;
}

void MUL(int &mul, int a, int b)
{
  mul = a * b;
}
