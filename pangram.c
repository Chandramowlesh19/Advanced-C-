/*******************************************************************************************************
 
 Name : Chandramowlesh.S
 Description : check given string is Pangram or not
 sample input : Enter the string: The quick brown fox jumps over the lazy dog
 sample output : The Entered String is a Pangram String

*******************************************************************************************************/

#include<stdio.h>
#include<string.h>
int pangram(char *);

void main()
{
    char str[100];
    scanf("%[^\n]", str);
 pangram(str);
}

int pangram(char str[])
{
	int i,value[26]={0},count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if('a'<=str[i] && str[i]<='z')
		{
			count+=!value[str[i]-'a'];
			value[str[i]-'a']=1;
		}
		else if('A'<=str[i] && str[i]<='Z')
		{
			count+=!value[str[i]-'A'];
			value[str[i]-'A']=1;
		}
	}
	if(count==26)
	{
		printf("The Entered string is a Pangram String");
	}
	else
	{
		printf("The Entered string is not a Pangram String");
	}
}