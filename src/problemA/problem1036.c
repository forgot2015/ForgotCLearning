//
// Created by forgot on 2019-08-19.
//
/*1036 Boys vs Girls (25 point(s))*/
/*This time you are asked to tell the difference between the lowest grade of all the male students and the highest grade
 * of all the female students.

Input Specification:
Each input file contains one test case. Each case contains a positive integer N, followed by N lines of student
 information. Each line contains a student's name, gender, ID and grade, separated by a space, where name and ID are
 strings of no more than 10 characters with no space, gender is either F (female) or M (male), and grade is an integer
 between 0 and 100. It is guaranteed that all the grades are distinct.

Output Specification:
For each test case, output in 3 lines. The first line gives the name and ID of the female student with the highest grade,
 and the second line gives that of the male student with the lowest grade. The third line gives the difference
 grade​F−gradeM. If one such kind of student is missing, output Absent in the corresponding line, and output NA in the
 third line instead.

Sample Input 1:
3
Joe M Math990112 89
Mike M CS991301 100
Mary F EE990830 95
Sample Output 1:
Mary EE990830
Joe Math990112
6
Sample Input 2:
1
Jean M AA980920 60
Sample Output 2:
Absent
Jean AA980920
NA*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//typedef struct Students {
//    char name[11];
//    char gender;
//    char ID[11];
//    int grade;
//} Student;
//
//int cmpMale(const void *a, const void *b) {
//    Student A = *(Student *) a;
//    Student B = *(Student *) b;
//    return A.grade - B.grade;
//}
//
//int cmpFemale(const void *a, const void *b) {
//    Student A = *(Student *) a;
//    Student B = *(Student *) b;
//    return B.grade - A.grade;
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    Student MStudent[N];
//    Student FStudent[N];
//    int MCount = 0;
//    int FCount = 0;
//
//    char name[11];
//    char gender;
//    char ID[11];
//    int grade;
//    for (int i = 0; i < N; i++) {
//        scanf("%s %c %s %d", name, &gender, ID, &grade);
//        if (gender == 'M') {
//            MStudent[MCount].grade = grade;
//            MStudent[MCount].gender = gender;
//            strcpy(MStudent[MCount].ID, ID);
//            strcpy(MStudent[MCount].name, name);
//            MCount++;
//        } else if (gender == 'F') {
//            FStudent[FCount].grade = grade;
//            FStudent[FCount].gender = gender;
//            strcpy(FStudent[FCount].ID, ID);
//            strcpy(FStudent[FCount].name, name);
//            FCount++;
//        }
//    }
//
//    if (FCount) {
//        qsort(FStudent, FCount, sizeof(FStudent[0]), cmpFemale);
//        printf("%s %s\n", FStudent[0].name, FStudent[0].ID);
//    } else {
//        printf("Absent\n");
//    }
//
//    if (MCount) {
//        qsort(MStudent, MCount, sizeof(MStudent[0]), cmpMale);
//        printf("%s %s\n", MStudent[0].name, MStudent[0].ID);
//    } else {
//        printf("Absent\n");
//    }
//
//    if (FCount && MCount) {
//        printf("%d", FStudent[0].grade - MStudent[0].grade);
//    } else {
//        printf("NA");
//    }
//
//    return 0;
//}


