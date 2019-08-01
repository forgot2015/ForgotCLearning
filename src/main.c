#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno ;

//int main ()
//{
//    FILE * pf;
//    int errnum;
//    pf = fopen ("unexist.txt", "rb");
//    if (pf == NULL)
//    {
//        errnum = errno;
//        fprintf(stderr, "错误号: %d\n", errno);
//        perror("通过 perror 输出错误");
//        fprintf(stderr, "打开文件错误: %s\n", strerror( errnum ));
//    }
//    else
//    {
//        fclose (pf);
//    }
//    return 0;
//}

//#include "head2.h"

//#include <stdio.h>
//
//int main()
//{
//    FILE *fp = NULL;
//    char buff[255];
//
//    fp = fopen("/tmp/test.txt", "r");
//    fscanf(fp, "%s", buff);
//    printf("1: %s\n", buff );
//
//    fgets(buff, 255, (FILE*)fp);
//    printf("2: %s\n", buff );
//
//    fgets(buff, 255, (FILE*)fp);
//    printf("3: %s\n", buff );
//    fclose(fp);
//
//}

//#include <stdio.h>
//
//int main()
//{
//    FILE *fp = NULL;
//
//    fp = fopen("test.txt", "r");
//    fprintf(fp, "This is testing for fprintf...\n");
//    fputs("This is testing for fputs...\n", fp);
//    fclose(fp);
//}


//#include <stdio.h>
//
//int main( )
//{
//    char str[100];
//
//    printf( "Enter a value :");
//    gets( str );
//
//    printf( "\nYou entered: ");
//    puts( str );
////    int d =str;
////    printf( "\n %d ",d);
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a;
//    scanf("%d", &a);
//    printf("a=%d", a);
//}

//#include<stdio.h>
//
//enum DAY
//{
//    MON=1, TUE, WED, THU, FRI, SAT, SUN
//};
//
//int main()
//{
//    enum DAY day;
//    day = WED;
//    int a = THU;
//    printf("%d",a);
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    printf("f = %f\n", 3.1415);
//    printf("f = %f\n", 314123456789123456789.15);
//    printf("lf = %lf", 314123456789123456789.41592653);
//}


//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    printf("a=%d\n", a = 2);
//    puts("a = 3");
//}


//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//extern int errno ;
//
//int main ()
//{
//    FILE * pf;
//    int errnum;
//    pf = fopen ("unexist.txt", "rb");
//    if (pf == NULL)
//    {
//        errnum = errno;
//        fprintf(stderr, "错误号: %d\n", errno);
//        perror("通过 perror 输出错误");
//        fprintf(stderr, "打开文件错误: %s\n", strerror( errnum ));
//    }
//    else
//    {
//        fclose (pf);
//    }
//    return 0;
//}

////空指针
//#include <stdio.h>
//
//int main ()
//{
//    int  *ptr = NULL;
//
//    printf("ptr 的地址是 %p\n", ptr  );
//
//    return 0;
//}


//指针的使用
//#include <stdio.h>
//
//int main ()
//{
//    int  var = 20;   /* 实际变量的声明 */
//    int  *ip;        /* 指针变量的声明 */
//
//    ip = &var;  /* 在指针变量中存储 var 的地址 */
//
//    printf("Address of var variable: %p\n", &var  );
//
//    /* 在指针变量中存储的地址 */
//    printf("Address stored in ip variable: %p\n", ip );
//
//    /* 使用指针访问值 */
//    printf("Value of *ip variable: %d\n", *ip );
//
//    return 0;
//}


////计算 int, float, double 和 char 字节大小
//
//#include <stdio.h>
//
//int main()
//{
//    int integerType;
//    float floatType;
//    double doubleType;
//    char charType;
//
//    // sizeof 操作符用于计算变量的字节大小
//    printf("Size of int: %ld bytes\n",sizeof(integerType));
//    printf("Size of float: %ld bytes\n",sizeof(floatType));
//    printf("Size of double: %ld bytes\n",sizeof(doubleType));
//    printf("Size of char: %ld byte\n",sizeof(charType));
//
//    return 0;
//}



//#include <stdio.h>
//
//int main() {
//    float f1 = 1.1;
//    float f2 = 0.1;
//    printf("a+b= %f\n", f1 + f2);
//    printf("a+b= %lf\n", f1 + f2);
//
////    float f = 0.1;
////    float sum = 0;
////    for (int i = 0; i < 2000; i++) {
////        float tmp_sum = 0;
////        for (int j = 0; j < 2000; j++) {
////            tmp_sum += f;
////        }
////        sum += tmp_sum;
//////        printf("tmp_sum:%f\n", sum);
////    }
////    printf("sum:%f", sum);
//}


