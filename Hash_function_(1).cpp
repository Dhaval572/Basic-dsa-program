// Make simple hash function
#include <iostream>
#include <string>
using namespace std;

int simpleHashFunction(const string &input)
{
	int hashValue = 0;

	// For-each loop
	for (char c : input) 
	{
		hashValue += static_cast<int>(c); // Add ASCII value of each character
	}
	
	return hashValue; // Return the summed value as the hash
}

int main()
{
	string input = "Dhaval";
	int hash = simpleHashFunction(input);
	cout << "Hash value of '" << input << "': " << hash << endl;
	return 0;
}
/*
Explaination:

	Hash Table is a data structure in which keys are mapped to array positions
	by a hash function.

	Here i made very simple hash function which takes string as input and returns position to where store given string

	This hash table takes string as input and takes ascii values of string's each character and performs addition of all ascii values and returns this value as hash value.

	just imagine given string is "Dhaval" so i want to get hash value of this. So follow below steps.

	Step 1:

		Get ascii value of each character:

		D = 68, h = 104, a = 97, v = 118, a = 97, l = 108

	Step 2:

		Let's sum them up:

		68 + 104 + 97 + 118 + 97 + 108

	Step 3:

		return the sum of the ascii values:

		return 592

	Finish

	So, this was very simpler example of hash function.

	I hope you understand!!
*/
