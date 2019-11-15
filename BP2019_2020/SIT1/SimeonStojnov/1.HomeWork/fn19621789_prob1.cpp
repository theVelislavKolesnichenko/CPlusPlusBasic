#include <iostream>

using namespace std;

int main() {
    int a, b;
    float c, d;

    // The user inserts value for A
    cout << "A = ";
    cin >> a;

    // The user inserts value for B
    cout << "B = ";
    cin >> b;

    // We divide A by B and show the result
    c = a / b;
    cout << "A divided by B equals " << c << endl;

    // We divide float A by B and show the result
    d = (float) a / b;
    cout << "float A divided by B equals " << d << endl;

    /*
        След въвеждане на двете целочислени променливи (a и b), първото деление, което извършваме се присвоява към променливата c.
        При извеждане на c, ние получаваме А, разделено на B, като важното е, че независимо дали имаме остатък от делението - то ние няма да получим нещо различно от цяло число.
        Например: A = 8, B = 10 ---> C = 8 / 10 ---> 0.

        При извеждане на d, след присвояване на стойността A (с плаваща запетая) / B, ние получаваме различен резултат от C, тъй като вместо две целочислени променливи,
        ние делим променлива с плаваща запетая (A) и цялото число B и това ни дава възможност да получим резултат, различен от цяло число за d.
        Например: A = 8, B = 10 ---> D = (float) 8 / 10 ---> 0,8.
     */

    return 0;
}