/****************************************************************************************************************************************************
 
 Name : Chandramowlesh.s
 Description : define a macro SIZEOF(x), without using sizeof operator
 sample input :  Predefined in the program with a constant value
 sample output : Display the result
 
 ***************************************************************************************************************************************************/


#include<stdio.h>

//Defining the MACRO
#define SIZEOF(x) (char *)(&x + 1) - (char *) &x

int main()
{	
	//Declaring the variales that are of the required data type
	int a;
	char c;
	float f;
	double d;
	unsigned int u;
	long int l;
	

	//Displaying the result 
	printf("Sizeof(int): %zu bytes\n", SIZEOF(a));
	printf("Sizeof(char): %zu bytes\n", SIZEOF(c));
    printf("Sizeof(float): %zu bytes\n", SIZEOF(f));	
    printf("Sizeof(double): %zu bytes\n", SIZEOF(d));
    printf("Sizeof(unsigned int): %zu bytes\n", SIZEOF(u));
    printf("Sizeof(long int): %zu bytes\n", SIZEOF(l));
    

	return 0;
}