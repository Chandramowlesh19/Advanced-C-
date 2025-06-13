/********************************************************************************************************

Name : Chandramowlesh.S
Date : 20-03-22
Description : implement getword function
sample input : Hello
sample output : You entered Hello and the length is 5


*********************************************************************************************************/


#include <stdio.h>

int getword(char *str);

int main()
{
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %[^\n]", str);

		len = getword(str);

        printf("You entered %s and the length is %d\n", str, len);
}
int getword(char *str) //fn definition to get the 1st string length...
{
	int length = 0;
	while ( *str != ' ' && *str != '\0') //condition to stop incrementing the length count if it is null char or space char...
	{
		*str++;
        length++;
	}
	if (*str == ' ') //while printing the string in the main fn i have to just print the first string, so this statement...
		*str = '\0';
	return length;
}