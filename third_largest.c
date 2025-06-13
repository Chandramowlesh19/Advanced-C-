/*******************************************************************************************************************************
 
 Name : Chandramowlesh.s
 Date : 15-03-22
 Describtion : 3rd largest element in an array
 Sample input : Enter the size of the Array : 5
                Enter the elements into the array: 5 1 4 2 8
                
  Sample Output : Third largest element of the array is 4
  
  
*********************************************************************************************************************************/


//Header file

#include <stdio.h>

int third_largest(int *arr, int size)

// Logic for 3rd largest element
      {
        int i, index = 0;
        int array[size];
       
        int largest = arr[0];
        for(i = 0; i < size; i++)
        {
                if (arr[i] > largest)
                {
                        largest = arr[i];
                       
                }
        }
        int second = 0;
        for (i = 0; i < size; i++)
        {
                if (arr[i] > second  && arr[i] < largest)
                {
                        second = arr[i];
                        
                }
        }
        int third = 0;
        for (i = 0; i < size; i++)
        {
                if (arr[i] > third && arr[i] < second)
                {
                        third = arr[i];
                }
        }
        return third;
}

// main function
int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size],i;
    
      printf("Enter the element into the  array : ");
for (i=0; i<size; i++)
{
    scanf("%d", &arr[i]);
}
    
    //Read elements into the array
    
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}