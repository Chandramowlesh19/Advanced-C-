#include <stdio.h>

void positive_fibonacci(int limit, int first, int second, int next);

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    printf("Fibonacci Series of the Given Number %d are: ", limit);
    positive_fibonacci(limit, 0, 1, 0);
}


void positive_fibonacci(int limit, int first, int second, int next)
{
    if(limit >= 0)
    {
        printf("%d, ", next);
        first=second;
        second=next;
        next=first+second;
        if (next <= limit)
        {
            positive_fibonacci(limit, first, second, next);
        }
    }
    else
    {
        printf("Invalid input");
    }
}