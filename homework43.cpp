// homework43.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
   
	int totalsec;

	cout << "enter seconds : ";
	cin >> totalsec;

	int secondsperday, secondsperhour, secondspermin, secondsinyear;

	secondsinyear = 356 * 30 * 24 * 60 * 60;
	secondsperday = 24 * 60 * 60;
	secondsperhour = 60 * 60;
	secondspermin = 60;


	int numofdays, numofhours, numofmins, numofsecs, secondsinyear;
	int remainder;
	numofdays = floor(totalsec) / (secondsperday);
	remainder = totalsec % secondsperday;

	numofhours = floor(remainder) / (secondsperhour);
	remainder = remainder % secondsperhour;


	numofmins = floor(remainder) / (secondspermin);
	remainder = remainder % secondspermin;

	numofsecs = remainder;

	cout << numofdays << ":" << numofhours << ":" << numofmins << ":" << numofsecs << endl;








}

 
