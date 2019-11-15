#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void figure1();
void figure2();
void figure3();

main()
{
  figure1();

  figure2();

  figure3();
}

void figure1()
{
  for (int i = 5; i > 0; i--)
  {
    cout << string(i, '%') << endl;
  }
}

void figure2()
{
  int rows(5), half1, half2, i(0);

  half1 = rows / 2 + 1;
  half2 = rows - half1;

  while (i <= half1)
  {
    cout << string(i, '%') << endl;
    i++;
  }

  i = half2;

  while (i >= 0)
  {
    cout << string(i, '%') << endl;
    i--;
  }
}

void figure3()
{
  int i = 5;
  do
  {
    cout << setw(5) << right << string(i, '%') << setw(5) << left << string(i, '%') << endl;
    i--;
  } while (i > 0);
}
