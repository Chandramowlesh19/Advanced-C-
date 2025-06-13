/******************************************************************************************************************************************************
 
 Name : Chandramowlesh
 Date : 12-03-22
 Description :print 'n' bits from LSB of a number
 sample input : Enter the number: 10
                Enter number of bits: 12
                
Sample Output :     Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0            


******************************************************************************************************************************************************/

//Header file
#include <stdio.h>

//Initialize variables
int print_bits(int num, int n)

{
    // logic for nbits from LSB of a number
    
    unsigned mask;
    
    //using for loop
for (mask = (1 << (sizeof(int) * 8 - 1)); mask; mask >>= 1)
	{
		if (mask <= ((1 << n)-1) )
{
			if (num & mask) 
			{
				putchar('1');
			}
			else		
			{
				putchar('0');
			}
	
printf (" ");
 }
}
}

//main function
int main()

{
    //main function
    int num, n;
    
    //user input
    
    printf("Enter num, n :\n");
    
    scanf("%d%d", &num, &n);
    
    //Print binary value
    
    printf("Binary form of %d: ", num);
    print_bits(num, n);
 }