//重新调整内存的大小和释放内存
//        当程序退出时，操作系统会自动释放所有分配给程序的内存，但是，建议您在不需要内存时，都应该调用函数 free() 来释放内存。
//
//或者，您可以通过调用函数 realloc() 来增加或减少已分配的内存块的大小。让我们使用 realloc() 和 free() 函数，再次查看上面的实例：
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    char name[100];
//    char *description;
//
//    strcpy(name, "Zara Ali");
//
//    /* 动态分配内存 */
//    description = (char *) malloc(30 * sizeof(char));
//    if (description == NULL) {
//        fprintf(stderr, "Error - unable to allocate required memory\n");
//    } else {
//        strcpy(description, "Zara ali a DPS student.");
//    }
//    /* 假设您想要存储更大的描述信息 */
//    description = (char *) realloc(description, 100 * sizeof(char));
//    if (description == NULL) {
//        fprintf(stderr, "Error - unable to allocate required memory\n");
//    } else {
//        strcat(description, "She is in class 10th");
//    }
//
//    printf("Name = %s\n", name);
//    printf("Description: %s\n", description);
//
//    /* 使用 free() 函数释放内存 */
//    free(description);
//}



//#include <stdio.h>
//#include <stdarg.h>
//
//double average(int num, ...) {
//
//    va_list valist;
//    double sum = 0.0;
//    int i;
//
//    /* 为 num 个参数初始化 valist */
//    va_start(valist, num);
//
//    /* 访问所有赋给 valist 的参数 */
//    for (i = 0; i < num; i++) {
//        sum += va_arg(valist, int);
//    }
//    /* 清理为 valist 保留的内存 */
//    va_end(valist);
//
//    return sum / num;
//}
//
//int main() {
//    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
//    printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//main()
//{
//    int dividend = 20;
//    int divisor = 5;
////    通常情况下，程序成功执行完一个操作正常退出的时候会带有值 EXIT_SUCCESS。在这里，EXIT_SUCCESS 是宏，它被定义为 0。
////如果程序中存在一种错误情况，当您退出程序时，会带有状态值 EXIT_FAILURE，被定义为 -1
////    int divisor = 0;
//    int quotient;
//
//    if( divisor == 0){
//        fprintf(stderr, "除数为 0 退出运行...\n");
//        exit(EXIT_FAILURE);
//    }
//    quotient = dividend / divisor;
//    fprintf(stderr, "quotient 变量的值为: %d\n", quotient );
//
//    exit(EXIT_SUCCESS);
//}


//#include <stdio.h>
//
////这个指令告诉 CPP 取消已定义的 FILE_SIZE。
////#undef  FILE_SIZE
//#define  FILE_SIZE 41
//#define FILE_SIZE 42
//
//
//int main() {
//
////    char str[100];
////    int i;
////
////    printf("Enter a value :");
////    scanf("%s %d", str, &i);
////
////    printf("\nYou entered: %s %d ", str, i);
////    printf("\n");
//    printf("FILE_SIZE: %d",FILE_SIZE);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main( )
//{
//    char str[100];
//
//    printf( "Enter a value :");
//    gets( str );
//
//    printf( "\nYou entered: ");
//    puts( str );
//    return 0;
//}


//#include <stdio.h>
//
//int main( )
//{
//    int c;
//
//    printf( "Enter a value :");
//    c = getchar( );
//
//    printf( "\nYou entered: ");
//    putchar( c );
//    printf( "\n");
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    float f;
//    printf("Enter a number: ");
//    // %f 匹配浮点型数据
//    scanf("%f",&f);
//    printf("Value = %f", f);
//    return 0;
//}


////您也可以使用 typedef 来为用户自定义的数据类型取一个新的名字。例如，您可以对结构体使用 typedef 来定义一个新的数据类型名字，然后使用这个新的数据类型来直接定义结构变量，如下：
//#include <stdio.h>
//#include <string.h>
//
////将unsigned char 定义给一种新的类型 BYTE， 即BYTE也代表unsigned char了
//typedef unsigned char BYTE;
//BYTE  b1, b2;
//
////将Books结构体定义给一种新的类型 Book
//typedef struct Books
//{
//    char  title[50];
//    char  author[50];
//    char  subject[100];
//    int   book_id;
//} Book;
//
//int main( )
//{
//    Book book;
//
//    strcpy( book.title, "C 教程");
//    strcpy( book.author, "Runoob");
//    strcpy( book.subject, "编程语言");
//    book.book_id = 12345;
//
//    printf( "书标题 : %s\n", book.title);
//    printf( "书作者 : %s\n", book.author);
//    printf( "书类目 : %s\n", book.subject);
//    printf( "书 ID : %d\n", book.book_id);
//
//    return 0;
//}

