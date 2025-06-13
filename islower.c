/******************************************************************************************************************************************************

Name : Chandramowlesh.S
Date : 11-03-2022
Description :  implement your own islower() function
sample input : Enter the character: a
Sample output :Entered character is lower case alphabe

*******************************************************************************************************************************************************/



// Header file

#include <stdio.h>
//function call

int my_islower(int ch)
{
    if( ch>=97 && ch<=122 )
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
    
    ret = my_islower(ch);
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
if(ret==1)
    {
        printf("Entered character is lower case alphabet \n");
    }
    else
    {
        printf("Entered character is not lower case alphabet \n");

    }
}