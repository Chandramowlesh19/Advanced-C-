/************************************************************************************************************************************************************************

Name : Chandramowlesh.S
Date : 09-03-2022
description : get 'n' bits from given position of a number
Sample input :     Enter the number: 12
                   Enter number of bits: 3
                   Enter the pos: 4
Sample output : Result =  3


*****************************************************************************************************************************************************************************/

//Header file

#include <stdio.h>

//function call

int get_nbits_from_pos(int num, int n, int pos)

{
    
    //logic for Get 'n' bit from given position of a number
    
return ((num & ((~(~0 << n)) << pos - n + 1)) >> (pos - n +1));

    
}


//main function

int main()

{
    //Initialize variables
    
    int num, n, pos, res = 0;
    
    //User input
    
    printf("Enter num, n and val:");
    
    scanf("%d%d%d", &num, &n, &pos);
    
    res = get_nbits_from_pos(num, n, pos);
    
    // Resulu value output
    
    printf("Result = %d\n", res);
}