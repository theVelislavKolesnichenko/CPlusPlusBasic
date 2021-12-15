#include <iostream>
using namespace std;

int searchIndexOfMaxValue(int a[], int count);

int main()
{
    const int count = 7;
    int array[count] = { 1, 2, 3, 30, 1, 70, 4 };

    int index = searchIndexOfMaxValue(array, count);

    cout << "Max value is " 
         << array[index]
         << "\n number of index is " 
         << index << endl;
}

int searchIndexOfMaxValue(int a[], int count) 
{
    //{ 1, 2, 3, 30, 1, 70, 4 }
    int index = 0;//index of elements with max value
    for (int i = 1; i < count; i++)
    {
        if (a[index] < a[i]) //30 < 70
        {
            index = i;// index = 5
        }
    }
    return index;
}

void searchIndexOfMaxAndMinValue(int a[], int count, int& maxIndex, int& minIndex)
{
    maxIndex = minIndex = 0;//index of elements with max value
    for (int i = 1; i < count; i++)
    {
        if (a[maxIndex] < a[i])
        {
            maxIndex = i;
        }
        if (a[minIndex] < a[i])
        {
            minIndex = i;
        }
    }
}

