#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

//int main() {
//    FILE *pf;
//    int errnum;
//    pf = fopen("unexist.txt", "rb");
//    if (pf == NULL) {
//        errnum = errno;
//        fprintf(stderr, "�����: %d\n", errno);
//        perror("ͨ�� perror �������");
//        fprintf(stderr, "���ļ�����: %s\n", strerror(errnum));
//    } else {
//        fclose(pf);
//    }
//    return 0;
//}

//#include "head.h"

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


#include <stdio.h>

//int main() {
//    char str[10];
//
//    printf("Enter a value :");
//    gets(str);
//
//    printf("\nYou entered: ");
//    puts(str);
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


//�������ȷ�Χ����ʾ�쳣
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
//        fprintf(stderr, "�����: %d\n", errno);
//        perror("ͨ�� perror �������");
//        fprintf(stderr, "���ļ�����: %s\n", strerror( errnum ));
//    }
//    else
//    {
//        fclose (pf);
//    }
//    return 0;
//}

////��ָ��
//#include <stdio.h>
//
//int main() {
//    int *ptr = NULL;
//
//    printf("ptr �ĵ�ַ�� %p\n", ptr);
//
//    return 0;
//}


//ָ���ʹ��
//#include <stdio.h>
//int main() {
//    int var = 20;   /* ʵ�ʱ��������� */
//    int *ip;        /* ָ����������� */
//    ip = &var;  /* ��ָ������д洢 var �ĵ�ַ */
//    printf("Address of var variable: %p\n", &var);
//    /* ��ָ������д洢�ĵ�ַ */
//    printf("Address stored in ip variable: %p\n", ip);
//    /* ʹ��ָ�����ֵ */
//    printf("Value of *ip variable: %d\n", *ip);
//    return 0;
//}


////���� int, float, double �� char �ֽڴ�С
//
//#include <stdio.h>
//
//int main() {
//    int integerType;
//    float floatType;
//    double doubleType;
//    char charType;
//
//    // sizeof ���������ڼ���������ֽڴ�С
//    printf("Size of int: %ld bytes\n", sizeof(integerType));
//    printf("Size of float: %ld bytes\n", sizeof(floatType));
//    printf("Size of double: %ld bytes\n", sizeof(doubleType));
//    printf("Size of char: %ld byte\n", sizeof(charType));
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


//���µ����ڴ�Ĵ�С���ͷ��ڴ�
//        �������˳�ʱ������ϵͳ���Զ��ͷ����з����������ڴ棬���ǣ��������ڲ���Ҫ�ڴ�ʱ����Ӧ�õ��ú��� free() ���ͷ��ڴ档
//
//���ߣ�������ͨ�����ú��� realloc() �����ӻ�����ѷ�����ڴ��Ĵ�С��������ʹ�� realloc() �� free() �������ٴβ鿴�����ʵ����
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
//    /* ��̬�����ڴ� */
//    description = (char *) malloc(30 * sizeof(char));
//    if (description == NULL) {
//        fprintf(stderr, "Error - unable to allocate required memory\n");
//    } else {
//        strcpy(description, "Zara ali a DPS student.");
//    }
//    /* ��������Ҫ�洢�����������Ϣ */
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
//    /* ʹ�� free() �����ͷ��ڴ� */
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
//    /* Ϊ num ��������ʼ�� valist */
//    va_start(valist, num);
//
//    /* �������и��� valist �Ĳ��� */
//    for (i = 0; i < num; i++) {
//        sum += va_arg(valist, int);
//    }
//    /* ����Ϊ valist �������ڴ� */
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
////    ͨ������£�����ɹ�ִ����һ�����������˳���ʱ������ֵ EXIT_SUCCESS�������EXIT_SUCCESS �Ǻ꣬��������Ϊ 0��
////��������д���һ�ִ�������������˳�����ʱ�������״ֵ̬ EXIT_FAILURE��������Ϊ -1
////    int divisor = 0;
//    int quotient;
//
//    if( divisor == 0){
//        fprintf(stderr, "����Ϊ 0 �˳�����...\n");
//        exit(EXIT_FAILURE);
//    }
//    quotient = dividend / divisor;
//    fprintf(stderr, "quotient ������ֵΪ: %d\n", quotient );
//
//    exit(EXIT_SUCCESS);
//}


//#include <stdio.h>
//
////���ָ����� CPP ȡ���Ѷ���� FILE_SIZE��
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
//��ȡһ������
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
//    // %f ƥ�両��������
//    scanf("%f",&f);
//    printf("Value = %f", f);
//    return 0;
//}


