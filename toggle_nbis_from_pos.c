/**********************************************************************************************************************************************************

Name : Chandramowlesh.s
Date : 9-03-2022
Description : toggle 'n' bits from given position of a number
sample input : Enter the number: 15
               Enter number of bits: 2
               Enter the pos: 2
               
Sample output : Result =  9

************************************************************************************************************************************************************/

// Header file

#include <stdio.h>

//Function call

int toggle_nbits_from_pos(int num, int n , int pos)

{
    //logic for Toggle 'n'bits from given position of a number
    
   return	(num ^ (((1 << n) - 1) << pos - n + 1)); 

    
}

//Main function

int main()

{
   //Initialize a variables
   
    int num, n, pos, res = 0;
    
    // User Input
    
    printf("Enter num, n and val:");
    
    scanf("%d%d%d", &num, &n, &pos);
    
    res = toggle_nbits_from_pos(num, n, pos);
    
    // output value
    
    printf("Result = %d\n", res);
}