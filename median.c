/****************************************************************************************************************************************************************************

Name : Chandramowlesh
Date : 07-03-2022
Description : median of two unorted arrays
sample input :  Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

sample output : 
Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5     


*******************************************************************************************************************************************************************/


//Header file

#include  <stdio.h>
#include  <math.h>

float  median(int  x[ ], int  n) ;
void  sort(int  x[ ], int  n) ;
float median1(int x1[ ], int n1);
void sort(int x1[ ], int n1); 

//main function

int main()
{
    
    //initialize variables
    
    int  i, n, x[50] ;
    
    int n1,x1[50];
    
    float t;
    
    // User input for arrays
    
    printf("Enter the 'n' value for Array A: ") ;
    scanf("%d", &n) ;
    
    printf("Enter the 'n' value for Array B: ");
    scanf("%d", &n1) ;

    printf("Enter the elements one by one for Array A: ") ;
    for(i=0 ; i<n ; i++)
    scanf("%d", &x[i]) ;
    
    printf("Enter the elements one by one for Array B: ");
    for(i=0 ; i<n1 ; i++)
    scanf("%d", &x1[i]) ;

    printf("Median of array1 : %g\n", median(x,n)) ;
    printf("Median of array2 : %g\n", median1(x1,n1)) ;
    t=(median(x,n) + median1(x1,n1) ) / 2 ;

    printf(" median of both arrays = %g",t);
}

float median(int  x[ ], int  n)
{
    sort(x,n) ;
    if(n % 2 == 1)
        return (x[n/2]) ;
    else
        return ( (x[n/2]+x[n/2-1])/2.0 );
}

float median1(int  x1[ ], int  n1)
{
    sort(x1,n1) ;
    if(n1 % 2 == 1)
        return (x1[n1/2]) ;
    else
        return ( (x1[n1/2]+x1[n1/2-1])/2.0 );
}

void sort(int x[ ], int n)
{
    int i, j, temp ;
    for(i=0 ; i<n-1 ; i++)
        for(j=0 ; j<n-1-i ; j++)
            if(x[j] > x[j+1])
                {
                    temp=x[j];
                    x[j]=x[j+1];
                    x[j+1]=temp;
                }
}

void sort1(int x1[ ], int n1)
{
    int k, l, m ;
    for(k=0 ; k<n1-1 ; k++)
    for(l=0 ; l<n1-1-k ; l++)
        if(x1[l] > x1[l+1])
        {
        m=x1[l];
        x1[l]=x1[l+1];
        x1[l+1]=m;
        }
}
