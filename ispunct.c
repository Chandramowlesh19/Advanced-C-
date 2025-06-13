/******************************************************************************************************************************************************

Name : Chandramowlesh.S
Date : 11-03-2022
Description :  implement your own ispunct() function
sample input : Enter the character: a
Sample output :Entered character is not punctuation character

*******************************************************************************************************************************************************/

//Header file
#include <stdio.h>

//Function call
int my_ispunct(int ch)

{
    //Logic for ispunct() function
    if( ch>=33 && ch<=47 || ch>=58 && ch<=64 )
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
    //Initialize the variables
    char ch;
    int ret;
    
    
    // user input
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);
    /*
         print whether ch is lower case alphabet or not
    */
if(ret==1)
    {
        printf("Entered character is punctuation character \n");
    }
    else
    {
        printf("Entered character is not punctuation character \n");

    }

}