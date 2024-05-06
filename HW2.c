#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int i,j,z;
char a;

int show_1(void);
int show_2(void);
int show_3(void);
int show_4(void);


int main()
{
	int pass;
	i=0;
	
	show_1();//顯示個人畫面 
	system("pause");
	system("cls"); 
	
	while(1)//輸入密碼 
	{
		printf("請輸入密碼:");
		scanf("%d",&pass);
		if(pass==2024)//密碼正確 
			break;
		else//密碼錯誤 
			i++;
		
		if(i==3)//密碼錯誤3次 
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
				while(1)
				{
					printf("Continue?(y/n)");
					a=getch();
					if(a=='y'||a=='Y')
						break;
					else if(a=='n'||a=='N')
						return 0;
					else
						printf("  error\n");
				}		
		}
		
	} 
}

show_1()
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

show_2()
{
	printf("-----------------------------\n");
	printf("|    a. 畫出直角三角形      |\n");
	printf("|    b. 顯示乘法表          |\n");
	printf("|    c. 結束                |\n");
	printf("-----------------------------\n");//主選單
	printf("請輸入 :");
}


