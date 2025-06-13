/*****************************************************************************************************************************************************

Name : Chandramowlesh
Date :12-03-22
Description : generate negative fibbonacci numbers using recrsion
Sample input : Enter a number: -8
Sample Output : 0, 1, -1, 2, -3, 5, -8

******************************************************************************************************************************************************/
//Header file
#include <stdio.h>

void negative_fibonacci(int last, int current, int next, int limit)

{
//condition for lessthan zero for negative number


    if(limit <= 0)
    
    {   
        //Logic for negative fibonacci numbers
        
     printf("%d,", next);
      last = current;
            current = next;
            next = last - current;

        if (next >= limit && next <= -limit) 
        {   
           negative_fibonacci(last, current, next, limit);
        }   
    }   
    else
    {   
        // condition for positve number
        printf("Invalid input");
    }
}

//main function
int main()

{
    //initialize Variables
    
    int limit;
    
    //User input
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    
    negative_fibonacci( 0, 1, 0,limit);
}