//共同体
//#include <stdio.h>
//#include <string.h>
//
//union Data
//{
//    int i;
//    float f;
//    char  str[20];
//};
//
//int main( )
//{
//    union Data data;
//
//    data.i = 10;
//    printf( "data.i : %d\n", data.i);
//
//    data.f = 220.5;
//    printf( "data.f : %f\n", data.f);
////    会发现i的值与f一样，因为在同一时间只使用一个变量
//    printf( "data.i : %f\n", data.i);
//
//    strcpy( data.str, "C Programming");
//    printf( "data.str : %s\n", data.str);
//
//
//    return 0;
//}


//#include <stdio.h>
////gcc让不同类型的变量共享内存地址 ,同一时间只有一个成员有效
//union data{
//    int a;
//    char b;
//    int c;
//};
//
//int main(){
//    union data data_1 = {1};//初始化时只填写一个值。(同一时间只有一个成员有效)
//    data_1.b = 'c';
//    data_1.a = 10;//后赋值的才有效。前面的赋值被覆盖
//    //打印地址，发现指向同一个地址
//    printf("%p\n%p\n%p\n",&data_1.a,&data_1.b,&data_1.c);
//    return 0;
//}


//结构作为函数参数
//您可以把结构作为函数参数，传参方式与其他类型的变量或指针类似。您可以使用上面实例中的方式来访问结构变量：

//#include <stdio.h>
//#include <string.h>
//
//
//struct UserInfo{
//    char name[20];
//    char sex[2];
//    int age;
//} lilei;
//
//struct Books
//{
//    char  title[50];
//    char  author[50];
//    char  subject[100];
//    int   book_id;
//};
//
///* 函数声明 */
//void printBook( struct Books book );
//int main( )
//{
//    lilei.age=10;
//
//    struct Books Book1;        /* 声明 Book1，类型为 Books */
//    struct Books Book2;        /* 声明 Book2，类型为 Books */
//
//    /* Book1 详述 */
//    strcpy( Book1.title, "C Programming");
//    strcpy( Book1.author, "Nuha Ali");
//    strcpy( Book1.subject, "C Programming Tutorial");
//    Book1.book_id = 6495407;
//
//    /* Book2 详述 */
//    strcpy( Book2.title, "Telecom Billing");
//    strcpy( Book2.author, "Zara Ali");
//    strcpy( Book2.subject, "Telecom Billing Tutorial");
//    Book2.book_id = 6495700;
//
//    /* 输出 Book1 信息 */
//    printBook( Book1 );
//
//    /* 输出 Book2 信息 */
//    printBook( Book2 );
//
//    return 0;
//}
//void printBook( struct Books book )
//{
//    printf( "Book title : %s\n", book.title);
//    printf( "Book author : %s\n", book.author);
//    printf( "Book subject : %s\n", book.subject);
//    printf( "Book book_id : %d\n", book.book_id);
//}



//#include <stdio.h>
//#include <string.h>
//
//struct Books {
//    char title[50];
//    char author[50];
//    char subject[100];
//    int book_id;
//} book = {"C 语言", "RUNOOB", "编程语言", 123456};
//
//int main() {
//    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n\n", book.title, book.author, book.subject, book.book_id);
//    strcpy(book.title , "java");
//    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
//}
//
//
////如果两个结构体互相包含，则需要对其中一个结构体进行不完整声明，如下所示：
//struct B;    //对结构体B进行不完整声明
//
////结构体A中包含指向结构体B的指针
//struct A {
//    struct B *partner;
//    //other members;
//};
//
////结构体B中包含指向结构体A的指针，在A声明完后，B也随之进行声明
//struct B {
//    struct A *partner;
//    //other members;
//};


//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//    char str1[12] = "Hello";
//    char str2[12] = "World";
//    char str3[12];
//    int  len ;
//
//    /* 复制 str1 到 str3 */
//    strcpy(str3, str1);
//    printf("strcpy( str3, str1) :  %s\n", str3 );
//
//    /* 连接 str1 和 str2 */
//    strcat( str1, str2);
//    printf("strcat( str1, str2):   %s\n", str1 );
//
//    /* 连接后，str1 的总长度 */
//    len = strlen(str1);
//    printf("strlen(str1) :  %d\n", len );
//
////    ???不懂
//    printf("strchr(str1,0) :  %d\n", *strchr(str1,'W') );
//
//    return 0;
//}

