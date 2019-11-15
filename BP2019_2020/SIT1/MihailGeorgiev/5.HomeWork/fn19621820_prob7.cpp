#include <iostream>

using namespace std;

bool primeNums(int);

main()
{

  for (int i = 2; i < 20; i++)
  {
    if (primeNums(i))
      cout << i << endl;
  }
}

bool primeNums(int n)
{
  for (int i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      return false;
    }
  }

  return true;
}
