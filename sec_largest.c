/******************************************************************************************************************************************************

Name : Chandramowlesh.S
Date : 15-03-2022
Description :  find 2nd largest element in an array
sample input : Enter the size of the Array : 5
               Enter the elements into the array: 5 1 4 2 8
Sample output : Second largest element of the array is 5

*************************************************************************************************************/
//Header file
#include <stdio.h>

//
int sec_largest(int *arr, int size)

{
    
   //initialize the variables
   
int i, large, sec_large;
large = 0;

for(i=0; i<size; i++)
{
    if(arr[i] > large)
    {
        sec_large = large;
        large = arr[i];
    }
        if (arr[i] > sec_large && arr[i] < large)
        {
            sec_large = arr[i];
        }
}
return sec_large;
}
//main function

int main()

{
    //initialize the variables
    
    int i, size, ret;
    
    //Read size from the user
    
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the element into the  array : ");
    
    
for (i=0; i<size; i++)
{
    scanf("%d", &arr[i]);
}
    
    //Read elements into the array
    
    //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}