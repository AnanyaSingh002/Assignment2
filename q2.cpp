#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balance can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif
*/
	int openBalance;
	cout << "enter the amount you want to start ankit account with? \n";
	cin >> openBalance;
	account ankit(openBalance);
	int paisa;
	cout << "enter the amount you want to add in ankit's account? \n";
	cin >> paisa;
	ankit.Credit(paisa);
	cout << ankit.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to removein ankit's account? \n";
	cin >> paisa1;
	ankit.Debit(paisa1);
	cout << ankit.getBalance() << "\n";
	cout << "enter the amount you want to start ansh account with? \n";
	cin >> openBalance;
	account ansh(openBalance);
	cout << "enter the amount you want to add in ansh's account? \n";
	cin >> paisa;
	ansh.Debit(paisa);
	cout << ansh.getBalance() << "\n";
	cout << "enter the amount you want to remove in ansh's account? \n";
	cin >> paisa1;
	ansh.Debit(paisa1);
	cout << ansh.getBalance() << "\n";

     return 0;
}


