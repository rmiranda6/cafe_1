#include <iostream>

using namespace std;

int choice;


int main()
{
	char runAgain;

	do {
		menu();

		cout << "Would you like to purchase another Item? Press Y for yes : ";
		cin >> runAgain;
	} while (runAgain == 'Y' || runAgain == 'y');

}

void menu()
{
	cout << "Which coffee would you like?" << endl;

	cout << "1.) Dark Roast Coffee... $2.50" << endl;
	cout << "2.) Medium Roast Coffee... $2.50" << endl;
	cout << "3.) Decaf... $3.00" << endl;
	cout << "Choose a number on the Menu : ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case '1':
		cout << "Enjoy your Dark Roast Coffee, have a great day!" << endl;
		break;

	case '2':
		cout << "Enjoy your Medium Roast Coffee, have a great day!" << endl;
		break;

	case '3':
		cout << "Enjoy your Decaf Coffee, have a great day!" << endl;
		break;

	default:
		cout << "Invalid order number. Please select a number that's on the MENU." << endl;
	}

}