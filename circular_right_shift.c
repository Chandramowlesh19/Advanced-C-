/*****************************************************************************************************************************************************

Name : Chandramowlesh.S
Date : 11-03-2022
Description : implement Circular right shift
Sample input :  Enter num: 12
                Enter n : 3
                
Sample output : Result : 10000000 00000000 00000000 00000001


******************************************************************************************************************************************************/
//Header file

#include <stdio.h>

//function call

//Initialize variables
int circular_right(int num, int n)

{
    // Logic for circular right shift
	return  ((num & ((1 << n) - 1)) << (sizeof(int) * 8 - n)) | (num >> n);

}
//Initialize variables
int print_bits(int ret)
{
    unsigned mask;

	for(mask = (1 << (sizeof(int) * 8 - 1)); mask; mask >>= 1)
	{
		(ret & mask) ? putchar('1'): putchar('0');
        
    }
}
// Main function
int main()
{
    //Initialize variables
    
    int num, n, ret;
    
    // user input
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    // User input
    
    printf("Enter n:");
    scanf("%d", &n);
    
    ret = circular_right(num, n);
    
    print_bits(ret);
}