//在 C 语言中，字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。因此，一个以 null 结尾的字符串，包含了组成字符串的字符。
//
//下面的声明和初始化创建了一个 "Hello" 字符串。由于在数组的末尾存储了空字符，所以字符数组的大小比单词 "Hello" 的字符数多一个。

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
//    char greeting2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
//    char greeting3[] = {'H', 'e', 'l', 'l', 'o','\0'};
//
//    printf("Greeting message: %s\n", greeting);
//    printf("Greeting message: %s\n", greeting2);
//    int length = strlen(greeting3);
//    printf("greeting3 length:%d\n", length);
////    printf("greeting3 length:%s",&greeting3);
//
//    char str[] = "http://c.biancheng.net";
//    printf("str length:%d\n", strlen(str));
//
//    return 0;
//}


//
//ptr++
//在执行完上述的运算之后，ptr 将指向位置 1004，因为 ptr 每增加一次，它都将指向下一个整数位置，
//即当前位置往后移 4 个字节。这个运算会在不影响内存位置中实际值的情况下，移动指针到下一个内存位置。
//如果 ptr 指向一个地址为 1000 的字符，上面的运算会导致指针指向位置 1001，因为下一个字符位置是在 1001。

//#include <stdio.h>
//
//const int MAX = 3;
//
//int main ()
//{
//    int  var[] = {10, 100, 200};
//    int  i, *ptr;
//
//    /* 指针中的数组地址 */
//    ptr = var;
//    for ( i = 0; i < MAX; i++)
//    {
//
//        printf("存储地址：var[%d] = %x\n", i, ptr );
//        printf("存储值：var[%d] = %d\n", i, *ptr );
//
//        /* 移动到下一个位置 */
//        ptr++;
//    }
//    return 0;
//}



//在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯
//#include <stdio.h>
//
//int main ()
//{
//    int  *ptr = NULL;
//
//    printf("ptr 的地址是 %p\n", ptr  );
//
//    return 0;
//}
//在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。
//
//如需检查一个空指针，您可以使用 if 语句，如下所示：
//
//if(ptr)     /* 如果 p 非空，则完成 */
//if(!ptr)    /* 如果 p 为空，则完成 */


//指针的使用
//#include <stdio.h>
//
//int main() {
//    int var = 20;   /* 实际变量的声明 */
//    int *ip;        /* 指针变量的声明 */
//
//    ip = &var;  /* 在指针变量中存储 var 的地址 */
//
//    printf("Address of var variable: %p\n", &var);
//
//    /* 在指针变量中存储的地址 */
//    printf("Address stored in ip variable: %p\n", ip);
//
//    /* 使用指针访问值 */
//    printf("Value of *ip variable: %d\n", *ip);
//
//    return 0;
//}

//#include <stdio.h>
//
//int count;
//
//extern void write_extern();
//
//int main() {
//    count = 6;
//    printf("count 的地址是 %d\n",&count);
//    printf("count 的值是 %d\n",*&count);
//
//
//    write_extern();
//}


//#include <stdio.h>
//
////#include <MacTypes.h>
////
//int main() {
////    int var1;
////    char var2[10];
////    printf("var1 变量的地址： %p\n", &var1);
////    printf("var2 变量的地址： %p\n", &var2);
//
//    printf("Hello, World!\n");
//    return 0;
//}

//#include <stdio.h>
//
//extern int x ;
//extern int y ;
//int addtwonum()
//{
//    return x+y;
//}
//
///*定义两个全局变量*/
//int x=1;
//int y=2;
//int addtwonum();
//int main(void)
//{
//    int result;
//    result = addtwonum();
//    printf("result 为: %d\n",result);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    const int h = 20;
//    const int w = 30;
//    printf("面积是：%d" , h * w);
//    printf("\n");
//}



//#include <stdio.h>
//
///* 函数声明 */
//int max(int num1, int num2);
//
//int main() {
//    /* 局部变量定义 */
//    int a = 100;
//    int b = 200;
//    int ret;
//
//    /* 调用函数来获取最大值 */
//    ret = max(a, b);
//
//    printf("Max value is : %d\n", ret);
//
//    return 0;
//}
//
///* 函数返回两个数中较大的那个数 */
//int max(int num1, int num2) {
//    /* 局部变量声明 */
//    int result;
//
//    if (num1 > num2)
//        result = num1;
//    else
//        result = num2;
//
//    return result;
//}