////��Ҳ����ʹ�� typedef ��Ϊ�û��Զ������������ȡһ���µ����֡����磬�����ԶԽṹ��ʹ�� typedef ������һ���µ������������֣�Ȼ��ʹ������µ�����������ֱ�Ӷ���ṹ���������£�
//#include <stdio.h>
//#include <string.h>
//
////��unsigned char �����һ���µ����� BYTE�� ��BYTEҲ����unsigned char��
//typedef unsigned char BYTE;
//BYTE  b1, b2;
//
////��Books�ṹ�嶨���һ���µ����� Book
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
//    strcpy( book.title, "C �̳�");
//    strcpy( book.author, "Runoob");
//    strcpy( book.subject, "�������");
//    book.book_id = 12345;
//
//    printf( "����� : %s\n", book.title);
//    printf( "������ : %s\n", book.author);
//    printf( "����Ŀ : %s\n", book.subject);
//    printf( "�� ID : %d\n", book.book_id);
//
//    return 0;
//}

//��ͬ��
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
////    �ᷢ��i��ֵ��fһ������Ϊ��ͬһʱ��ֻʹ��һ������
//    printf( "data.i : %f\n", data.i);
//
//    strcpy( data.str, "C Programming");
//    printf( "data.str : %s\n", data.str);
//    return 0;
//}

//#include <stdio.h>
////��ͬ���ò�ͬ���͵ı��������ڴ��ַ ,ͬһʱ��ֻ��һ����Ա��Ч
//union data{
//    int a;
//    char b;
//    int c;
//};
//
//int main(){
//    union data data_1 = {1};//��ʼ��ʱֻ��дһ��ֵ��(ͬһʱ��ֻ��һ����Ա��Ч)
//    data_1.b = 'c';
//    data_1.a = 10;//��ֵ�Ĳ���Ч��ǰ��ĸ�ֵ������
//    //��ӡ��ַ������ָ��ͬһ����ַ
//    printf("%p\n%p\n%p\n",&data_1.a,&data_1.b,&data_1.c);
//    return 0;
//}


//�ṹ��Ϊ��������
//�����԰ѽṹ��Ϊ�������������η�ʽ���������͵ı�����ָ�����ơ�������ʹ������ʵ���еķ�ʽ�����ʽṹ������

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
///* �������� */
//void printBook( struct Books book );
//int main( )
//{
//    lilei.age=10;
//
//    struct Books Book1;        /* ���� Book1������Ϊ Books */
//    struct Books Book2;        /* ���� Book2������Ϊ Books */
//
//    /* Book1 ���� */
//    strcpy( Book1.title, "C Programming");
//    strcpy( Book1.author, "Nuha Ali");
//    strcpy( Book1.subject, "C Programming Tutorial");
//    Book1.book_id = 6495407;
//
//    /* Book2 ���� */
//    strcpy( Book2.title, "Telecom Billing");
//    strcpy( Book2.author, "Zara Ali");
//    strcpy( Book2.subject, "Telecom Billing Tutorial");
//    Book2.book_id = 6495700;
//
//    /* ��� Book1 ��Ϣ */
//    printBook( Book1 );
//
//    /* ��� Book2 ��Ϣ */
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
//} book = {"C ����", "RUNOOB", "�������", 123456};
//
//int main() {
//    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n\n", book.title, book.author, book.subject, book.book_id);
//    strcpy(book.title , "java");
//    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
//}
//
//
////��������ṹ�廥�����������Ҫ������һ���ṹ����в�����������������ʾ��
//struct B;    //�Խṹ��B���в���������
//
////�ṹ��A�а���ָ��ṹ��B��ָ��
//struct A {
//    struct B *partner;
//    //other members;
//};
//
////�ṹ��B�а���ָ��ṹ��A��ָ�룬��A�������BҲ��֮��������
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
//    /* ���� str1 �� str3 */
//    strcpy(str3, str1);
//    printf("strcpy( str3, str1) :  %s\n", str3 );
//
//    /* ���� str1 �� str2 */
//    strcat( str1, str2);
//    printf("strcat( str1, str2):   %s\n", str1 );
//
//    /* ���Ӻ�str1 ���ܳ��� */
//    len = strlen(str1);
//    printf("strlen(str1) :  %d\n", len );
//
////    ???����
//    printf("strchr(str1,0) :  %d\n", *strchr(str1,'W') );
//
//    return 0;
//}

