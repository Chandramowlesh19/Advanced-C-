/****************************************************************************************************************************************************************

Name : Chandramowlesh.S
Date : 6-4-22
Description : implement strtok function

*/


#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char * str, const char *delim);

int main()
{
    char str[50], delim[50];
    printf("Enter the string  : ");
    scanf("%s", str);
    
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);
    
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}


char * my_strtok(char *str1, const char *str2)

{
    static char *temp;

    static int pos;

    int first_ch = pos;

    int j;

    if( str1 != NULL )

    {

        temp = str1;

    }

    while(temp[pos] != '\0')

    {

        j = 0;

        while(str2[j] != '\0')

        {

            if(str2[j] == temp[pos])

            {

                temp[pos] = '\0';

                pos++;

                if(temp[first_ch] != '\0')

                    return (&temp[first_ch]);

                else

                {
                    first_ch = pos;

                    pos--;

                    break;

                }

            }

            j++;

        }

        pos++;

    }

    if(temp[first_ch] == '\0')

    {

        pos = 0;

        return NULL;

    }

    else

        return (&temp[first_ch]);
}



