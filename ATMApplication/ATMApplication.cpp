#include <iostream>
using namespace std;

void showMenu() {
	cout <<"**********MENU**********" << endl;
	cout << "1.Check Balance" << endl;
	cout << "2.Deposit" << endl;
	cout << "3.Withdraw" << endl;
	cout << "4.End Session" << endl;
	cout << "***********************" << endl;
}

int main()
{
 //check balance, deposit, withdraw, show menu
	int selection;
	double balance = 500;
	double depositAmount;
	double withdrawAmount;
	do {
		showMenu();
		cout << "Please Enter Your Selection" << endl;
		cin >> selection;
		system("cls");

		switch (selection)
		{
		case 1: cout << "Your Current Balance is: $" << balance << endl; break;

		case 2: cout << "Deposit Amount:";
			cin >> depositAmount;
			balance += depositAmount;
			cout << "Your updated balance is: $" << balance << endl; break;

		case 3: cout << "Withdraw Amount";
			cin >> withdrawAmount;
			if (withdrawAmount <= balance) {
				balance -= withdrawAmount;
				cout << "Your updated balance is: $" << balance << endl;
			}
			else
			{
				cout << "Not Enough Funds" << endl;
				cout << "Your Current Balance is: $" << endl;
			}
			    
			
			break;
		}
	} while (selection != 4);

	system("pause>0");
}