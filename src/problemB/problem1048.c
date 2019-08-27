//
// Created by forgot on 2019-08-04.
//
/*1048 数字加密 (20 point(s))
*/
/*本题要求实现一种数字加密方法。首先固定一个加密用正整数 A，对任一正整数 B，将其每 1 位数字与 A 的对应位置上的数字进行以下运算：对奇数位，
 * 对应位的数字相加后对 13 取余——这里用 J 代表 10、Q 代表 11、K 代表 12；对偶数位，用 B 的数字减去 A 的数字，若结果为负数，则再加 10。
 * 这里令个位为第 1 位。

输入格式：
输入在一行中依次给出 A 和 B，均为不超过 100 位的正整数，其间以空格分隔。

输出格式：
在一行中输出加密后的结果。

输入样例：
1234567 368782971
输出样例：
3695Q8118
*/

////注意理解题意，个位为第1位，也就是先从右边开始计算，若两字符串长度不等，要补全也是在最左边补全啊
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char ji[14] = "0123456789JQK";
//    char A[101], B[101];
//    scanf("%s %s", A, B);
//    int Alen = strlen(A);
//    int Blen = strlen(B);
//    int maxLen = Alen > Blen ? Alen : Blen;
//
//    for (int i = 0; i < maxLen; i++) {
//        int a = Alen + i - maxLen < 0 ? 0 : A[Alen + i - maxLen] - '0';
//        int b = Blen + i - maxLen < 0 ? 0 : B[Blen + i - maxLen] - '0';
//
////        个位是第一位，也就算从最右边开始计算起
//        if ((maxLen - i) % 2 == 0) {
////            偶数位
//            int out = b - a >= 0 ? b - a : b - a + 10;
//            printf("%d", out);
//        } else {
//            //            奇数位
//            int outIndex = (a + b) % 13;
//            putchar(ji[outIndex]);
//
//        }
//    }
//
//    return 0;
//}



//法2 有错？ 还是PAT编译器问题？
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char ji[14] = "0123456789JQK";
//    char A[101], B[101];
//    scanf("%s %s", A, B);
//
//    char zeroA[201];
//    char zeroB[201];
//    if (strlen(A) < strlen(B)) {
////        A字符串再拼接
//        for (int i = 0; i < (strlen(B) - strlen(A)); i++) {
//            strcat(zeroA, "0");
//        }
//    }
//    strcat(zeroA, A);
//
//    if (strlen(A) > strlen(B)) {
////        B字符串再拼接
//        for (int i = 0; i < (strlen(A) - strlen(B)); i++) {
//            strcat(zeroB, "0");
//        }
//    }
//    strcat(zeroB, B);
//    int maxLen = strlen(zeroA);
//    for (int i = 0; i < maxLen; i++) {
//        int a = zeroA[i] - '0';
//        int b = zeroB[i] - '0';
//
////        从最右边开始算第一位
//        if ((maxLen - i) % 2 == 0) {
//            int cha = b - a;
//            if (cha < 0) {
//                cha = cha + 10;
//            }
//            printf("%d", cha);
//        } else {
//            int yu = (a + b) % 13;
//            putchar(ji[yu]);
//        }
//    }
//
//    return 0;
//}
