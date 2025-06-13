/************************************************************************
 
 Name : Chandramowlesh
 Description :  print all possible combinations of given string.
 sample input : Enter a string: abc
 sample output : All possible combinations of given string :abc
acb
bca
bac
cab
cba

*************************************************************************************************/

#include <stdio.h>
void swap (char *x, char *y)

{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
void comb(char *a, int i, int n) 
{
    int j; 
    
    if (i == n){
    
        printf("%s\n", a);
    }
    else
    {
        for (j = i; j <= n; j++)
        {
            swap((a + i), (a + j));
            comb(a, i + 1, n);
            swap((a + i), (a + j)); 
        }
    }
}

int main()
{
    
        char str[20];
        int len = 0, i, count = 0, j;

       printf("Enter a string: ");
        scanf(" %s", str); 

        while(str[len] != '\0')
        {
            len++;
        }
        for (i = 0; i < len; i++)
        {
            for(j = i + 1; j < len; j++)
            {
                if (str[i] == str[j])
                {
                    count = 1;
                    printf("Error : Please Enter distinct characters\n");
                    break;
                }
            }
        }
        if(count == 0) 
        {
            printf("ALL possible combinations of given string :");
            comb(str, 0, len - 1);
        }
}
