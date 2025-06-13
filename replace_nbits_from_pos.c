/*####################################################################################################################################################
Name : Chandramowlesh.S
Date : 11-03- 2022
Description : Replace nbits from position
Sample input :    Enter the value of 'num' : 11
                  Enter the value of 'a' : 3
                  Enter the value of 'b' : 5
                  Enter the vvalue of 'val': 174
sample output :  Result : 158


####################################################################################################################################################*/
// header file

#include <stdio.h>

//function call

int replace_nbits_from_pos(int num, int a, int b, int val)

// logic for replace nbits from position

{
    
if(a <= b <=31)

   { 

    return ((num & ((1<<(b-a+1)) - 1))<<(b-a+1)) | (val & ~( ((1<<(b-a+1)) - 1)<<(b-a+1))); 
   } 
   
   }   
   
   // main function
   
int main()
{
    //Initialize variables
    int num, a, b, val, res = 0;
    
    // user input
    
    printf("Enter num, a, b, and val:");
    
    scanf("%d%d%d%d", &num, &a, &b, &val);
    
    res = replace_nbits_from_pos(num, a, b, val);
    
    // output
    printf("Result = %d\n", res);
}