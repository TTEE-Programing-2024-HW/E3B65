#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
 
void show_1(void); // ��ƫŧi
void show_2(void);
void show_3(void);
void show_4(void);
void show_5(void);
void show_6(void);

#define MIN_N 5 // �w�q�`��
#define MAX_N 10

typedef struct // �ǥ͵��c��w�q
{
    char name[50];
    int id;
    int math;
    int physics;
    int english;
    float average;
} Student;

Student students[MAX_N]; // �ǥͼƲ�
int studentCount = 0; // �ǥͼƶq
int i;  


int getIntegerInput(int min, int max);// ���U��ƫŧi
void readStudentData(Student *students, int n);
void printErrorMessage(const char *message);
void calculateAverage(Student *student);
void displayStudents();
void searchStudent();
void rankStudents();

int main() 
{
    int pass; // �K�X�ܼ�
    char a;
    i = 0;

    show_1(); // ��ܭӤH�e��
    system("pause");
    system("cls");

    while (1) // �K�X��J�`��
	{ 
        printf("�п�J�K�X: ");
        scanf("%d", &pass);
        if (pass == 2024) // �K�X���T
            break;
        else // �K�X���~
            i++;

        if (i == 3) { // �T�����~�K�X����
            printf("���~!\a");
            system("pause");
            return 0;
        }
    }

    while (1) // �D�\��`��
	{ 
        system("cls");
        fflush(stdin);
        show_2(); // ��ܥD��� 
        a = getch();
        system("cls");
        switch (a) {
            case 'a':
            case 'A':
                show_3(); // ��J�ǥͦ��Z 
                break;

            case 'b':
            case 'B':
                show_4(); // ��ܩҦ��ǥͦ��Z 
                break;

            case 'c':
            case 'C':
                show_5(); // �j�M�ǥͦ��Z 
                break;

            case 'd':
            case 'D':
                show_6(); // ���Z�ƦW 
                break;

            case 'e':
            case 'E':
                while (1) // �T�w���}�`��
				{
                    printf("�T�w���}?(y/n)");
                    a = getch();
                    if (a == 'y' || a == 'Y')
                        return 0;
                    else if (a == 'n' || a == 'N')
                        break;
                    else
                        printf("���~!\n");
                }
                break;
                
            default:
                printf("���~!\n");
                system("pause");
                break;
        }
    }
}

void show_1(void) // ��ܭӤH�e��
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
    printf("       6666666666      555555555             \n");
    printf("       ���s��                                \n");
    printf("       �~�r�w�w�w�w��                        \n");
    printf("       �x���@�@�@�@�x                        \n");
    printf("       �x�@�@�@�@�@���w�w��                  \n");
    printf("       ���w�w�w�w�w�w�w�w��                  \n");
    printf("---------------------------------------------\n");
}

void show_2(void) // ��ܥD���
{ 
    printf("-----------[BookingSystem]------------\n");
    printf("|     a. Enter student grades        |\n");
    printf("|     b. Display student grades      |\n");
    printf("|     c. Search for student grades   |\n");
    printf("|     d. Grade ranking               |\n");
    printf("|     e. Exit system                 |\n");
    printf("--------------------------------------\n");
    printf("�п�J :");
}

int getIntegerInput(int min, int max) // ������w�d�򤺪���ƿ�J
{
    int input;
    while (1) 
	{
        if (scanf("%d", &input) != 1 || input < min || input > max) 
		{
            printErrorMessage("��J���~�A�п�J���T���Ʀr�I");
            while (getchar() != '\n'); // �M�Žw�İ�
            printf("�п�J�@�Ӥ��� %d �M %d ���������: ", min, max);
        } 
		else 
		{
            return input;
        }
    }
}

void printErrorMessage(const char *message) // ��ܿ��~�T��
{
    printf("%s\n", message);
}

void readStudentData(Student *students, int n) // Ū���ǥ͸��
{
    for (int i = 0; i < n; ++i) 
	{
        printf("��J�� %d �Ӿǥͪ����:\n", i + 1);
        printf("�m�W: ");
        scanf("%s", students[i].name);

        printf("�Ǹ� (6 ����): ");
        students[i].id = getIntegerInput(100000, 999999);

        printf("�ƾǦ��Z (0~100): ");
        students[i].math = getIntegerInput(0, 100);

        printf("���z���Z (0~100): ");
        students[i].physics = getIntegerInput(0, 100);

        printf("�^�妨�Z (0~100): ");
        students[i].english = getIntegerInput(0, 100);

        calculateAverage(&students[i]);
    }
    studentCount = n;
}

void calculateAverage(Student *student) // �p��ǥͥ������Z
{
    student->average = (student->math + student->physics + student->english) / 3.0;
}

void displayStudents() // ��ܩҦ��ǥ͸��
{
    if (studentCount == 0) 
	{
        printf("�L�ǥ͸�ơC\n");
        system("pause");
        return;
    }
    for (int i = 0; i < studentCount; ++i) 
	{
        printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, ����: %.1f\n",
            students[i].name, students[i].id, students[i].math,
            students[i].physics, students[i].english, students[i].average);
    }
    system("pause");
}


void show_3(void) 
{
    int n;
    printf("�п�J�ǥͼƥ� (5~10): ");
    n = getIntegerInput(MIN_N, MAX_N);
    readStudentData(students, n);
}

void show_4(void) 
{
    displayStudents();
}
