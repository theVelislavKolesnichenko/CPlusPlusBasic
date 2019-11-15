#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b;
    cout << "Vavedete stranata a na pravoagalnika: ";cin >> a;
    cout << "vavedete stranata b na pravoagalnika: ";cin >> b;
    float P = 2*(a+b);
    cout << "Obikolkata na pravoagalnika e: " << P << endl;
    float S = a*b;
    cout << "Liceto na pravoagalnika e: " << S;
    return 0;
}
