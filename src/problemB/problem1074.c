//
// Created by forgot on 2019-08-04.
//
/*1074 宇宙无敌加法器 (20 point(s))*/
/*地球人习惯使用十进制数，并且默认一个数字的每一位都是十进制的。而在 PAT 星人开挂的世界里，每个数字的每一位都是不同进制的，这种神奇的数字称为“PAT数”。
 * 每个 PAT 星人都必须熟记各位数字的进制表，例如“……0527”就表示最低位是 7 进制数、第 2 位是 2 进制数、第 3 位是 5 进制数、第 4 位是 10 进制数，
 * 等等。每一位的进制 d 或者是 0（表示十进制）、或者是 [2，9] 区间内的整数。理论上这个进制表应该包含无穷多位数字，但从实际应用出发，PAT 星人
 * 通常只需要记住前 20 位就够用了，以后各位默认为 10 进制。

在这样的数字系统中，即使是简单的加法运算也变得不简单。例如对应进制表“0527”，该如何计算“6203 + 415”呢？我们得首先计算最低位：3 + 5 = 8；因为最
 低位是 7 进制的，所以我们得到 1 和 1 个进位。第 2 位是：0 + 1 + 1（进位）= 2；因为此位是 2 进制的，所以我们得到 0 和 1 个进位。第 3 位
 是：2 + 4 + 1（进位）= 7；因为此位是 5 进制的，所以我们得到 2 和 1 个进位。第 4 位是：6 + 1（进位）= 7；因为此位是 10 进制的，所以我们就
 得到 7。最后我们得到：6203 + 415 = 7201。

输入格式：
输入首先在第一行给出一个 N 位的进制表（0 < N ≤ 20），以回车结束。 随后两行，每行给出一个不超过 N 位的非负的 PAT 数。

输出格式：
在一行中输出两个 PAT 数之和。

输入样例：
30527
06203
415
输出样例：
7201*/

////注意一种特殊情况，结果位数全部都是0，那也要输出0啊，第5位测试用例
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char strN[21], strA[21], strB[21];
//    char final[22];
//    int index = 0;
//
//    scanf("%s", strN);
//    scanf("%s", strA);
//    scanf("%s", strB);
//
//    int lenN = strlen(strN);
//    int lenA = strlen(strA);
//    int lenB = strlen(strB);
//
//    final[0] = '0';
//    for (int i = (lenN - 1); i >= 0; i--) {
//        int a = lenA + i - lenN < 0 ? 0 : strA[lenA + i - lenN] - '0';
//        int b = lenB + i - lenN < 0 ? 0 : strB[lenB + i - lenN] - '0';
//
//        int scale = strN[i] - '0';
//        if (scale == 0) {
//            scale = 10;
//        }
//
//        int sum = a + b + final[index] - '0';
//        final[index] = '0' + sum % scale;
//        final[index + 1] = '0' + sum / scale;
//        index++;
//    }
//
////    前面部分非0
//    int frontNotZero = 0;
//    for (int j = index; j >= 0; j--) {
//        if (frontNotZero) {
//            printf("%c", final[j]);
//        } else if (final[j] != '0') {
//            printf("%c", final[j]);
//            frontNotZero = 1;
//        } else if (j == 0) {
////            如果是输出最后一位，无论是不是0，都要输出
//            printf("%c", final[j]);
//        }
//    }
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
////错了1个用例
//int main() {
//    char strN[21], strA[21], strB[21];
//    char final[22];
//    int index = 0;
//    int high = 0;
//    int low = 0;
//
//    scanf("%s", strN);
//    scanf("%s", strA);
//    scanf("%s", strB);
//
//    int lenN = strlen(strN);
//    int lenA = strlen(strA);
//    int lenB = strlen(strB);
//
//    for (int i = (lenN - 1); i >= 0; i--) {
//        int a = lenA + i - lenN < 0 ? 0 : strA[lenA + i - lenN] - '0';
//        int b = lenB + i - lenN < 0 ? 0 : strB[lenB + i - lenN] - '0';
//
//        int scale = strN[i] - '0';
//        if (scale == 0) {
//            scale = 10;
//        }
//
//        int sum = a + b + high;
//        high = sum / scale;
//        low = sum % scale;
//        final[index] = '0' + low;
//        index++;
//    }
////    还有最后一个高位
//    if (high != 0) {
//        final[index] = high + '0';
//        index++;
//    }
//
//    if (index == 1) {
//        printf("%c", final[0]);
//        return 0;
//    }
//
////    前面部分非0
//    int frontNotZero = 0;
//    for (int j = index - 1; j >= 0; j--) {
//        if (frontNotZero) {
//            printf("%c", final[j]);
//        } else if (final[j] != '0') {
//            printf("%c", final[j]);
//            frontNotZero = 1;
//        }
//    }
//
//    return 0;
//}

