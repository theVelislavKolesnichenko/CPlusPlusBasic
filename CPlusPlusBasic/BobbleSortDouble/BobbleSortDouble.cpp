#include <iostream> 
#include <time.h>
using namespace std;

void array_sort(double arr[], int n);
void array_in(double arr[], int size);
void array_print(double arr[], int size);

int main()
{
    const int lenght = 50;
    double arr[lenght];
    array_in(arr, lenght);
    cout << "Print \n";
    array_print(arr, lenght);
    array_sort(arr, lenght);
    cout << "Sorted \n";
    array_print(arr, lenght);
    return 0;
}

void array_sort(double arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void array_in(double arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        //[1;100]
        double min = 1;
        double max = 100;
        arr[i] = min + (((double)rand() / RAND_MAX) * (max - min));
    }
}

void array_print(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}