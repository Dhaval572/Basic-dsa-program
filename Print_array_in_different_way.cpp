// access array element in different way
#include <iostream>
using namespace std;

int main()
{
	int a[3];
	a[0] = 45;
	a[1] = 68;
	a[2] = 89;
	int *ptr = &*a;
	// cout << *ptr << " ";		// (*a + 0)
	// *ptr++;
	// cout << *ptr << " ";		// (*a + 1)
	// *ptr ++;
	// cout << *ptr << " ";		// (*a + 2)
	cout << "Elements of an array is: ";
	for(int i = 0; i < 3; i++)
	{
		cout << *ptr << " ";
		*ptr++;
	}
	return 0;
}
/*
Explaination:

	a[0] = (*a + 0) => a[1] = (*a + 1) => a[2] = (*a + 2) ... a[n] = (*a + n)
	so if you want to find a[n] then you should find (*a + n)

	so a[0] = (*a + 0)
			= *a

	so, i made *ptr pointer which stores address of *a (line no. 11)
	
	a[1] = (*a + 1) means *ptr++ 
	After *ptr++ *ptr becomes (*a + 1)
	Again increement *ptr++ then *ptr == (*a + 2)

	so using for loop we can this easily (line no. 18)
*/
