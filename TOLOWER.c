//upper case to lower case convertion
#include <stdio.h>
#include <string.h>

void TOLOWER(char *str1,char *str2)
{
	int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str2[i] = str1[i] + 32; // Convert uppercase to lowercase
        }
        else
        {
            str2[i] = str1[i];
        }
        i++;
    }
    str2[i] = '\0';
	printf("String converted into small (lower case): ");
    puts(str2);
}

void main()
{
	char str1[100],str2[100];
	printf("Enter the string (In capital): ");
	gets(str1);
	TOLOWER(str1,str2);
}
