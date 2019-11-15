#include <iostream>
#include <string>

using namespace std;

void SUM(int &, int, int);

main()
{
  int sum(0), a, b;

  do
  {
    cin >> a >> b;
  } while (a < b);

  cout << sum << endl;
  SUM(sum, a, b);
  cout << sum << endl;
}

void SUM(int &sum, int a, int b)
{
  sum = a + b;
}
