#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void sum();

main()
{
  sum();
}
void sum()
{
  int a, b, c;
  cin >> a >> b >> c;
  while (!((a == 0 && b == 0) || (a == 0 && c == 0) || (c == 0 && b == 0)))
  {
    cout << a + b + c << endl;

    cin >> a >> b >> c;
  }
}
