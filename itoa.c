/*
Name            :   Chandramowlesh
Date            :   20-03-22
Description     :    implement itoa function
Input           :    -1234
Output          :   Integer to string is -1234

*/
#include <stdio.h>

int itoa(int num, char *str);

int main()
{
    int num,ret;
    char str[10];
    
    printf("Enter the number:");
    ret= scanf("%d", &num);
    
    itoa(num, str);
	if(ret==0)
	{
    	printf("Integer to string is %d\n", ret);
	}
	else
	{
       printf("Integer to string is %s\n", str);
	}
}
int itoa(int num, char *ptr)
{
    int rev = 0, mod, var, mod1, num1;
    num1 = num;
    if (num < 0)
    {
        *ptr = '-' + 0;
        num = -num;
        ptr++;
    }
    while (num > 0)
    {
        mod = num % 10;
        rev = (rev * 10) + mod;
        num = num / 10;
    }
    while (rev > 0)
    {
        var = rev % 10;
        var = var + '0';
        *ptr = var;
        ptr++;
        rev = rev / 10;
    }
    while (num1)
    {
        mod1 = num1 % 10;
        if (mod1 == 0)
        {
            *ptr = 0 + '0';
            ptr++;
        }
        else
            break;
        num1 = num1 / 10;
    }
    *ptr = '\0';
}