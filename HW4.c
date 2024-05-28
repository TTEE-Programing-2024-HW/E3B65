#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void show_1(void);
void show_2(void);
int show_3(void);
int show_4(void);
int show_5(void);
int show_6(void);
int i;

int main()
{
	int pass;
	i=0;
	
	show_1();//Show personal screen
	system("pause");
	system("cls"); 
	
	while(1)//Enter password 
	{
		printf("請輸入密碼:");
		scanf("%d",&pass);
		if(pass==2024)//Password is correct
			break;
		else//Password is incorrect
			i++;
		
		if(i==3)//Three incorrect password attempts.
		{
			printf("錯誤!\a");
			system("pause");
			return 0;
		}
	}
	
	
	while(1)//執行程式
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
				show_5();
				break;
				
			case'd':
			case'D':
				show_6();
				break;
				
			case'e':
			case'E':
				while(1)
				{
					printf("確定離開?(y/n)");
					a=getch();
					if(a=='y'||a=='Y')
						break;
					else if(a=='n'||a=='N')
						return 0;
					else
						printf("錯誤!\n");
				}		
		}
		
	} 	
}

void show_1(void)// Personal screen
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
    printf("       ╰┬╯                                \n");
    printf("       ╭┴────╮                        \n");
    printf("       │●　　　　│                        \n");
    printf("       │　　　　　╰──╮                  \n");
    printf("       ╰────────╯                  \n");
    printf("---------------------------------------------\n");
}

void show_2(void)//Main Menu
{
	printf("-----------[BookingSystem]------------\n");
	printf("|     a. Enter student grades        |\n");
	printf("|     b. Display student grades      |\n");
	printf("|     c. Search for student grades   |\n");
	printf("|     d. Grade ranking               |\n");
	printf("|     e. Exit system                 |\n");
	printf("--------------------------------------\n");
	printf("請輸入 :");
}

