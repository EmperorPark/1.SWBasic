#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    char studentID[10];
    char name[10];
    int grade;
    char major[100];
} Student;

int main(void) {
    Student s = {"20200527", "테스트", 4, "컴퓨터공학"};

    printf("학번: %s\n", s.studentID);
    printf("이름: %s\n", s.name);
    printf("학년: %d\n", s.grade);
    printf("학과: %s\n", s.major);

    system("pause");
    return 0;
}