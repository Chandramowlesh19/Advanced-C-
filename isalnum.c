/******************************************************************************************************************************************************

Name : Chandramowlesh.S
Date : 11-03-2022
Description : implement your own isalnum() function
sample input : Enter the character: a
Sample output :Entered character is alphanumeric character

*******************************************************************************************************************************************************/
//Heder file

#include <stdio.h>

//Function
int my_isalnum(int ch)

   {
       //logic for islnum()
       
    if(ch>=97 && ch<=122 || ch>=65 && ch<=90 || ch>=48 && ch<=57)
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
    
    // character is alphanumeric character or not
    ret = my_isalnum(ch);
    /*
        Based on return value, print whether ch is alphanumeric or not
    */
if(ret==1)
    {
        printf("Entered character is alphanumeric character");
    }
    else
    {
        printf("Entered character is not alphanumeric character");

    }

}