#include <iostream>

using namespace std;

float calcSpeed(int time);
float calcTime(int speed);

const int dis = 987;

main()
{
  int speed, time;

  cout << "Time = ";
  cin >> time;

  cout << "Speed needed is: " << calcSpeed(time) << "km/h" << endl;

  cout << "Speed = ";
  cin >> speed;

  cout << "Time is: " << calcTime(speed) << "h";
}

float calcTime(int speed)
{
  return dis / speed;
}

float calcSpeed(int time)
{
  return dis / time;
}
