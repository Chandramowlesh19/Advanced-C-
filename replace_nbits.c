/***************************************************************************************************************************************************************************
Name : Chandramowlesh
Date : 08-03-22
Description : 
replace 'n' bits of a given number
sample input :   Enter the number: 10
                 Enter number of bits: 3
                 
                 
Sample Output : Result = 12


**************************************************************************************************************************************************************************/

//header file

#include <stdio.h>

//Function call

int replace_nbits(int num, int n , int val)

{
    //Logic for Replace n bits of a given number
    
   return (val & ((1 << n) - 1))|(num & ~((1 << n) - 1));
}

// main function

int main()

{
    
    //Initialize the variable
    
    int num, n, val, res = 0;
    
    // User input
    
    printf("Enter num, n and val:");
    
    scanf("%d%d%d", &num, &n, &val);
    
    //output
    res = replace_nbits(num, n, val);
    
    printf("Result = %d\n", res);
}