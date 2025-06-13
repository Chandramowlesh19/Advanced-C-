#include <stdio.h>

void NPRSString(char str[] , int len, int c);

int main()
{
    int n, c, i, j;
    char distinct[100];
   
    printf("Enter the number characters C :");
    scanf("%d", &c);
  
     printf("Enter the Length of the string N : ");
    scanf("%d", &n);
   
    printf("Enter 3 distinct characters : ");
    for (i = 0; i < c; i++)
    {
          scanf("\n%c", &distinct[i]);
    }
    
   for (i = 0; i < c; i++)
    {
        for (j = (i+1); j < c; j++)
        {
            if(distinct[j] == distinct[i] )
            {
                printf("Error : Enter distinct characters\n");
                return 1;
            }
        }
    }
    printf("Possible NRPS is ");
    
    NPRSString(distinct, n, c);
    
      return 0;
}

void NPRSString(char str[] , int len, int c)
{
    int i, val = 0, count = 0;
    
    for (i = 0; i < len; i++)
    {
        if(i%c == 0 && i != 0)
		{
			val++;
		}
        printf("%c", *(str+((i+val)%c)));
    }
    
}