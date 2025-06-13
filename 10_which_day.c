/*****************************************************************************************************************************************************
 
 Name : Chandramowlesh.S
 Description :which day of the year
 Sample input : Enter the value of 'n' : 9
                Choose First Day :
                1. Sunday
                2. Monday
                3. Tuesday
                4. Wednesday
                5. Thursday
                6. Friday
                7. Saturday
                Enter the option to set the first day : 2
                
 Sample output : The day is Tuesday

            
******************************************************************************************************************************************************/


//Header file
#include<stdio.h>

//Main function
int main()

{
    
//Initialize variables
	int start,days,new;

//User input

printf("Enter the value of 'n': ");
scanf("%d", &days);


if ( days>0 && days<=365 )
{	

printf("Choose First Day:\n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");

printf("Enter the option to set the first day :");

	scanf("%d", &start);


	if(start < 1 || start >7)
	{
		printf("Error: Invalid input,first day should be > 0 and <= 7\n");
return 0;		
	}

	if (days < 1 || days > 365)
	{
		printf("Error: Invalid input, n value should be > 0 and <= 365\n");
	return 0;
	}
	new = start + days - 1;

 //Switch case
	switch(new % 7)
	{
		case 0: 
			printf("The day is Saturday\n");
			break;
		case 1: 
			printf("The day is Sunday\n");
			break;
		case 2:		
			printf("The day is Monday\n");
			break;
		case 3: 
			printf("The day is Tuesday\n");
			break;
		case 4:		
			printf("The day is Wednesday\n");
			break;
		case 5: 
			printf("The day is Thursday\n");
			break;
		case 6: 
			printf("The day is Friday\n");
			break;
	default:
			printf("Invalid\n");
	}
}
else
{
printf("Error: Invalid input, n value should be > 0 and <= 365\n");
}
}