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
    printf("       ���s��                                \n");
    printf("       �~�r�w�w�w�w��                        \n");
    printf("       �x���@�@�@�@�x                        \n");
    printf("       �x�@�@�@�@�@���w�w��                  \n");
    printf("       ���w�w�w�w�w�w�w�w��                  \n");
    printf("---------------------------------------------\n");//��ܭӤH�e��
    system("pause");
	system("CLS");
	
	char in;
	
	i=0;
	while(1)//��J�K�X 
	{
		printf("�п�J�K�X:\n");
		scanf("%d",&n);//��J�K�X 
		i++;
		
		if(n==2024)//�K�X���T 
			break;//���Xwhile�j�� 
		else
			printf("���~!\n");
		
		if(i==3)//���~�ֿn�T�� 
		{
			printf("���~�T��!\a");
			system("pause");
			return 0;//�����{�� 
		}	
			
	}
	system("CLS");
	
	printf("-----------------------------\n");
	printf("|    a. �e�X�����T����      |\n");
	printf("|    b. ��ܭ��k��          |\n");
	printf("|    c. ����                |\n");
	printf("-----------------------------\n");//�D���
	printf("�п�J :");
}
