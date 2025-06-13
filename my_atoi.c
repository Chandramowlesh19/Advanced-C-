/******************************************************************************************************

Name : Chandramowlesh.S
date : 20-03-22
Description : implement atoi function
sample input : Enter a numeric string: +12345
sample output :String to integer is 12345


********************************************************************************************************/

#include <stdio.h>

int my_atoi(const char *);

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}
int my_atoi(const char *ptr)
{
    int x = 0, flag = 1, count = 0;
    while (*ptr)
    {
        while(count == 0)
        {
        if (flag == 1 && *ptr == '-')
        {
            flag = -1;
            ptr++;
        }
        else if (flag == 1 && *ptr == '+')
        {
            flag = 1;
            ptr++;
        }
        count++;
        }

        if (*ptr >= 48 && *ptr <= 57)
        {
            x = (x * 10) + (*ptr - '0');
            ptr++;
        }
        else
            break;

    }
    return x * flag;
}