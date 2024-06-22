// homework35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{

	int totalmoney;

	short penny;
	cout << "enter penny : ";
	cin >> penny;

	short nickel;
	cout << "enter nickel : ";
	cin >> nickel;

	short dime;
	cout << "enter dime : ";
	cin >> dime;

	short quarter;
	cout << "enter quarter : ";
	cin >> quarter;

	short dollar;
	cout << "enter dollar : ";
	cin >> dollar;


	nickel = 5 * penny;
	dime = 10 * penny;
	quarter = 25 * penny;
	dollar = 100 * penny;

	totalmoney = penny + nickel + dime + quarter + dollar;

	cout << "your money : " << (totalmoney) << endl;

	cout << "your money in dollar : " << (totalmoney) * 0.01 << endl;

	



	

	
    









}

