/****************************************************************************************************************************************************************************

Name : Chandramowlesh.S
Date : 07-03-2022
Description : print all primes using Sieve of Eratosthenes method
sample input : 20
sample output : 2,3,5,7,11,13,17,19


****************************************************************************************************************************************************************************/
 #include<stdio.h>
  
   int main()
   {
       char option;
   
   
           //declaration of the variables
           int num, i, j;
  
          //prompt the user for the limit
          printf("Enter the value of 'n': ");
          scanf("%d", &num);
  
          //validating for positive number
          if (num > 1)
          {
              //initializing the array with limit
              int array[num];
  
              //initialize array values with 0
              for(i = 0; i < num; i++)
              {
                  array[i] = 0;
              }
  
              //re-initialize all the value if the index is divisible by other index value
              for (i = 2; i <= num; i++)
              {
                  for (j = 2; j<= num; j++ )
                  {
                    if ((j % i == 0) && i != j)
                      {
                         array[j] = 'x';
                      }
                  }
  
              }
  
             printf("The primes less than or equal to %d are : ", num);
  
              //prints all the index if the value is 0 
           for (i = 2; i <= num; i++)
             {
                 if (array[i] == 0)
                  {
                      printf("  %d", i);
                  }
  
              }
  
          }
          else
          {
              printf("Please enter a positive number which is > 1 ");
          }
  
  
      return 0;
  }