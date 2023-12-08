/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: whileSwitch42_SinghRS
//
// Summary: Mini wrestling booking game which allows the user to book a wrestling match by prompting
			the user to choose 2 wrestlers out of a list of 10 who will have a match together. Then
			outputs a summary of the match. Loops until user enter "no" to book another match, and 
			then finally outputting a list of all the matches.                	           
//
*-------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Storing information about wrestlers and matches
	int match_num{1}, selected_wrestler;
	string wrestler_name, wrestler_position, first_wrestler_name, second_wrestler_name, new_match, all_matches = "--------------------------------"
																												 "\nFIGHTMANIA Matches:\n";																											 

	// Outputting title and greeting
	cout << "-----------------------------------------\n"
		    "\tWelcome to FIGHTMANIA!\n"
		    "-----------------------------------------\n\n\n";
	cout << "As the General Manager of this wrestling business,\n"; 
	cout << "it is your job to book the matches on the card." << endl;
	
	
	// Booking match, looping until user enters no to book another match
	do {
		cout << "\n--------------------------------------------------\n";
		cout << "Book match " << match_num << "!" << endl;
		
		// Prompting user to choose a wrestler, looping until 2 wrestlers chosen
		for (int num_wrestlers=1; num_wrestlers<=2; ++num_wrestlers)
		{
			if (num_wrestlers == 1)		// Checking if user is choosing the first or second wrestler
			{
				wrestler_position = "first";
			}
			else
			{
				wrestler_position = "second";
			}
			
			cout << "\nChoose the " << wrestler_position << " wrestler to fight in the match." << endl;		// Wrestler choices
			cout << "1)  Randy Orton\n"
					"2)  John Cena\n"
					"3)  Edge\n"
					"4)  Triple H\n"
					"5)  The Undertaker\n"
					"6)  The Rock\n"
					"7)  Seth Rollins\n"
					"8)  AJ Styles\n"
					"9)  Chris Jericho\n"
					"10) Shawn Michaels" << endl;
					
			cout << "\nSelect the " << wrestler_position << " wreslter (type a number 1-10): ";
			cin >> selected_wrestler;
	
			// Outputting description of the chosen wrestler and assigning a name
			switch (selected_wrestler)		
			{
				case 1:
					cout << "\nRandy Orton, known as the viper and the legend killer, who has won the world championship 14 times, has been chosen." << endl;
					wrestler_name = "Randy Orton";
					break;
				case 2:
					cout << "\nJohn Cena, known as the franchise player and the face of the company, and the 16 time world champion, has been chosen." << endl;
					wrestler_name = "John Cena";
					break;
				case 3:
					cout << "\nEdge, known as the Rated-R Superstar and a hall of famer for holding the world championship 11 times, has been chosen." << endl;
					wrestler_name = "Edge";
					break;
				case 4:
					cout << "\nTriple H, a hall of famer known as the The Game and King of Kings, who has held the world championchip 14 times, has been chosen." << endl;
					wrestler_name = "Triple H";
					break;
				case 5:
					cout << "\nThe Undertaker, a hall of famer known as the Phenom, and the 7 time world champion, has been chosen." << endl;
					wrestler_name = "The Undertaker";
					break;
				case 6:
					cout << "\nThe Rock, the Great One, the Peoples Champ, the 10 time world champion, and the only person who can make talking in third person look cool, has been chosen." << endl;
					wrestler_name = "The Rock";
					break;
				case 7:
					cout << "\nSeth \"Freakin\" Rollins, known as the Architect and the current World Heavyweight champion, has been chosen." << endl;
					wrestler_name = "Seth Rollins";
					break;
				case 8:
					cout << "\nAJ Styles, the Phenomenal One, known as the greatest in ring performer of our generation, has been chosen." << endl;
					wrestler_name = "AJ Styles";
					break;
				case 9:
					cout << "\nChris Jericho, who beat both The Rock and Stone Cold on the same night to earn the title of the first ever Undisputed World Champion, has been chosen." << endl;
					wrestler_name = "Chris Jericho";
					break;
				case 10:
					cout << "\nShawn Michaels, a hall of famer known as the Heartbreak Kid and Mr.WrestleMania, has been chosen." << endl;
					wrestler_name = "Shawn Michaels";
					break;
				default:
					cout << "\nError, invalid input entered" << endl;
					return 1;
			}
			
			// Checking if its the first or second wrestler and then assigning the wrestler to first/second wrestler name
			if (num_wrestlers == 1)
			{
				first_wrestler_name = wrestler_name;
			}
			else
			{
				second_wrestler_name = wrestler_name;
			}	
		}
		
		// Outputting the summary of the booked match
		cout << "\n\n---------------------------------------------------------------------" << endl;
		cout << " Match booked:" << endl;
		cout << " Match " << match_num << " of the night will feature " << first_wrestler_name << " vs " << second_wrestler_name << "." << endl;
		cout << "---------------------------------------------------------------------" << endl;
		
		// Appending the booked match to a string that includes all the matches
		all_matches = all_matches + "\n" + "[" + first_wrestler_name + " vs " + second_wrestler_name + "]";  
		++match_num;		 
		
		// Prompting the user to book another match
		cout << "\nBook another match? (type \"yes\" or \"no\"): ";
		cin >> new_match;
		
		if ((new_match != "yes" && new_match != "no"))
		{
			cout << "\nError, invalid input entered. Expected \"yes\" or \"no\"." << endl;
			return 1;
		}
	
	} while(new_match != "no");		// Ending do while loop if user enters no
	
	
	// Outputting a string of all the booked matches	
	cout << "\n\n" << all_matches << endl;
	
	return 0;
}
