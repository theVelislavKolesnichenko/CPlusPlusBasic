#include <iostream>

using std::cout;
using std::cin;

const int distance = 987;

int train_speed(int time);
int train_time(int speed);

int main()
{
    int t, s;
    cout << "How much hours does the train travel? " << std::endl;
    cin >> t;
    cout << "What is the speed of the train in km/h? " << std::endl;
    cin >> s;
    cout << "The speed of the train is " << train_speed(t) << "km/h " << "when it travels for " << t << " hours." << std::endl;
    cout << "The train travels for " << train_time(s) << " hours " << "with " << s << "km/h speed." <<std::endl; 

    return 0;
}

int train_speed(int time)
{
    return distance / time;
}

int train_time(int speed)
{
    return distance / speed;
}
