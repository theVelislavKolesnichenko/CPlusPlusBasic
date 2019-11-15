#include <iostream>

using namespace std;

struct triangle
{
  unsigned int a, b, c;
};

int p(triangle abc);
triangle createTriangle();

main()
{
  triangle abc;

  abc = createTriangle();

  cout << "p = " << p(abc);
}

triangle createTriangle()
{
  triangle abc;

  cout << "Старната а = ";
  cin >> abc.a;

  cout << "Старната b = ";
  cin >> abc.b;

  cout << "Старната c = ";
  cin >> abc.c;

  return abc;
}

int p(triangle abc)
{
  return abc.a + abc.b + abc.c;
}
