// Author: Christopher Karg
// CIS 251 (20161) 
// DATE: 3/12/2023
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

// # Objective
// Develop a Swap Algorithm for an Array object passed.

// # Criteria
// * Pointer Notation CAN NOT BE USED
// * Any functions created must accept parameters By Value

// Variable - START
//	define variables that are global between the two Variable markers

// Variable - END

// Function/Method Declaration - START

//	define function/method declaration signatures between the two markers

// Function/Method Declaration - END

// * main function can be the simple(no parameters) version
int main() {
	// * Must be able to handle any size entry
	// * Use the value type(s) you feel most comfortable with
	string ASCII_to_be_sorted = "";
	// question the user for input
	string prompt = "input characters to be sorted.\n";
	cout << prompt << endl;

	// * Values are NOT preloaded in the programand require user input.
	getline(cin, ASCII_to_be_sorted);
	
	// * Sort the array Numerically OR Alphabetically
	int size = ASCII_to_be_sorted.length();
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (ASCII_to_be_sorted[i] > ASCII_to_be_sorted[j]) {
				// * Swap Algorithm
				char i_twin = ASCII_to_be_sorted[i];
				ASCII_to_be_sorted[i] = ASCII_to_be_sorted[j];
				ASCII_to_be_sorted[j] = i_twin;
			}
		}
	}
	// * Must adhere to ASCII Table order starting with Decimal 32 - 126
	// * There should be no white - space / NULL characters before AND 
	//   after a valid Decimal ASCII character string; in otherwords, 
	//   all values must have Trim applied
	string ASCII_sorted = "";
	for (int i = 0; i < size; i++) {
		if ((ASCII_to_be_sorted[i] >= 32) && (ASCII_to_be_sorted[i] <= 126) && (!isspace(ASCII_to_be_sorted[i]))) {
			ASCII_sorted += ASCII_to_be_sorted[i];
		}
	}

	cout << "trim:" << ASCII_sorted << endl;
}

// Function/Method Definition - START
//	define function/method declaration signatures between the two markers

// Function/Method Definition - END
