#include <iostream> 
#include <time.h>
using namespace std;

void array_sort(char arr[], int n);
void array_in(char arr[], int size);
void array_print(char arr[], int size);

int main()
{
    const int lenght = 50;
    char arr[lenght];
    array_in(arr, lenght);
    cout << "Print \n";
    array_print(arr, lenght);
    array_sort(arr, lenght);
    cout << "Sorted \n";
    array_print(arr, lenght);
    return 0;
}

void array_sort(char arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (n - 1) - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void array_in(char arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        //[1;100]
        bool big = rand() % 2;
        if (big) {
            char min = 'A';
            char max = 'Z';
            arr[i] = min + (rand() % (max - min + 1));
        }
        else {
            char min = 'a';
            char max = 'z';
            arr[i] = min + (rand() % (max - min + 1));
        }
    }
}

void array_print(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}