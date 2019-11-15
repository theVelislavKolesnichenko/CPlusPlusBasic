#include <iostream>

using namespace std;

main()
{
  float x, y;

  cout << "Въведете стойността на Y: ";
  cin >> y;

  x = (2 * y + 5) / (14 - y / 3);

  cout << "Стойнтостта на x = (2y + 5)/(14 - y/3) е равна на: " << x;
}
