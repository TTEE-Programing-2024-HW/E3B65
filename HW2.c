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


