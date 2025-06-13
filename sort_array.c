/*************************************************************************************************************************************
 
 Name : chandramowlesh.S
 Date : 20-3-22
 Description :Print the values in sorted order without modifying or copying array
 sample input :  Enter the size : 5
                 Enter 5 elements  10 1 3 8 -1
 sample output : After sorting: -1 1 3 8 10
                 Original array values 10 1 3 8 -1


*****************************************************************************************************************************************/


#include<stdio.h>


void print_sort(int *array, int size);

int main()
{
        int size;
        printf("Enter the size : ");
        scanf("%d",&size);
        
        int array[size];
        printf("Enter %d elements ", size);
        for(int i=0;i<size;i++)
        {
                scanf("%d",&array[i]);
        }
        printf("After sorting : ");
         print_sort(array, size);
         printf("\n");
         
         printf("Original Array Values : ");
         
         for( int i=0; i<size; i++)
         {
             printf("%d, " ,array[i]);
         }
}

        
void print_sort(int *array, int size)
        {
       int min,min1,max;
        min=array[0];
        max=array[0];
        min1=array[0];
        for(int i=0;i<size;i++)  //first find min and max out of array
        {
                if(array[i]<min)
                        min=array[i];
                if(array[i]>max)
                        max=array[i];
        }               
        printf("%d, ",min);
        while(min!=max)
        {
                for(int i=0;i<size;i++)
                {
                        if(array[i]!=min && array[i]>min)     //choose an element greater than already found min and not equal to min itself
                        {
                                min1=array[i];
                                break;
                        }
                }       
                for(int i=0;i<size;i++)
                {
                        if(array[i]<min1 && array[i]>min)    //with the choosen element in above loop find which is lowest out of array
                                min1=array[i];
                }               
                printf("%d, ",min1);
                min=min1;                                   //update min element
        }       
}