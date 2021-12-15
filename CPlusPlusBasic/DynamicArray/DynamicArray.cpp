#include <iostream>
using namespace std;

int main()
{
	int* ptr = (int*)malloc(1 * sizeof(int));
	int count;
	do
	{
		cout << "Enter array length: ";
		cin >> count;

		cout << "ptr: " << ptr << endl;

		ptr = (int*)malloc(count * sizeof(int));

		cout << "sizeof(ptr): " << sizeof(ptr) << endl;
		cout << "ptr: " << ptr << endl;
		for (int index = 0; index < count; index++)
		{
			cout << "ptr[i] = ";
			cin >> ptr[index];
		}

		for (int index = 0; index < count; index++)
		{
			cout << "ptr[i] = ";
			cout << ptr[index] << endl;
		}

	} while (true);
}
