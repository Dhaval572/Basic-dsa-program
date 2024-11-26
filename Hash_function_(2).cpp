// Implementation of simple hash table 
#include <iostream>
#include <list>
using namespace std;

class HashTable
{
private:
	int size;		  // Size of the hash table
	list<int>* table; // Pointer to array of lists for chaining

public:

	// Constructor for get size and create hash table
	HashTable(int s)
	{
		size = s;
		table = new list<int>[size]; // Create an array of lists
	}

	// Hash function using the division method
	int hashFunction(int key)
	{
		return key % size; // find index when store keyzx
	}

	// Insert key into the hash table
	void insert(int key)
	{
		int index = hashFunction(key); // Get index for the key
		table[index].push_back(key);   // Insert key into the list at index
	}

	// Search for a key in the hash table
	bool search(int key)
	{
		int index = hashFunction(key); // Get index for the key
		// Check if the key is present in the list at the computed index
		for (int k : table[index])
		{
			if (k == key)
			{
				cout << "Key found at index no. " << index << endl;
				return true;
			}	
		}

		cout << "Key doesn't found!";
		return false;
	}

	// Display the hash table
	void display()
	{
		for (int i = 0; i < size; i++)
		{
			cout << "Index " << i << ": ";
			for (int key : table[i])
			{
				cout << key;
			}

			cout << endl;
		}
	}
};

int main()
{
	// Create a hash table with 10 slots (k = 10)
	HashTable ht(10);

	// Insert some keys into the hash table
	ht.insert(12);
	ht.insert(25);
	ht.insert(7);
	ht.insert(18);
	ht.insert(39);

	// Display the hash table
	cout << "Hash Table:" << endl;
	ht.display();

	// Search for some keys
	cout << "Searching for 25: ";
	ht.search(25);

	cout << "Searching for 15: ";
	ht.search(15);

	return 0;
}
