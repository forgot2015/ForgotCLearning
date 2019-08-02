//
// Created by forgot on 2019-08-01.
//
/*1008 Elevator (20 point(s))
The highest building in our city has only one elevator. A request list is made up with N positive numbers.
 The numbers denote at which floors the elevator will stop, in specified order. It costs 6 seconds to move the
 elevator up one floor, and 4 seconds to move down one floor. The elevator will stay for 5 seconds at each stop.

For a given request list, you are to compute the total time spent to fulfill the requests on the list.
 The elevator is on the 0th floor at the beginning and does not have to return to the ground floor when the requests are fulfilled.

Input Specification:
Each input file contains one test case. Each case contains a positive integer N, followed by N positive numbers.
 All the numbers in the input are less than 100.
// 注意要先看懂文字意思，每个测试用例包含一个正整数N，N后面再输入N个正整数
// 比如 3 2 3 1 ，第一个3代表后面会跟着3个正整数，再次输入 2 3 1

Output Specification:
For each test case, print the total time on a single line.

Sample Input:
3 2 3 1
Sample Output:
41*/

//C/C++实现
#include <stdio.h>

//int main() {
////    输入N，表示在N后面会跟着几位正整数
//    int N;
//    scanf("%d", &N);
////    开始楼层
//    int begin = 0;
////    下一次要到的楼层
//    int next;
////    总耗时
//    int sum = 0;
////    结束层与起步层的差值
//    int diff;
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &next);
//        diff = next - begin;
//        begin = next;
//        if (diff > 0) {
//            sum += diff * 6 + 5;
//        } else {
//            sum += diff * (-4) + 5;
//        }
//    }
//    printf("%d", sum);
//
//    return 0;
//}