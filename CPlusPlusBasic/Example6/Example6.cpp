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
		cout << "1. ��������� �� ������\n"
			<< "2. ��������� �� ������\n"
			<< "3. ������ � ���-������ ����\n"
			<< "4. ������ � ���-����� ����\n"
			<< "5. ����\n"
			<< "�������� �� 1 �� 5: ";
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
			cout << "������ � ��������� ����: " << endl;
			int index = indexOfPacketWithMinVolume(packets, length);
			out(packets[index]);
		}
		break;
		case 4:
		{
			cout << "������ � ���������� ����: " << endl;
			int index = indexOfPacketWithMaxVolume(packets, length);
			out(packets[index]);
		}
		break;
		case 5:
			cout << "���������! " << endl;
			break;
		default:
			cout << "��������� �����!" << endl;
			break;
		}
	} while (option != 5);
}

void in(Packet packets[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "����� �� ������: ";
		cin >> packets[i].number;
		packets[i].height = enterInRange("��������", 5, 200);
		packets[i].length = enterInRange("�������", 5, 200);
		packets[i].width = enterInRange("������", 5, 200);
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
	cout << "\n����� �� ������: " << packet.number;
	cout << "\n��������: " << packet.height;
	cout << "\n�������: " << packet.length;
	cout << "\n������: " << packet.width << endl;
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

