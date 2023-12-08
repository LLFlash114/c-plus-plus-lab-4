/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: prepost41_SinghRS
//
// Summary: Calculates and outputs total number of library books before and after signing out a book and
			adding it to a book bag. Also calculates before and after values for the book bag. Loops until
			user enters no to a prompt asking to add another book to the bag.         	           
//
*-------------------------------------------*/

#include <iostream>
using namespace std;

int main ()
{
	// Storing library and book bag information
	int total_books_after = 1560;
	int total_books_before = 1560;
	int num_books_bag = 0;
	int add_book;
	
	// Ouputting changes to total books and book bag after adding a book to the bag
	do{
		cout << "\nNumber of books in the library book bag before adding a book: " << num_books_bag << endl;
		cout << "Number of total books in the library after: " << --total_books_after << "\nNumber of total books in the library before: " << total_books_before-- <<endl;
		num_books_bag++;
		cout << "Number of books in the library book bag after adding a book: " << num_books_bag << endl;
		
		cout << "\nAdd another book? (type 1 for yes, 2 for no) ";	// Prompting user to add another book	
		cin >> add_book;
		if ((add_book!=1 && add_book!=2))
		{
			cout << "\nError, invalid input entered" << endl;
			return 1;
		}
	} while (add_book != 2);	// Looping until user types 2
	
	cout << "\nLast value of total_books_after: " << total_books_after << endl;
	cout << "Last value of total_books_before: " << total_books_before << endl;
	
	
	return 0;
}
