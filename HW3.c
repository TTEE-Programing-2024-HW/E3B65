#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int i,j,z;
int ch[9][9]{0},ah;
char a;

int show_1(void);
int show_2(void);
int show_3(void);
int show_4(void);

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
				show_5();
				break;
			
			case 'd':
		 	case 'D':
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

void show_3(void)
{
	for(i=0;i<=8;i++)
		for(j=0;j<=8;j++)
			ch[i][j]=0;
	system("cls");
	 		
	for(z=1;z<=10;z++)
	{
		i=rand()%9;
		j=rand()%9;
		if(ch[i][j]==1)
			z--;
		else
			ch[i][j]=1;
	}
	show_h0(); 
	system("pause");	
}

int show_4(void)
{
	int yn,b;
	system("cls");
	while(1)
	{
		b=rand()%3;
		if(b==0)
		{
			ah=2;
			show_hb_1();
			for(i=0;i<=7;i++)
			{
				for(j=0;j<=7;j++)
					if(ch[i][j]==2)
					{
						ch[i+1][j]=2;
						ch[i][j+1]=2;
						ch[i+1][j+1]=2;
						break;
					}
				if(ch[i][j]==2)
					break;
			}
		}
		else if(b==1)
		{
			while(1)
			{
				i=rand()%(6);
				j=rand()%(9);
				if(ch[i][j]==1)
					continue;
				else 
				{
					ch[i][j]=2;
					system("cls");
					break;
				}	
			}
			for(i=0;i<=7;i++)
			{
				for(j=0;j<=7;j++)
					if(ch[i][j]==2)
					{
						ch[i+1][j]=2;
						ch[i+2][j]=2;
						ch[i+3][j]=2;
						break;
					}
				if(ch[i][j]==2)
					break;
			}
			
		}
		else if(b==2)
		{
			while(1)
			{
				i=rand()%(9);
				j=rand()%(6);
				if(ch[i][j]==1)
					continue;
				else 
				{
					ch[i][j]=2;
					system("cls");
					break;
				}	
			}
			for(i=0;i<=7;i++)
			{
				for(j=0;j<=7;j++)
					if(ch[i][j]==2)
					{
						ch[i][j+1]=2;
						ch[i][j+2]=2;
						ch[i][j+3]=2;
						break;
					}
				if(ch[i][j]==2)
					break;
			}	
		}	
		show_h0();
		yn=show_hb_2();
		if(yn==0)
		{
			for(i=0;i<=8;i++)
				for(j=0;j<=8;j++)
					if(ch[i][j]==2)
						ch[i][j]=1;
			return 0;
		}
		else if(yn==1)
			continue;	
	}
}
