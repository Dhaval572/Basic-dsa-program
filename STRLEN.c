//Find string length in c without using inbuilt function
#include <stdio.h>

int main()
{
    // Initialize
    char str[20] = "Hello, bro!";
    int i = 0;

    // Loop to find the length of the string
    while (str[i] != '\0')
    {
        i++;
    }
	str[i] = '\0';
    printf("Length of string is: %d\n", i);
    return 0;
}
