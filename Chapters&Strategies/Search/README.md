# Търсене на най-малка стойност в масив

```c++
#include <iostream> 
#include <time.h>
using namespace std;

int array_min(int arr[], int n);
void array_in(int arr[], int size);
void array_print(int arr[], int size);

int main()
{
    int arr[50];
    array_in(arr, 50);
    cout << "Print \n";
    array_print(arr, 50);
    cout << "Min: " << array_min(arr, 50) << endl;
    return 0;
}

int array_min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void array_in(int arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 100 + 1;
}

void array_print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
```

# Търсене на най-голяма стойност в масив

```c++
#include <iostream> 
#include <time.h>
using namespace std;

int array_max(int arr[], int n);
void array_in(int arr[], int size);
void array_print(int arr[], int size);

int main()
{
    int arr[50];
    array_in(arr, 50);
    cout << "Print \n";
    array_print(arr, 50);
    cout << "Min: " << array_max(arr, 50) << endl;
    return 0;
}

int array_max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void array_in(int arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 100 + 1;
}

void array_print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
```

# Търсене на стойност в масив

```c++
#include <iostream> 
#include <time.h>
using namespace std;

bool array_search(int arr[], int n, int value);
void array_in(int arr[], int size);
void array_print(int arr[], int size);

int main()
{
    int arr[50], value;
    array_in(arr, 50);
    cout << "Print \n";
    array_print(arr, 50);

    cout << "Enter search number: " << endl;
    cin >> value;

    if (array_search(arr, 50, value))
    {
        cout << value << " Existing in array" << endl;
    }
    else
    {
        cout << value << " NO Existing in array" << endl;
    }
    return 0;
}

bool array_search(int arr[], int n, int value)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == value)
        {
            return true;
        }
    }
    return false;
}

void array_in(int arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 100 + 1;
}

void array_print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

```
