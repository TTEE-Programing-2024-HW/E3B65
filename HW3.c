#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int i,j,z;
char a;

int show_1(void);

int main()
{
	int pass;
	i=0;
	
	show_1();//Show personal screen
	system("pause");
	system("cls"); 
	
	while(1)//Enter password 
	{
		printf("½Ð¿é¤J±K½X:");
		scanf("%d",&pass);
		if(pass==2024)//Password is correct
			break;
		else//Password is incorrect
			i++;
		
		if(i==3)//Three incorrect password attempts.
		{
			printf("¿ù»~!\a");
			system("pause");
			return 0;
		}
	}
} 

show_1()// Personal screen
{
	printf("---------------------------------------------\n");
	printf("EEEEEEEEEE      333333333       BBBBBBBB     \n");
	printf("E                       3       B       B    \n");
	printf("E                       3       B       B    \n");
	printf("EEEEEEEEEE      333333333       BBBBBBBB     \n");
	printf("E                       3       B       B    \n");
	printf("E                       3       B       B    \n");
	printf("EEEEEEEEEE      333333333       BBBBBBBB     \n");
	printf("                                             \n");
	printf("       6666666666      555555555             \n");
	printf("       6               5                     \n");
	printf("       6               5                     \n");
	printf("       6666666666      555555555             \n");
	printf("       6        6              5             \n");
	printf("       6        6              5             \n");
	printf("       6666666666      555555555             \n\n");
    printf("       ¢¢¢s¢£                                \n");
    printf("       ¢~¢r¢w¢w¢w¢w¢¡                        \n");
    printf("       ¢x¡´¡@¡@¡@¡@¢x                        \n");
    printf("       ¢x¡@¡@¡@¡@¡@¢¢¢w¢w¢¡                  \n");
    printf("       ¢¢¢w¢w¢w¢w¢w¢w¢w¢w¢£                  \n");
    printf("---------------------------------------------\n");
}
