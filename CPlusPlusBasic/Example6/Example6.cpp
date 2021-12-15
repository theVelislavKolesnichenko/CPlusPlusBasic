#include <iostream>
using namespace std;

struct Packet
{
	int number;
	double height, width, length;
};

void in(Packet packets[], int length);
void out(Packet packets[], int length);
int indexOfPacketWithMinVolume(Packet packets[], int length);
int indexOfPacketWithMaxVolume(Packet packets[], int length);
void out(Packet packet);
double volume(Packet packet);
double enterInRange(string str, int start, int end);

int main()
{
	setlocale(LC_ALL, "");

	const int length = 5;
	Packet packets[length];

	int option;

	do
	{
		cout << "1. Въвеждане на пратки\n"
			<< "2. Извеждане на пратки\n"
			<< "3. Пратка с най-малъук обем\n"
			<< "4. Пратка с най-голям обем\n"
			<< "5. Край\n"
			<< "Изберете от 1 до 5: ";
		cin >> option;
		switch (option)
		{
		case 1: 
		{
			in(packets, length);
		}
		break;
		case 2:
		{
			out(packets, length);
		}
		break;
		case 3:
		{
			cout << "Пратка с минимален обем: " << endl;
			int index = indexOfPacketWithMinVolume(packets, length);
			out(packets[index]);
		}
		break;
		case 4:
		{
			cout << "Пратка с максимален обем: " << endl;
			int index = indexOfPacketWithMaxVolume(packets, length);
			out(packets[index]);
		}
		break;
		case 5:
			cout << "Довиждане! " << endl;
			break;
		default:
			cout << "Невалиден избор!" << endl;
			break;
		}
	} while (option != 5);
}

void in(Packet packets[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "Номер на пратка: ";
		cin >> packets[i].number;
		packets[i].height = enterInRange("Височина", 5, 200);
		packets[i].length = enterInRange("Дължина", 5, 200);
		packets[i].width = enterInRange("Ширина", 5, 200);
	}
}

double enterInRange(string str, int start, int end)
{
	double a;
	do
	{
		cout << str << "(" << start << "-" << end << "): ";
		cin >> a;
	} while (a < start || a > end);

	return a;
}

void out(Packet packets[], int length) 
{
	for (int i = 0; i < length; i++)
	{
		out(packets[i]);
	}
	cout << endl;
}

void out(Packet packet) 
{
	cout << "\nНомер на пратка: " << packet.number;
	cout << "\nВисочина: " << packet.height;
	cout << "\nДължина: " << packet.length;
	cout << "\nШирина: " << packet.width << endl;
}

double volume(Packet packet)
{
	return packet.height * packet.length * packet.width;
}

int indexOfPacketWithMinVolume(Packet packets[], int length) 
{
	int index = 0;
	for (int i = 1; i < length; i++)
	{
		double volumeIndex = volume(packets[index]);
		double volumeI = volume(packets[i]);
		if (volumeIndex > volumeI)
		{
			index = i;
		}
	}
	return index;
}

int indexOfPacketWithMaxVolume(Packet packets[], int length) 
{
	int index = 0;
	for (int i = 1; i < length; i++)
	{
		double volumeIndex = volume(packets[index]);
		double volumeI = volume(packets[i]);
		if (volumeIndex < volumeI)
		{
			index = i;
		}
	}
	return index;
}

