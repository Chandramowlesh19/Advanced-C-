/*****************************************************************************************************************************************************
 
 Name : Chandramowlesh.S
 Description :print pyramid pattern as shown below
 Sample input : Enter the number: 4
 Sample output : 
4                          
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4
            
******************************************************************************************************************************************************/


//Header file 
#include <stdio.h>  
  
  // Main function
int main()  

{  
    //Initiaze variables
    
    int num, i, j;   
    
    //Prompting user input
    
    printf (" Enter the number: \n");  
    scanf ("%d", &num);  
    
    // Logic for pyramid
    
    // loop for top pyramid
    
    for (i =num; i>=1; i-- )  
    {  
            for (j =i; j<=num; j++)  
        {  
                       
            printf( "%d ",j);  
        }         
        printf("\n");  
    }

    //loop for bottom pyramid
    for (i =2; i <=num; i++)  
    {  
        for (j =i; j <=num; j++)  
        {  
           
           //Print pyramid
            printf("%d ",j);  
        }  
        printf("\n");  
    }  
 
} 