//
// Created by forgot on 2019-08-06.
//

#include "stdio.h"

//1、/*输出9*9口诀。共9行9列，i控制行，j控制列。*/
//int main() {
//    int i, j, result;
//    for (i = 1; i < 10; i++) {
//        for (j = 1; j < 10; j++) {
//            result = i * j;
//            printf("%d*%d=%-3d", i, j, result);/*-3d表示左对齐，占3位*/
//        }
//        printf("\n");/*每一行后换行*/
//    }
//
//    return 0;
//}

//2、/*古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
//兔子的规律为数列1,1,2,3,5,8,13,21....*/
//int main() {
//    long f1, f2;
//    int i;
//    f1 = f2 = 1;
//    for (i = 1; i <= 20; i++) {
//        printf("%12ld%12ld", f1, f2);
//        if (i % 2 == 0) printf("\n");/*控制输出，每行四个*/
//        f1 = f1 + f2;/*前两个月加起来赋值给第三个月*/
//        f2 = f1 + f2; /*前两个月加起来赋值给第三个月*/
//    }
//
//    return 0;
//}

//3、/*判断101-200之间有多少个素数，并输出所有素数及素数的个数。
//程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，
//　　　　　则表明此数不是素数，反之是素数。*/
//#include "math.h"
//
//int main() {
//    int m, i, k, h = 0, leap = 1;
//    printf("\n");
//    for (m = 101; m <= 200; m++) {
//        k = sqrt(m + 1);
//        for (i = 2; i <= k; i++)
//            if (m % i == 0) {
//                leap = 0;
//                break;
//            }
//        if (leap)    /*内循环结束后，leap依然为1，则m是素数*/
//        {
//            printf("%-4d", m); //左对齐，4位长度
//            h++;
//            if (h % 10 == 0)
//                printf("\n");
//        }
//        leap = 1;
//    }
//    printf("\nThe total is %d", h);
//    return 0;
//}

//4、/*一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
//　　　找出1000以内的所有完数。*/
//int main() {
//    static int k[10];
//    int i, j, n, s;
//    for (j = 2; j < 1000; j++) {
//        n = -1;
//        s = j;
//        for (i = 1; i < j; i++) {
//            if ((j % i) == 0) {
//                n++;
//                s = s - i;
//                k[n] = i;
//            }
//        }
//        if (s == 0) {
//            printf("%d is a wanshu: ", j);
//            for (i = 0; i < n; i++)
//                printf("%d,", k[i]);
//            printf("%d\n", k[n]);
//        }
//    }
//    return 0;
//}

//5、/*下面程序的功能是将一个4×4的数组进行逆时针旋转90度后输出，要求原始数组的数据随机输入，新数组以4行4列的方式输出，
//请在空白处完善程序。*/
//输入 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8
//int main() {
//    int a[4][4], b[4][4], i, j;       /*a存放原始数组数据，b存放旋转后数组数据*/
//    printf("input 16 numbers: ");
///*输入一组数据存放到数组a中，然后旋转存放到b数组中*/
//    for (i = 0; i < 4; i++)
//        for (j = 0; j < 4; j++) {
//            scanf("%d", &a[i][j]);
//            b[3 - j][i] = a[i][j];
//        }
//    printf("arrayb:\n");
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++)
//            printf("%6d", b[i][j]);
//        printf("\n");
//    }
//    return 0;
//}

//6、/*编程打印直角杨辉三角形*/
//int main() {
//    int i, j, a[6][6];
//    for (i = 0; i <= 5; i++) {
//        a[i][i] = 1;
//        a[i][0] = 1;
//    }
//    for (i = 2; i <= 5; i++)
//        for (j = 1; j <= i - 1; j++)
//            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//    for (i = 0; i <= 5; i++) {
//        for (j = 0; j <= i; j++)
//            printf("%4d", a[i][j]);
//        printf("\n");
//    }
//    return 0;
//}

//7、/*通过键盘输入3名学生4门课程的成绩，
//分别求每个学生的平均成绩和每门课程的平均成绩。
//要求所有成绩均放入一个4行5列的数组中，输入时同一人数据间用空格,不同人用回车
//其中最后一列和最后一行分别放每个学生的平均成绩、每门课程的平均成绩及班级总平均分。*/
//输入 1 2 3 4 5 6 7 8 9 10 11 12
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    float a[4][5], sum1, sum2;
//    int i, j;
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 4; j++)
//            scanf("%f", &a[i][j]);
//    for (i = 0; i < 3; i++) {
//        sum1 = 0;
//        for (j = 0; j < 4; j++)
//            sum1 += a[i][j];
//        a[i][4] = sum1 / 4;
//    }
//    for (j = 0; j < 5; j++) {
//        sum2 = 0;
//        for (i = 0; i < 3; i++)
//            sum2 += a[i][j];
//        a[3][j] = sum2 / 3;
//    }
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 5; j++)
//            printf("%6.2f", a[i][j]);
//        printf("\n");
//    }
//    return 0;
//}

//8、/*完善程序，实现将输入的字符串反序输出，
//如输入windows 输出swodniw。*/

