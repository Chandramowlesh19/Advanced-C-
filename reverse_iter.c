/*
Name : Chandramowlesh.S
Date : 20-03-22
description : reverse the given string using iterative method
input : Enter a string : Hello World
output : Reverse string is : dlroW olleH
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

void reverse_iterative(char *str,int i, int len)//fn definition to reverse the string
{
     char ch;//var declaration to swap the characters..
    for(i = 0; i < len / 2; i++)//condition to call recursive fn 
    {
        ch = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = ch;
    }
}

int main()
{
    char str[30];
    int len;
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    len = my_strlen(str);
    reverse_iterative(str,0,len);

    printf("Reversed string is %s\n", str);
}