/******************************************************************************************************
 
 Name : Chandramowlesh
 Date : 05-04-2022
 Description : Variance calculation with dynamic arrays
 Sample input : Enter the no.of elements : 10

Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31

Sample output : Variance is 40.000000

******************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

float variance(int *, int);

int main()
{
	int size;
	float result;

	printf("Enter the no.of elements : ");

	scanf("%d", &size);

	int *xvalue = malloc(size * sizeof(int));

	printf("Enter the %d elements:\n", size);

	for(int i = 0; i < size; i++)
	{

		printf("[%d] -> ", i);

		scanf("%d", xvalue + i);
	}

	result = variance(xvalue, size);

	printf("Variance is %f\n", result);
}

float variance(int *xvalue, int size)
{

	int sum = 0, i, diff[size], diffsum = 0;

	float mean, variance;

	for(i = 0; i < size; i++)

		sum += xvalue[i];

	mean = (float)sum / size;

	for(i = 0; i < size; i++)
	{

		diff[i] = xvalue[i] - mean;

		diff[i] *= diff[i];
	}

	for(i = 0; i < size; i++)

		diffsum += diff[i];

	variance = (float)diffsum / size;

	return  variance;
}