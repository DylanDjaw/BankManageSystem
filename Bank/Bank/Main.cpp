// Bank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "SavingsAccount.h"

#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Date date(2018, 1, 1);
	SavingsAccount accounts[] = {
		SavingsAccount(date, "21325302", 0.015),
		SavingsAccount(date, "58320212", 0.015)
	};
	
	accounts[0].deposit(Date(2018, 11, 5), 5000, "salary");
	accounts[1].deposit(Date(2018, 11, 25), 10000, "sell stock 0323");
	accounts[0].deposit(Date(2018, 12, 5), 5500, "salary");
	accounts[1].withdraw(Date(2018, 12, 20), 4000, "buy a laptop");
	cout << endl;

	for each (SavingsAccount var in accounts){
		var.settle(Date(2019, 1, 1));
		var.show();
		cout << endl;
	}
	cout << "Total:" << SavingsAccount::getTotal() << endl;
	return 0;
}

