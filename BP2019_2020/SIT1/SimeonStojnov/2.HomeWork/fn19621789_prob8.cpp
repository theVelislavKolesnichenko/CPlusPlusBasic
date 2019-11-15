#include <iostream>

using namespace std;

double calcSpeed (float t, float S);
double calcTime (float v, float S);

int main() {
    float t, v, S(987);

    cout << "Insert time (in hours) for the train travel: " << endl;
    cin >> t;

    cout << "If the time is " << t << " then the speed of the train will be " << calcSpeed(t, S) << endl;

    cout << "Insert speed for the train travel: " << endl;
    cin >> v;

    cout << "If the speed of the train is " << v << " then the time will be " << calcTime(v, S);

    return 0;
}

double calcSpeed (float t, float S) {
    float v;

    v = S / t;

    return v;
}

double calcTime (float v, float S) {
    float t;

    t = S / v;

    return t;
}