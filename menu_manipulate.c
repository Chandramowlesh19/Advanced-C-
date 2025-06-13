/*****************************************************************************************************
 
 Name : Chandramowlesh.s
 Date : 05-04-2022
 Description : Provide a menu to manipulate or display the value of variable of type t
 sample input :
Test case 1:1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

*******************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	void *arr = malloc(8 * sizeof(char)), *ptr = arr;
	int val, var, ch1_flag = 0, ch2_flag = 0, int_flag = 0, srt_flag = 0, fl_flag = 0, db_flag = 0, value, i, index;
	char ch1, ch2;
	short rex;
	float value1;
	double value2;
	printf("Menu :\n");
	do
	{
		printf("1. Add elements\n2. Remove element\n3. Display element\n4. Exit from the program\n");
		printf("Choice ---> ");
		scanf("%d", &val);
		switch(val)
		{
			case 1:
				printf("Enter the type you have to insert:\n1. int\n2. char\n3. short\n4. float\n5. double\n");
				printf("Choice ---> ");
				scanf("%d", &var);
				switch(var)
				{
					case 1:
						if (int_flag == 0 && fl_flag == 0 && db_flag == 0)
						{
							printf("Enter the int : ");
							scanf("%d", &value);
							*((int *)ptr + 4) = value;
							int_flag++;
						}
						else
							printf("No memory\n");
						break;
					case 2:
						if (ch1_flag == 0 && db_flag == 0)
						{
							printf("Enter the char : ");
							getchar();
							scanf("%c", &ch1);
							*((char *)ptr + 0) = ch1;
							ch1_flag++;
						}
						else if(ch2_flag == 0 && db_flag == 0)
						{
							printf("Enter the char : ");
							getchar();
							scanf("%c", &ch2);
							*((char *)ptr + 1) = ch2;
							ch2_flag++;
						}
						else
							printf("no memory\n");
						break;
					case 3:
						if(srt_flag == 0 && db_flag ==0)
						{
							printf("Enter the short : ");
							scanf("%hd", &rex);
							*((short *)ptr + 2) = rex;
							srt_flag++;
						}
						else
							printf("no memory\n");
						break;
					case 4:
						if(int_flag == 0 && fl_flag == 0 && db_flag == 0)
						{
							printf("Enter the float : ");
							scanf("%f", &value1);
							*((float *)ptr + 4) = value1;
							fl_flag++;
						}
						else
							printf("no memory\n");
						break;
					case 5:
						if(ch1_flag == 0 && ch2_flag == 0 && int_flag == 0 && fl_flag == 0)
						{
							printf("Enter the double : ");
							scanf("%lf", &value2);
							*((double *)ptr + 0) = value;
							db_flag++;
						}
						else
							printf("no memory\n");
						break;
					default :
						printf("Error : Enter the choice 1 to 5\n");
				}
				break;
			case 2:
				if(ch1_flag == 0 && ch2_flag == 0 && int_flag == 0 && srt_flag == 0 && fl_flag == 0 && db_flag == 0)
					printf("memory empty\n");
				else
				{
					i = 0;
					if(ch1_flag == 1)
						printf("%d -> %c \n", i++, ch1);
					if(ch2_flag == 1)
						printf("%d -> %c \n", i++, ch2);
					if(int_flag == 1)
						printf("%d -> %d \n", i++, value);
					if(srt_flag == 1)
						printf("%d -> %hd \n", i++, rex);
					if(fl_flag == 1)
						printf("%d -> %f \n", i++, value1);
					if(db_flag == 1)
						printf("%d -> %lf \n", i++, value2);
					printf("Enter the index vlaue to be deleted : ");
					scanf("%d", &index);
					i = 0;
					if(ch1_flag == 1 && index == i++)
						ch1_flag = 0;
					if(ch2_flag == 1 && index == i++)
						ch2_flag = 0;
					if(int_flag == 1 && index == i++)
						int_flag = 0;
					if(srt_flag == 1 && index == i++)
						srt_flag = 0;
					if(fl_flag == 1 && index == i++)
						fl_flag = 0;
					if(db_flag == 1 && index == i++)
						db_flag = 0;
					printf("index %d sucessfully deleted.\n", index);
				}
				break;
			case 3:
				if(ch1_flag == 0 && ch2_flag == 0 && int_flag == 0 && srt_flag == 0 && fl_flag == 0 && db_flag == 0)
					printf("empty memory\n");
				else
				{
					i = 0;
					printf("------------------------\n");
					if(ch1_flag == 1)
						printf("%d -> %c (char)\n", i++, ch1);
					if(ch2_flag == 1)
						printf("%d -> %c (char)\n", i++, ch2);
					if(int_flag == 1)
						printf("%d -> %d (int)\n", i++, value);
					if(srt_flag == 1)
						printf("%d -> %hd (short)\n", i++, rex);
					if(fl_flag == 1)
						printf("%d -> %f (float)\n", i++, value1);
					if(db_flag == 1)
						printf("%d -> %lf (double)\n", i++, value2);
					printf("------------------------\n");
				}
				break;
			case 4:
				
				break;
			default :
				
				printf("Error : Enter the choice 1 to 4\n");
		}
		}while (val != 4);
}