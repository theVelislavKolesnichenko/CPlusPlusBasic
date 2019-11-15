#include <iostream>

using namespace std;

main()
{
  int a(576), hundreds, tens, units;

  units = a % 10;
  tens = (a % 100 - units) / 10;
  hundreds = (a % 1000 - tens - units) / 100;

  cout << "Units " << units << " Tens " << tens << " Hundreds " << hundreds;
}
