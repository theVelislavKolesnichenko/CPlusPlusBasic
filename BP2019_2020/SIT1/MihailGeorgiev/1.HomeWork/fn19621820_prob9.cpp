#include <iostream>

using namespace std;

main()
{
  float a, ha, s;

  cout << "Въведете страната на триъгълника: ";
  cin >> a;

  cout << "Въведете височината на триъгълника: ";
  cin >> ha;

  s = (a * ha) / 2;

  cout << "Стойнтостта на лицето на триъгълника е равна на: " << s;
}
