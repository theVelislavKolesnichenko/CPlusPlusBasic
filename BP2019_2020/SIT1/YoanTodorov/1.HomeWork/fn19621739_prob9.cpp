#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, h;
    cout << "Vavedete stranata na triagalnika: ";cin >> a;
    cout << "vavedete visochinata na triagalnika: ";cin >> h;
    float S = (a*h)*1/2;
    cout << "Liceto na triagalnika e: " << S;
    return 0;
}
