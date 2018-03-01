//===================================
//Ryan Stevenson
//2/5/16
//proj2.cpp
//String Tokenization
//===================================

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void split (string, string);

//===================================
//main Function
//===================================
int main (void)
{
	string base;
	string sep = " .,!?;";
	cout << "Enter a line of text for the program to put into tokens: ";
	getline(cin, base);	//Reads the entire line inputed by user
	split(base,sep);
	return 0;
}


//===================================
//split Function
//===================================

void split (string base, string sep);
{
	string output = "";						//creates an empty string which is added to
	for (i = 0; i < base.length(); i++)		//searches through all of the characters in the base string
	{
		char b = base[i];
		bool letter = true;
		for (y = 0: y < sep.length(); y++)  //searches through all of the characters in the seperators
		{
			char s = sep[y];
			if (base[i] = base.length())
				cout << output << endl;
			
			
			
			
			
			
			
			if ( b == s )					//tests whether or not the character[i][y] are the same
			{
				cout << output << endl;
				output = "";
				bool letter = false;
			}
	
		}
		if ( letter == true )
		output += base[i];	
	}
	
	
}