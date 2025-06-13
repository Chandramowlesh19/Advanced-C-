/*******************************************************************************************************************************
 
 Name : Chandramowlesh.s
 Date : 15-03-22
 Describtion : remove duplicate elements in a given array
 Sample input : Enter the size: 5
                Enter elements into the array: 5 1 3 1 5
                
  Sample Output : After removing duplicates: 5 1 3
  
***********************************************************************************************************/
//Header file

#include<stdio.h>
void fun(int*arr1, int size, int *arr2, int new_size);
int main()
{
    int size, i;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr1[size];
    printf("Enter elements into the array: ");
    int arr2[100];
    
    
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr1[i]);
    }
    fun(arr1,size,arr2,100);
    printf("After removing duplicates: ");
    i=0;
    while(arr2[i] != '\0')
    {
        printf("%d ",arr2[i]);
        i++;
    }
    return 0;
}
void fun(int *arr1, int size,int*arr2, int new_size)
{
    int k = 0;
    
     
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(arr1[i] == arr1[j] && i != j)
               break;
            if(i == j)
            {
                arr2[k] = arr1[i];
               k++;
            }
        }
    }
    arr2[k] = '\0';
}