/*
Съзтавете програма за налични контейнери в пристанище
Един контейнер е дефинира с номер на контейнера, товарен капацитет и натоварено тегло
- Съставете функция за въвеждане на масив от контейнери
- Съставете функция за извеждане на масив от контейнери
- Съставете Функция за намиране на контейнера с най-голям товарен капацитет
- Съставете Функция за намиране на контейнера с най-малък товарен капацитет
- Съставете Функция за намиране на контейнера с най-голям натоварено тегло
- Съставете Функция за намиране на контейнера с най-малък натоварено тегло
- Съставете Функция за сортиране на контейнерите по полезно тегло въввъзходящ ред (полезното тегло е разликата от товарен капацитет и натоварено тегло)
В main съставете меню за използването на функциите и масив от 100 контейнера, да се избира колко контейнера се намират в пристанището в момента.
*/

#include <iostream>
using namespace std;

struct Container {
    int number;
    double capacity, weight;
};

void in(Container containers[], int size);
void out(Container containers[], int size);
void out(Container containers);
Container maxCapacity(Container containers[], int size);
Container minCapacity(Container containers[], int size);
Container maxWeight(Container containers[], int size);
Container minWeight(Container containers[], int size);
int indexOfMaxCapacity(Container containers[], int size);
int indexOfMinCapacity(Container containers[], int size);
int indexOfMaxWeight(Container containers[], int size);
int indexOfMinWeight(Container containers[], int size);
void sort(Container containers[], int size);

/*
В main съставете меню за използването на функциите и масив от 100 контейнера, да се избира колко контейнера се намират в пристанището в момента.
*/
int main()
{
    const int size = 100;
    Container containers[size];
    int count = 0;

    do
    {
        cout << "Enter container count (1 - 100): ";
        cin >> count;
    } while (count < 1 || count > 100);

    int choice = 0;
    do
    {
        system("cls");
        cout << "\t1. Enter conteiners\n"
            << "\t2. Print containers\n"
            << "\t3. Print container wiht max capacity\n"
            << "\t4. Print container wiht min capacity\n"
            << "\t5. Print container wiht max weight\n"
            << "\t6. Print container wiht min weight\n"
            << "\t7. Sort containers\n"
            << "\t8. Exit\n"
            << "Select: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            in(containers, count);
        }
        break;
        case 2:
        {
            out(containers, count);
            system("pause");
        }
        break;
        case 3:
        {
            Container container = maxCapacity(containers, count);
            out(container);

            //int index = indexOfMaxCapacity(containers, count);
            //out(containers[index]);
            system("pause");
        }
        break;
        case 4:
        {
            Container container = minCapacity(containers, count);
            out(container);

            //int index = indexOfMinCapacity(containers, count);
            //out(containers[index]);
            system("pause");
        }
        break;
        case 5:
        {
            Container container = maxWeight(containers, count);
            out(container);

            /*int index = indexOfMaxWeight(containers, count);
            out(containers[index]);*/
            system("pause");
        }
        break;
        case 6:
        {
            Container container = minWeight(containers, count);
            out(container);

            /*int index = indexOfMinWeight(containers, count);
            out(containers[index]);*/

            system("pause");
        }
        break;
        case 7:
        {
            sort(containers, count);
            system("pause");
        }
        break;
        case 8:
            cout << "GoodBye" << endl;
            system("pause");
            break;
        default:
            cout << "Invalid selection" << endl;
            system("pause");
            break;
        }

    } while (choice != 8);

    return 0;
}

void in(Container containers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> containers[i].number;
        cout << "Enter capacity: ";
        cin >> containers[i].capacity;
        cout << "Enter weight: ";
        cin >> containers[i].weight;
    }
}

void out(Container containers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        out(containers[i]);
    }
}

void out(Container containers)
{
    cout << "Enter number: " << containers.number;
    cout << "\nEnter capacity: " << containers.capacity;
    cout << "\nEnter weight: " << containers.weight;
    cout << "\nUsed weight: " << containers.capacity - containers.weight << endl;
}

Container maxCapacity(Container containers[], int size)
{
    Container containerWithMaxCapacity = containers[0];
    for (int i = 1; i < size; i++)
    {
        if (containerWithMaxCapacity.capacity < containers[i].capacity)
        {
            containerWithMaxCapacity = containers[i];
        }
    }
    return containerWithMaxCapacity;
}

Container minCapacity(Container containers[], int size)
{
    Container containerWithMinCapacity = containers[0];
    for (int i = 1; i < size; i++)
    {
        if (containerWithMinCapacity.capacity > containers[i].capacity)
        {
            containerWithMinCapacity = containers[i];
        }
    }
    return containerWithMinCapacity;
}

Container maxWeight(Container containers[], int size)
{
    Container containerWithMaxWeight = containers[0];
    for (int i = 1; i < size; i++)
    {
        if (containerWithMaxWeight.weight < containers[i].weight)
        {
            containerWithMaxWeight = containers[i];
        }
    }
    return containerWithMaxWeight;
}

Container minWeight(Container containers[], int size)
{
    Container containerWithMinWeight = containers[0];
    for (int i = 1; i < size; i++)
    {
        if (containerWithMinWeight.weight > containers[i].weight)
        {
            containerWithMinWeight = containers[i];
        }
    }
    return containerWithMinWeight;
}

/*
Съставете Функция за сортиране на контейнерите по полезно тегло въввъзходящ ред (полезното тегло е разликата от товарен капацитет и натоварено тегло)
*/
void sort(Container containers[], int size)
{
    double sum1, sum2;
    Container temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            sum1 = containers[j].capacity - containers[j].weight;
            sum2 = containers[j + 1].capacity - containers[j + 1].weight;
            if (sum1 > sum2)
            {
                temp = containers[j];
                containers[j] = containers[j + 1];
                containers[j + 1] = temp;
            }
        }
    }
}

int indexOfMaxCapacity(Container containers[], int size)
{
    int indexOfContainerWithMaxCapacity = 0;
    for (int i = 1; i < size; i++)
    {
        if (containers[indexOfContainerWithMaxCapacity].capacity < containers[i].capacity)
        {
            indexOfContainerWithMaxCapacity = i;
        }
    }
    return indexOfContainerWithMaxCapacity;
}

int indexOfMinCapacity(Container containers[], int size)
{
    int indexOfContainerWithMinCapacity = 0;
    for (int i = 1; i < size; i++)
    {
        if (containers[indexOfContainerWithMinCapacity].capacity > containers[i].capacity)
        {
            indexOfContainerWithMinCapacity = i;
        }
    }
    return indexOfContainerWithMinCapacity;
}

int indexOfMaxWeight(Container containers[], int size)
{
    int indexOfContainerWithMaxWeight = 0;
    for (int i = 1; i < size; i++)
    {
        if (containers[indexOfContainerWithMaxWeight].weight < containers[i].weight)
        {
            indexOfContainerWithMaxWeight = i;
        }
    }
    return indexOfContainerWithMaxWeight;
}

int indexOfMinWeight(Container containers[], int size)
{
    int indexOfContainerWithMinWeight = 0;
    for (int i = 1; i < size; i++)
    {
        if (containers[indexOfContainerWithMinWeight].weight > containers[i].weight)
        {
            indexOfContainerWithMinWeight = i;
        }
    }
    return indexOfContainerWithMinWeight;
}