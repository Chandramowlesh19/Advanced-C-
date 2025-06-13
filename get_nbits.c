/****************************************************************************************************************************************************************************************
 
 Name : chandramowlesh.s
 Date : 8-03-22
 Description : get 'n' bits of a given number
 sample input : Enter the number: 10
                Enter number of bits: 3
                
 Sample output :Result = 2
                
****************************************************************************************************************************************************************************/
//Header file

#include <stdio.h>

//Function call
//Initialize get_n bits

int get_nbits(int num, int n)

 {
     
  
    // logic for get n bits

	return (num & ~(~0 << n)) ;
    

}
//Main function

int main()

{
    
    //Initialize variables
    
    int num, n, res = 0;
    
    // User input
    printf("Enter num and n:");
    
    //Read input variables
    
    scanf("%d%d", &num, &n);
    
    res = get_nbits(num, n);
    
    // print the output
    printf("Result = %d\n", res);
}