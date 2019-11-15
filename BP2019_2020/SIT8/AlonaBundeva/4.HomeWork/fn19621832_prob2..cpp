#include<iostream>
using namespace std;
int main()	
{
	int choice;
	do
	{ 
		cout<<endl
		<<"Choose 1\n"
		<<"Choose 2\n"
		<<"Choose 3\n"
		<<"Choose 4\n"
		<<"Choose 5\n"
		<<"Choose 6\n"
		<<"Choose 7\n"
		<<"Choose 8\n"
		<<"Choose 9\n"
		<<"Choose 10\n"
		<<"Choose 11\n"
		<<"Choose 12\n"
		<<"Enter your choice and press Return"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"January";
				break;
			case 2:
				cout<<"February";
				break;
			case 3:
				cout<<"March";
				break;
			case 4:
				cout<<"April";
				break;
			case 5:
				cout<<"May";
				break;
			case 6:
				cout<<"June";
				break;
			case 7:
				cout<<"July";
				break;
			case 8:
				cout<<"August";
				break;
			case 9:
				cout<<"September";
				break;
			case 10:
				cout<<"Octomber";
				break;
			case 11:
				cout<<"November";
				break;
			case 12:
				cout<<"December";
				break;
			default:
				cout<<"Choice again";
		}
	} while (choice !=12);
	return 0;
}
