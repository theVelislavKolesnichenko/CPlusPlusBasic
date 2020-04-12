#include <iostream>
#include <fstream>
using namespace std;

const char file_name[30] = "sampel_fail.txt"; //Konstanta koqto sudurja imeto na faila

struct mesec //Data na plashtane i suma na plashtane
{
	double suma;
	char data[100];
};

struct vlojitel//Tip danni za vlojitel, sudurja imeto i adresa na vlojitelq, kakto i 3-te vida srochni vlogove.
{
	char ime[100], adres[255];
	mesec M3, M6, M12;
};

void zapazi_vuv_fail(vlojitel *V, int &broi_vlojiteli) //Zapazva vlojitelite i tehnite danni vuv fail.
{
	fstream file;
	file.open(file_name, ios::binary | ios::out);

	for (int i = 0; i < broi_vlojiteli; i++)
	{
		file.write((char*)(&V[i]), sizeof(vlojitel)); //Preobrazuvame elementa ot tip vlojitel v tip adres na char za da se zapishe vuv faila
	}
}

void zaredi_ot_fail(vlojitel *V, int &broi_vlojiteli)//Izvlicha dannite za vlojielite ot zapazen fail i gi zapisva v masiv.
{
	fstream file;
	file.open(file_name, ios::binary | ios::in);
	//Vzimame razmera na faila
	file.seekg(0, ios::end);
	int razmer = int(file.tellg());
	file.seekg(0, ios::beg);

	broi_vlojiteli = int(floor(razmer / sizeof(vlojitel)));//Namirane broq na vlojitelite

	for (int i = 0; i < broi_vlojiteli; i++)
	{
		file.read((char*)(&V[i]), sizeof(vlojitel));//Preobrazuvame elementa ot tip vlijiteli v tip adres za da se izchete ot faila
	}
}
//Vuvejdane na broq na vlojitelite i sled tova samite vlojiteli
void vuvejdane(vlojitel *V, int &broi_vlojiteli) // V e masiv
{
	cout << "Broi vlojiteli(do 30): ";
	cin >> broi_vlojiteli;
	//Vuvejdane dannite na vlojitelite
	for (int i = 0; i < broi_vlojiteli; i++)
	{
		cout << endl << "Ime na vlojitel " << i + 1 << ": ";
		cin >> V[i].ime;
		cout << "Adres na vlojitel " << i + 1 << ": ";
		cin >> V[i].adres;

		cout << "Suma na 3-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M3.suma;
		cout << "Data na 3-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M3.data;

		cout << "Suma na 6-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M6.suma;
		cout << "Data na 6-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M6.data;

		cout << "Suma na 12-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M12.suma;
		cout << "Data na 12-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M12.data;
	}
}
//Aktualizirame dannite za srochnite vlogove na vlojitelite v masiva. 
void aktualizaciq(vlojitel *V, int &broi_vlojiteli)
{
	for (int i = 0; i < broi_vlojiteli; i++)
	{
		cout << "Suma na 3-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M3.suma;
		cout << "Data na 3-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M3.data;

		cout << "Suma na 6-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M6.suma;
		cout << "Data na 6-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M6.data;

		cout << "Suma na 12-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M12.suma;
		cout << "Data na 12-mese4en vlog za vlojitel " << i + 1 << ": ";
		cin >> V[i].M12.data;
	}
}
//Spravka po ime na vlojiteli
void spravka(vlojitel *V, int &broi_vlojiteli)
{
	char ime[100];
	//Izbirame po koe ime da tursim
	cout << "Ime na vlojitel: ";
	cin >> ime;
	//Tursim v masiva ot vlojiteli
	for (int i = 0; i < broi_vlojiteli; i++)
	{
		//Kogato namerim vlojitel sus sushtoto ime kato tursenoto izvejdame dannite
		if (strcmp(V[i].ime, ime) == 0)
		{
			cout << endl << "Ime na vlojitel: " << V[i].ime << endl;
			cout << "Adres na vlojitel: " << V[i].adres << endl;
			cout << "M3 Suma: " << V[i].M3.suma << endl;
			cout << "M3 Data: " << V[i].M3.data << endl;
			cout << "M6 Suma: " << V[i].M6.suma << endl;
			cout << "M6 Data: " << V[i].M6.data << endl;
			cout << "M12 Suma: " << V[i].M12.suma << endl;
			cout << "M12 Data: " << V[i].M12.data << endl;
			//Sled kato izvedem dannite direktno izlizame ot cikula s 'break' poneje nqma smisal da tursim poveche
			break;
		}
	}
	system("pause");
}
//Spravka po data na edin ot mesechnite vlogove na vlojitelite
void spravka_po_data(vlojitel *V, int &broi_vlojiteli)
{
	char data[100];
	//Izbirame si data
	cout << "Vuvedete data: ";
	cin >> data;
	//Obikalqme vsichki vlojiteli
	for (int i = 0; i < broi_vlojiteli; i++)
	{
		//Ako edna ot datite suvpada s izbranata, produljavame s izvejdaneto na dannite
		//Sled tova imame oshte proverki zashtoto ne znaem koi ot vlogovete e suvpadnal s turseneto
		if (strcmp(V[i].M3.data, data) == 0 || strcmp(V[i].M6.data, data) == 0 || strcmp(V[i].M12.data, data) == 0)
		{
			cout << endl << "Ime na vlojitel: " << V[i].ime << endl;
			cout << "Adres na vlojitel: " << V[i].adres << endl;
			//Proverqvame dali 3-mesechniqt e suvpadnal -  izvejdame dannite za nego ako e da
			if (strcmp(V[i].M3.data, data) == 0)
			{
				cout << "M3 Suma: " << V[i].M3.suma << endl;
				cout << "M3 Data: " << V[i].M3.data << endl;
			}
			//Proverqvame dali 6-mesechniqt e suvpadnal -  izvejdame dannite za nego ako e da
			if (strcmp(V[i].M6.data, data) == 0)
			{
				cout << "M6 Suma: " << V[i].M6.suma << endl;
				cout << "M6 Data: " << V[i].M6.data << endl;
			}
			//Proverqvame dali 12 - mesechniqt e suvpadnal - izvejdame dannite za nego ako e da
			if (strcmp(V[i].M12.data, data) == 0)
			{
				cout << "M12 Suma: " << V[i].M12.suma << endl;
				cout << "M12 Data: " << V[i].M12.data << endl;
			}
			//Sled kato izvedem dannite direktno izlizame ot cikula s 'break' poneje nqma smisul da tursim poveche
			break;
		}
	}
	system("pause");
}
//Ot tuk zapochva startiraneto na programata
int main()
{
	//Masiva ni s vlojiteli
	vlojitel V[30];
	int izbor = 0, broi_vlojiteli;
	do
	{
		system("cls");
		//Izvejdame si menu-to i izbirame opciq
		cout << "0 - Izhod\n1 - Vuvejdane\n2 - Aktualizaciq\n3 - Spravka\n4 - Spravka po data\n5 - Zapazi vuv fail\n6 - Zaredi ot fail" << endl;
		cout << "Izbor: ";
		cin >> izbor;
		system("cls");
		//Operator za mnogovarianten izbor
		switch (izbor)
		{
		case 0:
			cout << "Izlizane..." << endl;
			break;
		case 1:
			vuvejdane(V, broi_vlojiteli);
			break;
		case 2:
			aktualizaciq(V, broi_vlojiteli);
			break;
		case 3:
			spravka(V, broi_vlojiteli);
			break;
		case 4:
			spravka_po_data(V, broi_vlojiteli);
			break;
		case 5:
			zapazi_vuv_fail(V, broi_vlojiteli);
			break;
		case 6:
			zaredi_ot_fail(V, broi_vlojiteli);
			break;
		default:
			cout << "Nqma takava opciq! \n" << endl;
			system("pause");
			break;
		}
	} while (izbor != 0);
}
