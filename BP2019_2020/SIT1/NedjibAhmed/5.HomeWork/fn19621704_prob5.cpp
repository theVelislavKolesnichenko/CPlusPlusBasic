#include <iostream>

using std::cout;
using std::cin;

float Avg10();

int main()
{   
    float avg;

    cout << "Input 10 numbers to see their average\n";
    avg = Avg10();
    cout << "The average of the 10 numbers you input is " << avg << std::endl;
    

}
float Avg10()
{
    float sum, avg, x, count;
    sum = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> x;
        sum = sum + x;
        count++;
    }
    avg = sum/count;

    return avg;
}