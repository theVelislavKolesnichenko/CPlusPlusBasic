#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> split(string, char);
void positiveNegative(string);

main()
{
  string a;
  cout << "Въведете 10 числа(разделени със спейс): ";
  getline(cin, a);

  positiveNegative(a);
}

vector<string> split(string str, char delimiter)
{
  vector<string> temp;
  stringstream ss(str);
  string tok;

  while (getline(ss, tok, delimiter))
  {
    temp.push_back(tok);
  }

  return temp;
}

void positiveNegative(string str)
{
  vector<string> numbers = split(str, ' ');

  int positive(0), negative(0);

  for (string number : numbers)
  {
    (stoi(number) % 2 == 0) ? positive++ : negative++;
  }

  cout << "Положителни: " << positive << " Отрицателни: " << negative;
}
