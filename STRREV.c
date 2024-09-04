// String reverse in c
#include <stdio.h>
#include <string.h>

void STRREV(char *str)
{
    int start = 0;
    int end = strlen(str) - 1; // end is string size - 1

    // Reversing string 
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[] = "Hello!";
    STRREV(str);
    printf("%s", str);

    return 0;
}
