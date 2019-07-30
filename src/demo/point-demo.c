//
// Created by forgot on 2019-07-30.
// 指针的demo
//

/*
 * 使用指针实现交换变量值的函数swap()，同时编写不使用指针交换失败的函数做对比。
 * */
#include <stdio.h>

void swap0(int a, int b) {
    printf("in swap()  a = %d, b = %d\n", a, b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("in swap()  a = %d, b = %d\n", a, b);
}

void swap1(int *a, int *b) {
    printf("in swap1()  *a = %d, *b = %d\n", *a, *b);
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("in swap1()  *a = %d, *b = %d\n", *a, *b);
}

//int main() {
//    int x = 10, y = 20;
//    printf("in main()  x = %d, y = %d\n", x, y);
//    swap0(x, y);
//    printf("in main()  x = %d, y = %d\n", x, y);
//    swap1(&x, &y);
//    printf("in main()  x = %d, y = %d\n", x, y);
//    return 0;
//}