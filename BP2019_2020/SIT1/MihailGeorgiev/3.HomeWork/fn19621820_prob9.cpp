#include <iostream>
#include <math.h>

using namespace std;

string getAge(int age);

main()
{
  int age;

  cout << "Въведете възраст: ";
  cin >> age;

  cout << getAge(age);
}

string getAge(int age)
{
  if (age > 0 && age < 1)
  {
    return "Baby";
  }
  else if (age >= 1 && age < 3)
  {
    return "Toddler";
  }
  else if (age >= 3 && age < 5)
  {
    return "Preschool";
  }
  else if (age >= 5 && age < 12)
  {
    return "Gradeschooler";
  }
  else if (age >= 13 && age < 18)
  {
    return "Teen";
  }
  else if (age >= 18 && age < 21)
  {
    return "Young Adult";
  }

  return "Невълидна възраст";
}
