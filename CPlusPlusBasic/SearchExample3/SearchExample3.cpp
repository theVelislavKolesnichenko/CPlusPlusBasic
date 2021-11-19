#include <iostream>
using namespace std;

int searchIndexOfMaxValue(int a[], int count);

int main()
{
    const int count = 7;
    int array[count] = { 1, 2, 3, 30, 1, 70, 4 };

    int index = searchIndexOfMaxValue(array, count);

    cout << "Max value is " << array[index]
        << "\n number of index is " << index << endl;
}

int searchIndexOfMaxValue(int a[], int count) 
{
    int index = 0;//index of elements with max value
    for (int i = 1; i < count; i++)
    {
        if (a[index] < a[i]) 
        {
            index = i;
        }
    }
    return index;
}

