#include <iostream> 
#include <time.h>
using namespace std;

void array_sort(int arr[], int n);
void array_in(int arr[], int size);
void array_print(int arr[], int size);

int main()
{
    const int lenght = 50;
    int arr[lenght];
    array_in(arr, lenght);
    cout << "Print \n";
    array_print(arr, lenght);
    array_sort(arr, lenght);
    cout << "Sorted \n";
    array_print(arr, lenght);
    return 0;
}

void array_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void array_in(int arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++) 
    {
        //[1;100]
        //f = a*x^2 + bx + c = 0 
        arr[i] = 1 + rand() % 100;
    }

}

void array_print(int arr[], int size)
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}