//�� C �����У��ַ���ʵ������ʹ�� null �ַ� '\0' ��ֹ��һά�ַ����顣��ˣ�һ���� null ��β���ַ���������������ַ������ַ���
//
//����������ͳ�ʼ��������һ�� "Hello" �ַ����������������ĩβ�洢�˿��ַ��������ַ�����Ĵ�С�ȵ��� "Hello" ���ַ�����һ����

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
//��ִ��������������֮��ptr ��ָ��λ�� 1004����Ϊ ptr ÿ����һ�Σ�������ָ����һ������λ�ã�
//����ǰλ�������� 4 ���ֽڡ����������ڲ�Ӱ���ڴ�λ����ʵ��ֵ������£��ƶ�ָ�뵽��һ���ڴ�λ�á�
//��� ptr ָ��һ����ַΪ 1000 ���ַ������������ᵼ��ָ��ָ��λ�� 1001����Ϊ��һ���ַ�λ������ 1001��

//#include <stdio.h>
//
//const int MAX = 3;
//
//int main ()
//{
//    int  var[] = {10, 100, 200};
//    int  i, *ptr;
//
//    /* ָ���е������ַ */
//    ptr = var;
//    for ( i = 0; i < MAX; i++)
//    {
//
//        printf("�洢��ַ��var[%d] = %x\n", i, ptr );
//        printf("�洢ֵ��var[%d] = %d\n", i, *ptr );
//
//        /* �ƶ�����һ��λ�� */
//        ptr++;
//    }
//    return 0;
//}



//�ڱ���������ʱ�����û��ȷ�еĵ�ַ���Ը�ֵ��Ϊָ�������һ�� NULL ֵ��һ�����õı��ϰ��
//#include <stdio.h>
//
//int main() {
//    int *ptr = NULL;
//
//    printf("ptr �ĵ�ַ�� %p\n", ptr);
////    ����ֵNULL����*ptrָ�� �յ�ַ��Ϊ00000000����ֻ����int *ptr; ���ǿյ�ַ
//    if (!ptr) {
//        printf("empty");
//    }
//
//    return 0;
//}
//�ڴ�����Ĳ���ϵͳ�ϣ�����������ʵ�ַΪ 0 ���ڴ棬��Ϊ���ڴ��ǲ���ϵͳ�����ġ�Ȼ�����ڴ��ַ 0 ���ر���Ҫ�����壬
// ��������ָ�벻ָ��һ���ɷ��ʵ��ڴ�λ�á������չ��������ָ�������ֵ����ֵ������ٶ�����ָ���κζ�����
//
//������һ����ָ�룬������ʹ�� if ��䣬������ʾ��
//
//if(ptr)     /* ��� p �ǿգ������ */
//if(!ptr)    /* ��� p Ϊ�գ������ */


//ָ���ʹ��
//#include <stdio.h>
//
//int main() {
//    int var = 20;   /* ʵ�ʱ��������� */
//    int *ip;        /* ָ����������� */
//
//    ip = &var;  /* ��ָ������д洢 var �ĵ�ַ */
//
//    printf("Address of var variable: %p\n", &var);
//
//    /* ��ָ������д洢�ĵ�ַ */
//    printf("Address stored in ip variable: %p\n", ip);
//
//    /* ʹ��ָ�����ֵ */
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
//    printf("count �ĵ�ַ�� %d\n",&count);
//    printf("count ��ֵ�� %d\n",*&count);
//    write_extern();
// return 0;
//}


//#include <stdio.h>
//
////#include <MacTypes.h>
////
//int main() {
////    int var1;
////    char var2[10];
////    printf("var1 �����ĵ�ַ�� %p\n", &var1);
////    printf("var2 �����ĵ�ַ�� %p\n", &var2);
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
///*��������ȫ�ֱ���*/
//int x=1;
//int y=2;
//int addtwonum();
//int main(void)
//{
//    int result;
//    result = addtwonum();
//    printf("result Ϊ: %d\n",result);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    const int h = 20;
//    const int w = 30;
//    printf("����ǣ�%d" , h * w);
//    printf("\n");
//}

//#include <stdio.h>
///* �������� */
//int max(int num1, int num2);
//
//int main() {
//    /* �ֲ��������� */
//    int a = 100;
//    int b = 200;
//    int ret;
//
//    /* ���ú�������ȡ���ֵ */
//    ret = max(a, b);
//
//    printf("Max value is : %d\n", ret);
//
//    return 0;
//}
//
///* ���������������нϴ���Ǹ��� */
//int max(int num1, int num2) {
//    /* �ֲ��������� */
//    int result;
//
//    if (num1 > num2)
//        result = num1;
//    else
//        result = num2;
//
//    return result;
//}
