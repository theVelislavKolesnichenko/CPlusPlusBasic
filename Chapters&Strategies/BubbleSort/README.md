## Bubble Sort Сортиране по метода на мехурчето 

### Пример

```  
#include <iostream> 
#include <time.h>
using namespace std; 

void array_sort(int arr[], int n);
void array_in(int arr[], int size);   
void array_print(int arr[], int size);
  
int main()  
{  
    int arr[50];
    array_in(arr, 50);
    cout << "Print \n";
    array_print(arr, n); 
    array_sort(arr, n);  
    cout<<"Sorted \n";  
    array_print(arr, n);  
    return 0;  
}  

void array_sort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)
    {
      for (j = 0; j < n-i-1; j++)  
      {
        if (arr[j] > arr[j+1])  
        {
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
}  

void array_in(int arr[], int size)  
{  
    srand(time(0));
    for (int i = 0; i < size; i++)  
      arr[i] = radn()%100+1;   
}  

void array_print(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
```
