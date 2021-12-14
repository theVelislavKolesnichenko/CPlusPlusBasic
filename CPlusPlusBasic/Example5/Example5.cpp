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
		cout << " 1. �������� ������� �� ������\n"
			<< " 2. �������� ������� �� ������\n"
			<< " 3. �������� ������ � ��������� 1\n"
			<< " 4. �������� ������ � ��������� 2\n"
			<< " 5. ��� �� �������� � ������ 1\n"
			<< " 6. ��� �� �������� � ������ 2\n"
			<< " 7. ��� �� �������� � ������ 3\n"
			<< " 8. ��� �� �������� � ������ 4\n"
			<< " 9. ������� �� ������ �� ������� 1\n"
			<< "10. ������� �� ������ �� ������� 2\n"
			<< "11.���������� �� ����\n"
			<< "12. ��������\n"
			<< "�������� (1 - 12): ";

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
			cout << "�������� ��������� �� ����: ";
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
			cout << "�������� ����� ����: ";
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
			cout << "�������� ����� ����: ";
			cin >> number;
			if (isWithAC(number, rooms, length))
			{
				cout << "������ � �����: "
					<< number << "��� ��������"
					<< endl;
			}
			else
			{
				cout << "������ � �����: "
					<< number << "���� ��������"
					<< endl;
			}
			system("pause");
		}
		break;
		case 8:
		{
			if (isWithAC(rooms, length))
			{
				cout << "������ � �����: "
					<< "��� ��������"
					<< endl;
			}
			else
			{
				cout << "������ � �����: "
					<< "���� ��������"
					<< endl;
			}
			system("pause");
		}
		break;
		case 9:
		{
			int number;
			cout << "�������� ����� ����: ";
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
			cout << "��������� �����! �������� ������\n";
			break;
		}
	} while (option != 12);

	return 0;
}

void in(Room rooms[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "�������� ����� �� ���� " << i + 1 << endl;
		cout << "�����: ";
		cin >> rooms[i].number;
		cout << "���������: ";
		cin >> rooms[i].capacity;
		cout << "��� �� ��������: ";
		cin >> rooms[i].hasAC;
		cout << "����: ";
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
	cout << "����� �� ���� � "
		<< "�����: " << room.number;
	cout << "\n���������: " << room.capacity;

	if (room.hasAC)
	{
		cout << "\n������ � � ��������";
	}
	else
	{
		cout << "\n������ � ��� ��������";
	}

	cout << "\n����: " << room.price << "��\n";
}

void outByCapacity(int capacity, Room rooms[], int length)
{
	cout << "������ � ���������: "
		<< capacity << "��:" << endl;
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
	cout << "�������� ��������� �� ����: ";
	cin >> capacity;
	cout << "������ � ���� ��������� ��: \n";
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
	cout << "������ � �����: " << number;
	for (int i = 0; i < length; i++)
	{
		if (rooms[i].number == number)
		{
			if (rooms[i].hasAC)
			{
				cout << " ��� ��������" << endl;
			}
			else
			{
				cout << " ���� ��������" << endl;
			}
			break;
		}
	}
}

void outWithAC(Room rooms[], int length)
{
	int number;
	cout << "�������� ����� ����: ";
	cin >> number;
	cout << "������ � �����: " << number;
	for (int i = 0; i < length; i++)
	{
		if (rooms[i].number == number)
		{
			if (rooms[i].hasAC)
			{
				cout << " ��� ��������" << endl;
			}
			else
			{
				cout << " ���� ��������" << endl;
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
	cout << "�������� ����� ����: ";
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
			cout << "������ �� ������� � "
				<< rooms[i].price
				<< endl;
			cout << "�� ��������� �� ������: (Y/N)";
			char ch;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				cout << "�������� ������ ����: ";
				cin >> rooms[i].price;
			}
			return;
		}
	}

	cout << "���� ������ ����" << endl;
}

void editPrice(Room rooms[], int length)
{
	int number;
	cout << "�������� ����� ����: ";
	cin >> number;
	for (int i = 0; i < length; i++)
	{
		if (rooms[i].number == number)
		{
			cout << "������ �� ������� � "
				<< rooms[i].price
				<< endl;
			cout << "�� ��������� �� ������: (Y)";
			char ch;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				cout << "�������� ������ ����: ";
				cin >> rooms[i].price;
			}
			return;
		}
	}

	cout << "���� ������ ����" << endl;
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