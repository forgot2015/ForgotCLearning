//
// Created by forgot on 2019-07-30.
// 指针的demo
//

/*
 * 使用指针实现交换变量值的函数swap()，同时编写不使用指针交换失败的函数做对比。
 * */
#include <stdio.h>
#include <string.h>

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

//指向结构的指针
//        您可以定义指向结构的指针，方式与定义指向其他类型变量的指针相似，如下所示：
//
//struct Books *struct_pointer;
//现在，您可以在上述定义的指针变量中存储结构变量的地址。为了查找结构变量的地址，请把 & 运算符放在结构名称的前面，如下所示：
//
//struct_pointer = &Book1;
//为了使用指向该结构的指针访问结构的成员，您必须使用 -> 运算符，如下所示：
//
//struct_pointer->title;

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

/* 函数声明 */
void printBook(struct Books *book);

//int main() {
//    struct Books Book1;        /* 声明 Book1，类型为 Books */
//    struct Books Book2;        /* 声明 Book2，类型为 Books */
//
//    /* Book1 详述 */
//    strcpy(Book1.title, "C Programming");
//    strcpy(Book1.author, "Nuha Ali");
//    strcpy(Book1.subject, "C Programming Tutorial");
//    Book1.book_id = 6495407;
//
//    /* Book2 详述 */
//    strcpy(Book2.title, "Telecom Billing");
//    strcpy(Book2.author, "Zara Ali");
//    strcpy(Book2.subject, "Telecom Billing Tutorial");
//    Book2.book_id = 6495700;
//
//    /* 通过传 Book1 的地址来输出 Book1 信息 */
//    printBook(&Book1);
//
//    /* 通过传 Book2 的地址来输出 Book2 信息 */
//    printBook(&Book2);
//
//    return 0;
//}

void printBook(struct Books *book) {
//    为了使用指向该结构的指针访问结构的成员，您必须使用 -> 运算符
    printf("Book title : %s\n", book->title);
    printf("Book author : %s\n", book->author);
    printf("Book subject : %s\n", book->subject);
    printf("Book book_id : %d\n", book->book_id);
}

//用指针输入字符
//int main(){
//    char str[] = "http://c.biancheng.net";
//    char *pstr = str;
//    int len = strlen(str), i;
//    //使用*(pstr+i)
//    for(i=0; i<len; i++){
//        printf("%c", *(pstr+i));
//    }
//    printf("\n");
//    //使用pstr[i]
//    for(i=0; i<len; i++){
//        printf("%c", pstr[i]);
//    }
//    printf("\n");
//    //使用*(str+i)
//    for(i=0; i<len; i++){
//        printf("%c", *(str+i));
//    }
//    printf("\n");
//    return 0;
//}