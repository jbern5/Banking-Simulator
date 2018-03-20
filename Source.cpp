#include<iostream>
using namespace std;

class AtmMachine
{
public:
	//What is it? Attribute
	int cashBalance;

	//What does it do?
	void checkBalance()
	{
		cout << "Your current balance is:" << cashBalance << endl;
	}
	void depositCash(int amount)
	{
		cashBalance = cashBalance + amount;
	}
	void withdrawCash(int amount)
	{
		if (amount <= cashBalance)
		{
			cout << "Dispensing cash amount:" << amount << endl;
			cashBalance = cashBalance - amount;
		}
		else {
			cout << "Insufficent funds" << endl;
		}
	}
	//What does it look like, by default? Constructor
	AtmMachine()
	{
		cashBalance = 100;
	}
};

int main()
{
	int choice;
	int cashAmount;

	AtmMachine myMachine;
	while (1)
	{
		cout << "Press 1 to check balance" << endl;
		cout << "Press 2 to deposit cash" << endl;
		cout << "Press 3 to withdrawn cash" << endl;
		cout << "Press anything else to quit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: myMachine.checkBalance();
				break;

		case 2: cout << "How much?" << endl;
				cin >> cashAmount;
				myMachine.depositCash(cashAmount);
				break;

		case 3: cout << "How much?" << endl;
				cin >> cashAmount;
				myMachine.withdrawCash(cashAmount);
				break;

		default:exit(1);
		}
	}

	system("pause");
	return 0;
}