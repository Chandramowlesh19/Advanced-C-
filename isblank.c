/******************************************************************************************************************************************************

Name : Chandramowlesh.S
Date : 11-03-2022
Description : implement your own isblank() function
sample input : Enter the character: a
Sample output :The character 'a' is not a blank

*******************************************************************************************************************************************************/

// Header file
#include <stdio.h>

//Function
int my_isblank(int ch)

{
    //Logic for isblank
    
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122 || ch>=33 && ch<=64 || ch>=91 && ch<=96)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Main function
int main()

{
    
    //Initialize variables
    char ch;
    int ret;
    
    // User input
    printf("Enter the character:");
    scanf("%c", &ch);
    
    // output of  programm
    ret = my_isblank(ch);
    /*
        Based on return value, print whether ch is blank character or not
    */
if(ret==1)
    {
        printf("Entered character is not blank character \n");
    }
    else
    {
        printf("Entered character '%c' is a blank character \n",ch);

    }

}