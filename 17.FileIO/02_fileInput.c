#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} Student;

int main(void) {
    int n, sum = 0;
    FILE *fp;
    fp = fopen("input.txt", "r");
    fscanf(fp, "%d", &n);
    printf("%d\n",n);
    Student *student = (Student*)malloc(sizeof(Student) *n);
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %d", &((student + i)->name), &((student + i)->score));
        printf("이름: %s, 성적: %d\n", (student + i)->name, (student + i)->score);
    }
    for (int i = 0; i < n; i++) {
        sum += (student + i)->score;
    }
    free(student);
    fclose(fp);
    printf("점수 평균 %.2f\n", (double) sum / n);

    system("pause");
    return 0;
}