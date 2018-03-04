//=======================================
//Ryan Stevenson
//1/21/16
//moviekiosk.cpp
//Runs a movie ticket kiosk at a theatre.
//=======================================

#include <iostream>
using namespace std;
//=======================================
//Main function
//=======================================


int main ( )
{
	int input;
	int ans;
	
	cout << " Welcome to CS Studios. Please select a movie from the list below." << endl;
	cout << " 1) The Avengers, rated PG. " << endl;
	cout << " 2) Spy vs Spy IV, rated R. " << endl;
	cout << " 3) Micley Mouse, rated G. " << endl;
	cout << " 4) Sad Santa, rated PG13. " << endl;
	cout << " 5) Our Home, rated R. " << endl;
	cout << " 6) Spacegood, rated PG13. " << endl;
	cout << " Please enter your slection (1-6): ";
	cin >> input;
	if ( input == 1 )
	{
		cout << " You have chosen The Avengers. Tickets will be $8.50 each. " << endl;
	}
	if ( input == 2 )
	{
		cout << " You have chosen Spy vs Spy IV. Are you 18 or accompanied by and adult?: (1 for yes/ 2 for no) " << endl;
		cin >> ans;
		if ( ans == 1 )
		{
			cout << " Tickets will be $8.50 each. " << endl;
		}
	    if ( ans == 2 )
	    {
	    	cout << " I am sorry. You are not old enough to see this movie. Please choose another. " << endl;
	    }
	}
	    
	if ( input == 3 )
	{
		cout << " You have chosen Mickey Mouse. Tickets will be $8.50 each. " << endl;
	}
	if ( input == 4 )
	{
		cout << " You have chosen Sad Santa. Are you at least 13 years old?: (1 for yes/ 2 for no) ";
		cin >> ans;
		if ( ans == 1 )
		{
			cout << " Tickets will be $8.50 each. " << endl;
		}
		if ( ans == 2 )
		{
			cout << " I am sorry. You are not old enough to see this movie. Please choose another. " << endl;
		}
	}
	if ( input == 5 )
	{
		cout << " You have chosen Our Home. Are you at least 18 years old?: (1 for yes/ 2 for no) ";
		cin >> ans;
		if ( ans == 1 )
		{
			cout << " Tickets will be $8.50 each. " << endl;
		}
		if ( ans == 2 )
		{
			cout << " I am sorry. You are not old enough to see this movie. Please choose another. " << endl;
		}
	}
	if ( input == 6 )
	{
		cout << " You have chosen Spacegoof. Are you at least 13 years old?: (1 for yes/ 2 for no) " << endl;
		cin >> ans4;
		if ( ans4 == 1 )
		{
			cout << " Tickets will be $8.50 each. " << endl;
		}
		if ( ans4 == 2 )
		{
			cout << " I am sorry. You are not old enough to see this movie. Please choose another. " << endl;
		}
	}
	
	cout << " Thanks for Watching with us! Have a nice day!. ";
	
	return 0;
}

