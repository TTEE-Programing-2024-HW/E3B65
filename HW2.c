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
	
	show_1();//��ܭӤH�e�� 
	system("pause");
	system("cls"); 
	
	while(1)//��J�K�X 
	{
		printf("�п�J�K�X:");
		scanf("%d",&pass);
		if(pass==2024)//�K�X���T 
			break;
		else//�K�X���~ 
			i++;
		
		if(i==3)//�K�X���~3�� 
		{
			printf("���~!\a");
			system("pause");
			return 0;
		}
	}
	
	while(1)//����{��
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
						printf("���~!\n");
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
    printf("       ���s��                                \n");
    printf("       �~�r�w�w�w�w��                        \n");
    printf("       �x���@�@�@�@�x                        \n");
    printf("       �x�@�@�@�@�@���w�w��                  \n");
    printf("       ���w�w�w�w�w�w�w�w��                  \n");
    printf("---------------------------------------------\n");
}

show_2()
{
	printf("-----------------------------\n");
	printf("|    a. �e�X�����T����      |\n");
	printf("|    b. ��ܭ��k��          |\n");
	printf("|    c. ����                |\n");
	printf("-----------------------------\n");//�D���
	printf("�п�J :");
}

show_3()
{
	while(1)
	{
		fflush(stdin);
		system("cls");
		printf("�п�Ja-n�r�� :");
		a=getch();
		if(a>='a'&&a<='n')//��J���T 
			break;
		else
			printf("���~!\n");
		system("pause");
	}
	system("cls");
	z=a-96;//������ 
	
	for(i=0;i<z;i++)
	{
		for(j=0;j<z-i;j++)//�T�����W�Ů� 
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)//�^�� 
		{
			printf("%c",a-i); 
		}
		printf("\n");//���� 
	}
	system("pause");
}


show_4()
{
	int n;
	while(1)//��J�Ʀr 
	{
		fflush(stdin);
		system("cls");
		printf("�п�J1-9�Ʀr :");
		scanf("%d",&n);
		if(n>=1&&n<=9)
			break;
		else
			printf("���~!\n");
		
		system("pause");
	}
	system("cls");
	for(i=1;i<=n;i++)//�e�����Ʀr 
	{
		for(j=1;j<=n;j++)//�᭱���Ʀr 
		{
			printf("%d * %d = %2d ,",i,j,i*j);//��� 
		}
		printf("\n");//���� 
	}
	system("pause");
}

