/*
Name            :   Chandramowlesh
Date            :   20-03-22
Description     :    reverse the given string using recursive method
Input           :   Hello World
Output          :   dlroW olleH

*/

#include <stdio.h>

int my_strlen(char *ptr)
{
    int len = 0;
    while(*ptr++)
    {
        len++;
    }
    return len;
}
void  reverse_recursive(char *str,int i, int len)
    
{
    char ch;
      if (i < len)
    {
        ch = *(str + i);
        *(str + i) = *(str + len);
        *(str + len) = ch;
         reverse_recursive(str, ++i, --len);
    }
}

int main()
{
    char str[30];
    int len;
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    len = my_strlen(str);
    reverse_recursive(str,0,len-1);

    printf("Reversed string is %s\n", str);
}