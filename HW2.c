#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(void)
{
	int i,j,z,n;
	
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
    printf("---------------------------------------------\n");//顯示個人畫面
    system("pause");
	system("CLS");
	
	char in;
	
	i=0;
	while(1)//輸入密碼 
	{
		printf("請輸入密碼:\n");
		scanf("%d",&n);//輸入密碼 
		i++;
		
		if(n==2024)//密碼正確 
			break;//跳出while迴圈 
		else
			printf("錯誤!\n");
		
		if(i==3)//錯誤累積三次 
		{
			printf("錯誤三次!\a");
			system("pause");
			return 0;//結束程式 
		}	
			
	}
	system("CLS");
	
	printf("-----------------------------\n");
	printf("|    a. 畫出直角三角形      |\n");
	printf("|    b. 顯示乘法表          |\n");
	printf("|    c. 結束                |\n");
	printf("-----------------------------\n");//主選單
	printf("請輸入 :");
}
