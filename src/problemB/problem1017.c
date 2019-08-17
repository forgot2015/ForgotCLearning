//
// Created by forgot on 2019-08-03.
//
/*1017 A除以B (20 point(s))*/
/*本题要求计算 A/B，其中 A 是不超过 1000 位的正整数，B 是 1 位正整数。你需要输出商数 Q 和余数 R，使得 A=B×Q+R 成立。

输入格式：
输入在一行中依次给出 A 和 B，中间以 1 空格分隔。

输出格式：
在一行中依次输出 Q 和 R，中间以 1 空格分隔。

输入样例：
123456789050987654321 7
输出样例：
17636684150141093474 3*/


#include<stdio.h>
#include<string.h>

//int main() {
//    char A[1001];
//    int B;
//    int Q;
//    int R = 0;
//    scanf("%s %d", A, &B);
//    int len = strlen(A);
//
//    Q = ((A[0] - '0') / B);
//    if (len == 1 || (len > 1 && Q != 0)) {
//        printf("%d", Q);
//    }
//
//    R = (A[0] - '0') % B;
//
//    int temp;
//    for (int i = 1; i < len; i++) {
//        temp = R * 10 + (A[i] - '0');
//        Q = (temp / B);
//        printf("%d", Q);
//        R = temp % B;
//    }
//
//    printf(" %d", R);
//
//    return 0;
//}


//错了3个用例？ 先存数组再输出，还是逻辑有问题？
//int main() {
//    char A[1001];
//    int B;
//    char Q[1001];
//    int index = 0;
//    int R = 0;
//    scanf("%s %d", A, &B);
//
////    如果A只有一位，则直接输出结果
//    if (strlen(A) == 1) {
//        printf("%d %d", (A[0] - '0') / B, (A[0] - '0') % B);
//        return 0;
//    }
//
//    if ((A[0] - '0') / B) {
//        Q[index] = ((A[0] - '0') / B) + '0';
//        index++;
//    }
//    R = (A[0] - '0') % B;
//
//    int temp;
//    for (int i = 1; i < strlen(A); i++) {
//        temp = R * 10 + (A[i] - '0');
//        Q[index] = (temp / B) + '0';
//        index++;
//        R = temp % B;
//    }
//
//    printf("%s %d", Q, R);
//
//    return 0;
//}