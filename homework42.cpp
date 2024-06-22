// homework42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	

	long long numofdays;
	cout << "enter days : ";
	cin >> numofdays;

	long numofhours;
	cout << "enter hours : ";
	cin >> numofhours;

	long numofmin;
	cout << "enter min : ";
	cin >> numofmin;

	long numofsec;
	cout << "enter sec : ";
	cin >> numofsec;

	long long total;



	cout << "totalsec : " << numofdays * 24 * 60 * 60 + numofhours * 60 * 60 + numofmin * 60 + numofsec << endl;








}

