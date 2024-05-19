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
	
	while(1)//Run Program
	{
		system("cls");
		fflush(stdin);
		show_2();
		a=getch();
		system("cls");
		switch(a)
		{
			case'a':
			case'A':
				show_3();
				break;
				
			case'b':
			case'B':
				show_4();
				break;
				
			case'c':
			case'C':
				while(1)
				{
					printf("Continue?(y/n)");
					a=getch();
					if(a=='y'||a=='Y')
						break;
					else if(a=='n'||a=='N')
						return 0;
					else
						printf("¿ù»~!\n");
				}		
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

show_2()//Main Menu
{
	printf("--------[BookingSystem]--------\n");
	printf("|    a. Available seats       |\n");
	printf("|    b. Arrange for you       |\n");
	printf("|    c. Choose by yourself    |\n");
	printf("|    d. Exit                  |\n");
	printf("-------------------------------\n");
	printf("½Ð¿é¤J :");
}
