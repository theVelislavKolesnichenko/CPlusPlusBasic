#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>
 
using namespace std;
 
struct Athlete {
    char name[50];
    int rating[5];
};

void in(Athlete athlets[], int size);
void out(Athlete athlets[], int size);
void out(Athlete athlets);
int max(Athlete athlets[], int size);
int min(Athlete athlets[], int size);
void sort(Athlete athlets[], int size);
double avg(int rating[], int size);
 
int main()
{
    setlocale(LC_ALL, "BG");
    const int size = 5;
    Athlete athlets[size];
    unsigned short option = 0;
    char choice = 'n';
    do {
        cout << "\nИзберете действие" << endl;
        cout << "1. Въвеждане на резултатите на състезателките\n"
            "2. Извеждане на резултатите\n"
            "3. Най-висока средна оценка\n"
            "4. Най-ниска средна оценка\n"
            "5. Класиране\n"
            "6. Изход" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
        {
            cin.ignore();
            in(athlets, size);
            break;
        }
        case 2:
        {
            out(athlets, size);
            break;
        }
        case 3:
        {
            int index = max(athlets, size);
            out(athlets[index]);
            break;
        }
        case 4:
        {
            int index = min(athlets, size);
            out(athlets[index]);
            break;
        }
        case 5:
        {
            sort(athlets, size);
            out(athlets, size);
            break;
        }
        case 6:
        {
            cout << "Наистина ли искате да напуснете програмата? \nИзберете y за потвърждение или друга буква за отказ." << endl;
            cin >> choice;
            if (choice == 'y')
            {
                option = 0;
                cout << "Довиждане!" << endl;
            }
            break;
        }
        default:
        {
            cout << "Невалиден избор" << endl;
            break;
        }
        }
 
    } while (choice != 'y');
 
    return 0;
}
 
void in(Athlete athlets[], int size) 
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        cout << "Enter name: ";
        cin.getline(athlets[i].name, 50);
        for (int j = 0; j < 5; j++)
        {
            athlets[i].rating[j] = 30 - rand() % 11;
        }
    }
}

void out(Athlete athlets[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << athlets[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Rating " << j + 1 << " "
                << athlets[i].rating[j] << endl;
        }
        cout << "Avg: " << avg(athlets[i].rating, 5) << endl;
    }
}

void out(Athlete athlets)
{
    cout << "Name: " << athlets.name << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << "Rating " << j + 1 << " "
            << athlets.rating[j] << endl;
    }
    cout << "Avg: " << avg(athlets.rating, 5) << endl;
}

int max(Athlete athlets[], int size) 
{
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (avg(athlets[i].rating, 5) > avg(athlets[index].rating, 5)) 
        {
            index = i;
        }
    }

    return index;
}

int min(Athlete athlets[], int size) 
{
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (avg(athlets[i].rating, 5) < avg(athlets[index].rating, 5))
        {
            index = i;
        }
    }

    return index;
}

void sort(Athlete athlets[], int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (avg(athlets[j].rating, 5) < avg(athlets[j + 1].rating, 5))
            {
                Athlete temp = athlets[j];
                athlets[j] = athlets[j + 1];
                athlets[j + 1] = temp;
            }
        }
    }
}

double avg(int rating[], int size) 
{
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + rating[i];
    }

    return sum / size;
}