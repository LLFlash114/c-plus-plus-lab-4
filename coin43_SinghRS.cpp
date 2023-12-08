/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: coin43_SinghRS
//
// Summary: Counts and adds up different types of Canadian coins in the pockets of each person (number of people 
			given by the user) and outputs the coins each person has, total summed value for each, combined total
			of all the people, and the average amount each person has. The user has 2 counting option:
			
			1) Manually - User enters the number of people to use and manually enters the different types of coins
					   	  and the amount each person has.
			
			2) Automation - User enters the number of people to use and enters the minimum and maximum number for 
						 	each type of coin each person could have. The numbers of coins are randomized between
						 	the minimum and maximum values using the rand() function.
			
		*This program has a fun/joke pirate theme to it*                      	           
//
*-------------------------------------------*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
s
int main()
{
	// Storing information about the number of people, number/type of coins, counting type, and calculations
	int num_people, counting_type, min_coins, max_coins;
	double num_pennies, num_nickels, num_dimes, num_quarters, num_halfdollars, num_loonies, num_toonies, person_sum, total_sum;
	
	// Seeding the random function
	srand(time(0));
	
	// Outputting the welcome message
	cout << "X#X#X#X#X#X#X#X#X#X#X#X#X#X#X" << endl;
	cout << "The Pirate Coin Collector" << endl;
	cout << "X#X#X#X#X#X#X#X#X#X#X#X#X#X#X" << endl;
	
	cout << "\nYou're dream is to be a great PIRATE CAPTAIN and become KING OF THE PIRATES." << endl;
	cout << "You're currently raiding a village to increase your wealth." << endl;
	cout << "Unfortunately, you have no crew right now so you have to do the dirty work yourself." << endl;
	
	// Prompting the number of people to count and option for type of counting
	cout << "\nHow many innocent people are you robbing: ";
	cin >> num_people;
	
	cout << "\nHow would you like to count the coins from the people? (type 1 or 2)" << endl;
	cout << "1) Manually\n"
			"2) Automation" << endl;		
	cin >> counting_type;
	
	if ((counting_type != 1) && (counting_type != 2))	// Checking if couting value is valid
	{
		cout << "\nError, invalid input entered" << endl;
		return 1;
	}
	
	// Counting the coins from each person, looping until all people have been counted 
	for (int count{1}; count<=num_people; ++count)
	{	
		cout << "\nInnocent Person #" << count << ":" << endl;
		
		// Counting method if user selected Manually(option)
		if (counting_type == 1)
		{
			cout << "Enter the total number of pennies: ";
			cin >> num_pennies;
			cout << "Enter the total number of nickels: ";
			cin >> num_nickels;
			cout << "Enter the total number of dimes: ";
			cin >> num_dimes;
			cout << "Enter the total number of quarters: ";
			cin >> num_quarters;
			cout << "Enter the total number of half-dollars: ";
			cin >> num_halfdollars;
			cout << "Enter the total number of loonies: ";
			cin >> num_loonies;
			cout << "Enter the total number of toonies: ";
			cin >> num_toonies;
		}
		
		// Counting method if user selected Automation(option)
		else
		{
			cout << "Enter the minimum/maximum number of PENNIES (separate by a space, ex: \"2 14\"): ";
			cin >> min_coins >> max_coins;
			num_pennies = (rand() % max_coins + min_coins);		// randomizing
			cout << "Number of pennies: " << num_pennies << endl;
			
			cout << "Enter the minimum/maximum number of nickels (separate by a space, ex: \"12 16\"): ";
			cin >> min_coins >> max_coins;
			num_nickels = (rand() % max_coins + min_coins);
			cout << "Number of nickels: " << num_nickels << endl;
			
			cout << "Enter the minimum/maximum number of dimes (separate by a space, ex: \"1 6\"): ";
			cin >> min_coins >> max_coins;
			num_dimes = (rand() % max_coins + min_coins);
			cout << "Number of dimes: " << num_dimes << endl;
			
			cout << "Enter the minimum/maximum number of quarters (separate by a space, ex: \"0 17\"): ";
			cin >> min_coins >> max_coins;
			num_quarters = (rand() % max_coins + min_coins);
			cout << "Number of quarters: " << num_quarters << endl;
			
			cout << "Enter the minimum/maximum number of half-dollars (separate by a space, ex: \"21 46\"): ";
			cin >> min_coins >> max_coins;
			num_halfdollars = (rand() % max_coins + min_coins);
			cout << "Number of half-dollars: " << num_halfdollars << endl;
			
			cout << "Enter the minimum/maximum number of loonies (separate by a space, ex: \"1 3\"): ";
			cin >> min_coins >> max_coins;
			num_loonies = (rand() % max_coins + min_coins);
			cout << "Number of loonies: " << num_loonies << endl;
			
			cout << "Enter the minimum/maximum number of toonies (separate by a space, ex: \"0 89\"): ";
			cin >> min_coins >> max_coins;
			num_toonies = (rand() % max_coins + min_coins);
			cout << "Number of toonies: " << num_toonies << endl;
		}	
		
		// Calculating and outputting the sum of each person
		person_sum = (num_pennies*0.01) + (num_nickels*0.05) + (num_dimes*0.10) + (num_quarters*0.25) + (num_halfdollars*0.50) + (num_loonies*1.00) + (num_toonies*2.00);
		total_sum += person_sum;	// Adding the person sum to the total
		cout << "The total stolen from Innoncent Person #" << count << " is $" << person_sum << endl;	
	}
	
	// Calculating and outputting the total amount and average 
	cout << "\nThe total amount stolen is $" << total_sum << endl;
	cout << fixed << setprecision(2) << "The average stolen from each innocent person is $" << total_sum/num_people << endl; 
	 
	return 0;
}
