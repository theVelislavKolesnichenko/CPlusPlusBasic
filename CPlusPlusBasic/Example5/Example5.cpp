#include <iostream>
using namespace std;

struct Room {
	int number, capacity;
	double price;
	bool hasAC;
};

void in(Room rooms[], int length);
void out(Room rooms[], int length);
void out(Room rooms);
void outByCapacity(int capacity, Room rooms[], int length);
void outByCapacity(Room rooms[], int length);
void outWithAC(int number, Room rooms[], int length);
void outWithAC(Room rooms[], int length);
bool isWithAC(int number, Room rooms[], int length);
bool isWithAC(Room rooms[], int length);
void editPrice(int number, Room rooms[], int length);
void editPrice(Room rooms[], int length);
void sort(Room rooms[], int length);

int main()
{
	setlocale(LC_ALL, "");
	int option;
	const int length = 7;
	Room rooms[length];
	do
	{
		system("cls");
		cout << " 1. Въведете данните за стаите\n"
			<< " 2. Изведете данните за стаите\n"
			<< " 3. Изведете стаите с капацитеп 1\n"
			<< " 4. Изведете стаите с капацитеп 2\n"
			<< " 5. Има ли климатик в стаята 1\n"
			<< " 6. Има ли климатик в стаята 2\n"
			<< " 7. Има ли климатик в стаята 3\n"
			<< " 8. Има ли климатик в стаята 4\n"
			<< " 9. Промяна на цената за нощувка 1\n"
			<< "10. Промяна на цената за нощувка 2\n"
			<< "11.Подреждане по цена\n"
			<< "12. Излизане\n"
			<< "Изберете (1 - 12): ";

		cin >> option;
		system("cls");

		switch (option)
		{
		case 1:
		{
			in(rooms, length);
		}
		break;
		case 2:
		{
			out(rooms, length);
			system("pause");

		}
		break;
		case 3:
		{
			int capacity;
			cout << "Въведете капацитет за сатя: ";
			cin >> capacity;
			outByCapacity(capacity, rooms, length);
			system("pause");
		}
		break;
		case 4:
		{
			outByCapacity(rooms, length);
			system("pause");
		}
		break;
		case 5:
		{
			int number;
			cout << "Въведете номер сатя: ";
			cin >> number;
			outWithAC(number, rooms, length);
			system("pause");
		}
		break;
		case 6:
		{
			outWithAC(rooms, length);
			system("pause");
		}
		break;
		case 7:
		{
			int number;
			cout << "Въведете номер сатя: ";
			cin >> number;
			if (isWithAC(number, rooms, length))
			{
				cout << "Стаята с номер: "
					<< number << "има климатик"
					<< endl;
			}
			else
			{
				cout << "Стаята с номер: "
					<< number << "няма климатик"
					<< endl;
			}
			system("pause");
		}
		break;
		case 8:
		{
			if (isWithAC(rooms, length))
			{
				cout << "Стаята с номер: "
					<< "има климатик"
					<< endl;
			}
			else
			{
				cout << "Стаята с номер: "
					<< "няма климатик"
					<< endl;
			}
			system("pause");
		}
		break;
		case 9:
		{
			int number;
			cout << "Въведете номер сатя: ";
			cin >> number;
			editPrice(number, rooms, length);
			system("pause");
		}
		break;
		case 10:
		{
			editPrice(rooms, length);
			system("pause");
		}
		break;
		case 11:
		{
			sort(rooms, length);
		}
		break;
		default:
			cout << "Невалиден избор! Изберете отново\n";
			break;
		}
	} while (option != 12);

	return 0;
}

void in(Room rooms[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "Въведете данни за стая " << i + 1 << endl;
		cout << "Номер: ";
		cin >> rooms[i].number;
		cout << "Капацитет: ";
		cin >> rooms[i].capacity;
		cout << "Има ли климатик: ";
		cin >> rooms[i].hasAC;
		cout << "Цена: ";
		cin >> rooms[i].price;
	}
}

void out(Room rooms[], int length)
{
	for (int i = 0; i < length; i++)
	{
		out(rooms[i]);
	}
}

void out(Room room)
{
	cout << "Данни за стая с "
		<< "номер: " << room.number;
	cout << "\nКапацитет: " << room.capacity;

	if (room.hasAC)
	{
		cout << "\nСтаята е с климатик";
	}
	else
	{
		cout << "\nСтаята е без климатик";
	}

	cout << "\nЦена: " << room.price << "лв\n";
}

void outByCapacity(int capacity, Room rooms[], int length)
{
	cout << "Стайте с капацитет: "
		<< capacity << "са:" << endl;
	for (int i = 0; i < length; i++)
	{
		if (capacity == rooms[i].capacity)
		{
			out(rooms[i]);
			cout << endl;
		}
	}
}

void outByCapacity(Room rooms[], int length)
{
	int capacity;
	cout << "Въведете капацитет за сатя: ";
	cin >> capacity;
	cout << "Стайте с този капацитет са: \n";
	for (int i = 0; i < length; i++)
	{
		if (capacity == rooms[i].capacity)
		{
			out(rooms[i]);
			cout << endl;
		}
	}
}

void outWithAC(int number, Room rooms[], int length)
{
	cout << "Стаята с номер: " << number;
	for (int i = 0; i < length; i++)
	{
		if (rooms[i].number == number)
		{
			if (rooms[i].hasAC)
			{
				cout << " има климатик" << endl;
			}
			else
			{
				cout << " няма климатик" << endl;
			}
			break;
		}
	}
}

void outWithAC(Room rooms[], int length)
{
	int number;
	cout << "Въведете номер сатя: ";
	cin >> number;
	cout << "Стаята с номер: " << number;
	for (int i = 0; i < length; i++)
	{
		if (rooms[i].number == number)
		{
			if (rooms[i].hasAC)
			{
				cout << " има климатик" << endl;
			}
			else
			{
				cout << " няма климатик" << endl;
			}
			break;
		}
	}
}

bool isWithAC(int number, Room rooms[], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (rooms[i].number == number)
		{
			return rooms[i].hasAC;
		}
	}

	return false;
}

bool isWithAC(Room rooms[], int length)
{
	int number;
	cout << "Въведете номер сатя: ";
	cin >> number;
	for (int i = 0; i < length; i++)
	{
		if (rooms[i].number == number)
		{
			return rooms[i].hasAC;
		}
	}

	return false;
}

void editPrice(int number, Room rooms[], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (rooms[i].number == number)
		{
			cout << "Цената за нощувка е "
				<< rooms[i].price
				<< endl;
			cout << "Ще промените ли цената: (Y/N)";
			char ch;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				cout << "Въведете новата цена: ";
				cin >> rooms[i].price;
			}
			return;
		}
	}

	cout << "Няма такава стая" << endl;
}

void editPrice(Room rooms[], int length)
{
	int number;
	cout << "Въведете номер сатя: ";
	cin >> number;
	for (int i = 0; i < length; i++)
	{
		if (rooms[i].number == number)
		{
			cout << "Цената за нощувка е "
				<< rooms[i].price
				<< endl;
			cout << "Ще промените ли цената: (Y)";
			char ch;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				cout << "Въведете новата цена: ";
				cin >> rooms[i].price;
			}
			return;
		}
	}

	cout << "Няма такава стая" << endl;
}

void sort(Room rooms[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (rooms[j].price > rooms[j + 1].price)
			{
				Room t = rooms[j];
				rooms[j] = rooms[j + 1];
				rooms[j + 1] = t;
			}
		}
	}
}