//#include <string.h>
//
//int main() {
//    char c[200], c1;
//    int i, j, k;
//    printf("Enter a string: ");
//    scanf("%s", c);
//    k = strlen(c);
//    for (i = 0, j = k - 1; i < k / 2; i++, j--) {
//        c1 = c[i];
//        c[i] = c[j];
//        c[j] = c1;
//    }
//    printf("%s\n", c);
//
////    法2 有问题吗？
////    for (int l = k - 1; l >= 0; l--) {
////        putchar(c[l]);
////    }
//
//    return 0;
//}

/*下面程序的功能是从字符数组s中删除存放在c中的字符。*/
//如输入 Enter a string     t
//gets(s); 可以直接获取一行的数据

//int main() {
//    char s[80], c;
//    int j, k;
//    printf("\nEnter a string: ");
//    gets(s);
//    printf("\nEnter a character: ");
//    c = getchar();
//    for (j = k = 0; s[j] != '\0'; j++)
//        if (s[j] != c)
//            s[k++] = s[j];
//    s[k] = '\0';
//    printf("\n%s", s);
//    return 0;
//}


//11、已知数组a中的元素已按由小到大顺序排列，以下程序的功能是将输入的一个数插入数组a中，插入后，数组a中的元素仍然由小到大顺序排列*/
//int main() {
//    int a[10] = {0, 12, 17, 20, 25, 28, 30};       /*a[0]为工作单元，从a[1]开始存放数据*/
//    int x, i, j = 6;                         /*j为元素个数*/
//    printf("Enter a number: ");
//    scanf("%d", &x);
//    a[0] = x;
//    i = j;                              /*从最后一个单元开始*/
//    while (a[i] > x) {//插入排序
//        a[i + 1] = a[i];
//        i--;
//    }  /*将比x大的数往后移动一个位置*/
//    a[++i] = x;
//    j++;                       /*插入x后元素总个数增加*/
//    for (i = 1; i <= j; i++) {
//        printf("%8d", a[i]);
//    }
//    printf("\n");
//    return 0;
//}

//13、/*在一个字串s1中查找一子串s2，若存在则返回子串在主串中的起始位置
//，不存在则返回-1。*/
//int search(char s1[], char s2[]);
//
//int main() {
//    char s1[6] = "thisis";
//    char s2[5] = "is";
//    printf("%d\n", search(s1, s2));
////    return 0;
//}
//
//int search(char s1[], char s2[]) {
//    int i = 0, j, len = strlen(s2);
////    s1[i]表示元素不为空
//    while (s1[i]) {
//        for (j = 0; j < len; j++) {
//            if (s1[i + j] != s2[j]) {
//                break;
//            }
//        }
//        if (j >= len) {
//            return i;
//        } else {
//            i++;
//        }
//    }
//    return -1;
//}

//14、/*用指针变量输出结构体数组元素。*/
//struct student {
//    int num;
//    char *name;
//    char sex;
//    int age;
//} stu[5] = {{1001, "lihua",    'F', 18},
//            {1002, "liuxing",  'M', 19},
//            {1003, "huangke",  'F', 19},
//            {1004, "fengshou", 'F', 19},
//            {1005, "Wangming", 'M', 18}};
//
//int main() {
//    int i;
//    struct student *ps;
//    printf("Num \tName\t\t\tSex\tAge\t\n");
///*用指针变量输出结构体数组元素。*/
//    for (ps = stu; ps < stu + 5; ps++)
//        printf("%d\t%-10s\t\t%c\t%d\t\n", ps->num, ps->name, ps->sex, ps->age);
///*用数组下标法输出结构体数组元素学号和年龄。*/
//    for (i = 0; i < 5; i++)
//        printf("%d\t%d\t\n", stu[i].num, stu[i].age);
//}

//15、/*建立一个有三个结点的简单链表：*/
//#define NULL 0
//struct student {
//    int num;
//    char *name;
//    int age;
//    struct student *next;
//};
//
//int main() {
//    struct student a, b, c, *head, *p;
//    a.num = 1001;
//    a.name = "lihua";
//    a.age = 18; /*  对结点成员进行赋值  */
//    b.num = 1002;
//    b.name = "liuxing";
//    b.age = 19;
//    c.num = 1003;
//    c.name = "huangke";
//    c.age = 18;
//    head = &a;                           /*  建立链表，a为头结点  */
//    a.next = &b;
//    b.next = &c;
//    c.next = NULL;
//    p = head;                            /*  输出链表  */
//    do {
//        printf("%5d,%s,%3d\n", p->num, p->name, p->age);
//        p = p->next;
//    } while (p != NULL);
//    return 0;
//}

//16、/*输入一个字符串，判断其是否为回文。回文字符串是指从左到右读和从右到左读完全相同的字符串。*/
//#include<stdio.h>
//#include<string.h>
//#include<string.h>
//
//int main() {
//    char s[100];
//    int i, j, n;
//    printf("输入字符串：\n");
//    gets(s);
//    n = strlen(s);
//    for (i = 0, j = n - 1; i < j; i++, j--) {
//        if (s[i] != s[j]) break;
//    }
//    if (i >= j) printf("是回文串\n");
//    else printf("不是回文串\n");
//    return 0;
//}