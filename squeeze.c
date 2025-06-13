/***********************************************************************************************************
 
 Name : Chandramowlesh.S
 Description : Squeeze the character in s1 that matches any character in the string s2
 sample input : 
                    Enter s1 : Welcome
                    Enter s2 : Emertxe
 sample output :      After squeeze s1 :    Wlco           
                    
 
 *******************************************************************************************************/



#include<stdio.h>

void squeeze(char *, char *);

int main()
{

   char string1[100];
   char string2[100];

   printf("enter s1:\n");
   scanf(" %[^\n]", string1);

   printf("enter s2:\n");
   scanf(" %[^\n]", string2);
   squeeze(string1, string2);

   printf("After squeeze s1 : %s\n", string1);

   return 0;
}
void squeeze(char *string1,char *string2)
{
   int i,j,k=0;

   for(i=0; string1[i] != '\0'; i++)
   {
      for(j=0; string2[j] != '\0' && (string1[i]!= string2[j]); j++);

         if(string2[j]=='\0')
         {
         string1[k++]=string1[i];
        }
       
   }
   string1[k]='\0';
}