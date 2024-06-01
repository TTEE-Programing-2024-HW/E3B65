#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
 
void show_1(void); // 函數宣告
void show_2(void);
void show_3(void);
void show_4(void);
void show_5(void);
void show_6(void);

#define MIN_N 5 // 定義常數
#define MAX_N 10

typedef struct // 學生結構體定義
{
    char name[50];
    int id;
    int math;
    int physics;
    int english;
    float average;
} Student;

Student students[MAX_N]; // 學生數組
int studentCount = 0; // 學生數量
int i;  


int getIntegerInput(int min, int max);// 輔助函數宣告
void readStudentData(Student *students, int n);
void printErrorMessage(const char *message);
void calculateAverage(Student *student);
void displayStudents();
void searchStudent();
void rankStudents();

int main() 
{
    int pass; // 密碼變數
    char a;
    i = 0;

    show_1(); // 顯示個人畫面
    system("pause");
    system("cls");

    while (1) // 密碼輸入循環
	{ 
        printf("請輸入密碼: ");
        scanf("%d", &pass);
        if (pass == 2024) // 密碼正確
            break;
        else // 密碼錯誤
            i++;

        if (i == 3) { // 三次錯誤密碼嘗試
            printf("錯誤!\a");
            system("pause");
            return 0;
        }
    }

    while (1) // 主功能循環
	{ 
        system("cls");
        fflush(stdin);
        show_2(); // 顯示主選單 
        a = getch();
        system("cls");
        switch (a) {
            case 'a':
            case 'A':
                show_3(); // 輸入學生成績 
                break;

            case 'b':
            case 'B':
                show_4(); // 顯示所有學生成績 
                break;

            case 'c':
            case 'C':
                show_5(); // 搜尋學生成績 
                break;

            case 'd':
            case 'D':
                show_6(); // 成績排名 
                break;

            case 'e':
            case 'E':
                while (1) // 確定離開循環
				{
                    printf("確定離開?(y/n)");
                    a = getch();
                    if (a == 'y' || a == 'Y')
                        return 0;
                    else if (a == 'n' || a == 'N')
                        break;
                    else
                        printf("錯誤!\n");
                }
                break;
                
            default:
                printf("錯誤!\n");
                system("pause");
                break;
        }
    }
}

void show_1(void) // 顯示個人畫面
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
    printf("       ╰┬╯                                \n");
    printf("       ╭┴────╮                        \n");
    printf("       │●　　　　│                        \n");
    printf("       │　　　　　╰──╮                  \n");
    printf("       ╰────────╯                  \n");
    printf("---------------------------------------------\n");
}

void show_2(void) // 顯示主選單
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

int getIntegerInput(int min, int max) // 獲取指定範圍內的整數輸入
{
    int input;
    while (1) 
	{
        if (scanf("%d", &input) != 1 || input < min || input > max) 
		{
            printErrorMessage("輸入錯誤，請輸入正確的數字！");
            while (getchar() != '\n'); // 清空緩衝區
            printf("請輸入一個介於 %d 和 %d 之間的整數: ", min, max);
        } 
		else 
		{
            return input;
        }
    }
}

void printErrorMessage(const char *message) // 顯示錯誤訊息
{
    printf("%s\n", message);
}

void readStudentData(Student *students, int n) // 讀取學生資料
{
    for (int i = 0; i < n; ++i) 
	{
        printf("輸入第 %d 個學生的資料:\n", i + 1);
        printf("姓名: ");
        scanf("%s", students[i].name);

        printf("學號 (6 位整數): ");
        students[i].id = getIntegerInput(100000, 999999);

        printf("數學成績 (0~100): ");
        students[i].math = getIntegerInput(0, 100);

        printf("物理成績 (0~100): ");
        students[i].physics = getIntegerInput(0, 100);

        printf("英文成績 (0~100): ");
        students[i].english = getIntegerInput(0, 100);

        calculateAverage(&students[i]);
    }
    studentCount = n;
}

void calculateAverage(Student *student) // 計算學生平均成績
{
    student->average = (student->math + student->physics + student->english) / 3.0;
}

void displayStudents() // 顯示所有學生資料
{
    if (studentCount == 0) 
	{
        printf("無學生資料。\n");
        system("pause");
        return;
    }
    for (int i = 0; i < studentCount; ++i) 
	{
        printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均: %.1f\n",
            students[i].name, students[i].id, students[i].math,
            students[i].physics, students[i].english, students[i].average);
    }
    system("pause");
}


void show_3(void) 
{
    int n;
    printf("請輸入學生數目 (5~10): ");
    n = getIntegerInput(MIN_N, MAX_N);
    readStudentData(students, n);
}

void show_4(void) 
{
    displayStudents();
}
