//
// Created by forgot on 2019-07-30.
// 数组的使用例子
//

#include <stdio.h>
#include <locale.h>
#include <string.h>

#include <time.h>

void print_array1();

void print_array2();

void print_array3();

void print_string();

void print_string2();

char *getDateTime();

//int main() {
//    char str3[8] = "Let's go";             //8会出错，9或以上才正常
//    printf("size:%d",strlen(str3));
////    print_array1();
////    print_array2();
////    print_array3();
//
////    print_string();
////    print_string2();
//
////    char *nowtime = getDateTime();
////    printf("%s\n", nowtime);
//
//    return 0;
//}

// 获取当前系统时间
char *getDateTime() {
    static char nowtime[20];
    time_t rawtime;
    struct tm *ltime;
    time(&rawtime);
    ltime = localtime(&rawtime);
    strftime(nowtime, 20, "%Y-%m-%d %H:%M:%S", ltime);
    return nowtime;
}

void print_string() {
    //    a[5]占用5个int的内存空间，当前长度为5，后面没赋值的默认为0
//需要注意的是，“不完全初始化”和“完全不初始化”不一样。如果“完全不初始化”，即只定义“int a[5]；”而不初始化，那么各个元素的值就不是0了，
// 所有元素都是垃圾值。无法预估是什么值
//你也不能写成“int a[5]={}；”。如果大括号中什么都不写，那就是极其严重的语法错误
    int a[5] = {1, 2};
    printf("a=%d\n", a[2]);
//    每个int占4个字节，直接打印 sizeof(a) 将输出20个字节，而不是数组长度 5
    printf("sizeof(a)=%lu\n", sizeof(a));
    printf("a=%lu\n", sizeof(a) / sizeof(a[0]));

//    怎么不初始化，那么各个元素的值也是0？ 好像不是，这值怎么回事？
    int b[5];
    for (int i = 0; i < 5; ++i) {
        printf("b[%d]=%d\n", i,b[i]);
    }

//    二维数组中的列，必须要声明数字。 行可以不声明
    int c[][2] = {1, 2};

//    若数组只定义，但没有初始化，则行和列都需要声明数字
    int d[2][2];
//    int e[2][];//wrong

    char str1[30] = "Let's go";             // 字符串长度：8；数组长度：30

//    存储字符串的数组一定比字符串长度多一个元素，以容纳下字符串终止符（空字符'\0'）。因此，str1 数组能够存储的字符串最大长度是 29。
//    如果定义数组长度为 8，而不是 30，就会发生错误，因为它无法包含字符串终止符。
    char str2[30] = {'L', 'e', 't', '\'', 's', ' ', 'g', 'o', '\0'};
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

//    如果在定义一个字符数组时，没有显式地指定长度，但使用了字符串字面量来对它进行初始化，该数组的长度会比字符串长度多 1。如下列所示：
    char str3[] = " to London!";    // 字符串长度：11 （注意开头的空格）；
    for (int j = 0; j < 12; ++j) {
        printf("str3[%d]=%c\n", j, str3[j]);
    }

    // 数组长度：12
//    这个每个英文字母和符号各占用一个字节，所以直接打印sizeof(str3)得到的就是数组长度
    printf("str3.length = %d\n", sizeof(str3));
//    printf("str3.length = %d\n", sizeof(str3)/ sizeof(str3[0]));
    char str4[] = "中文字节";
//    一个中文字占3字节，然后 '\0'一个字节，一共13个
    printf("str4.length = %lu\n", sizeof(str4));
    printf("str4.length = %lu\n", sizeof(str4) / sizeof("中"));
//    setlocale(LC_ALL,"Chs");
//    for (int j = 0; j < 4; ++j) {
//        printf("str[%d]=%s\n", j, str4[j]);
//    }

    printf("str4=%s\n", str4);
    printf("str4.length=%d\n", strlen(str4));
}

void print_string2() {
    //    char *str1 = "http://see.xidian.edu.cn/cpp/u/shipin/";
//    char str2[100] = "http://see.xidian.edu.cn/cpp/u/shipin_liming/";
//    char str3[5] = "12345";

//strlen()函数求出的字符串长度为有效长度，既不包含字符串末尾结束符 ‘\0’；
//sizeof()操作符求出的长度包含字符串末尾的结束符 ‘\0’；
//当在函数内部使用sizeof()求解由函数的形参传入的字符数组的长度时，得到的结果为指针的长度，既对应变量的字节数，而不是字符串的长度，此处一定要小心。【1】
//一般要用sizeof(str1)/sizeof(str[0])去求，但也不一定准
//    printf("strlen(str1)=%d, sizeof(str1)=%d\n", strlen(str1), sizeof(str1));
//    printf("strlen(str2)=%d, sizeof(str2)=%d\n", strlen(str2), sizeof(str2));
//    printf("strlen(str3)=%d, sizeof(str3)=%d\n", strlen(str3), sizeof(str3));
}

//下标法打印数组
void print_array1() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
        printf("%d", a[i]);
    printf("\n");
}

//由数组名计算地址 打印数组,数组名就是它存储的地址，*就能打出地址所指向的变量
// 先去找数组索引，再去指针寻址找数据
void print_array2() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
        printf("%d", *(a + i));
    printf("\n");
}

//用指针变量指向数组元素 打印数组
//直接根据指针去寻址，再去数据
void print_array3() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;
    for (p = a; p < (a + 10); p++)
        printf("%d", *p);
    printf("\n");
}