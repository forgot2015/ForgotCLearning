//
// Created by forgot on 2019-08-20.
//
/*1058 A+B in Hogwarts (20 point(s))*/
/*If you are a fan of Harry Potter, you would know the world of magic has its own currency system -- as Hagrid explained
 * it to Harry, "Seventeen silver Sickles to a Galleon and twenty-nine Knuts to a Sickle, it's easy enough." Your job
 * is to write a program to compute A+B where A and B are given in the standard form of Galleon.Sickle.Knut (Galleon is
 * an integer in [0,10^7], Sickle is an integer in [0, 17), and Knut is an integer in [0, 29)).

Input Specification:
Each input file contains one test case which occupies a line with A and B in the standard form, separated by one space.

Output Specification:
For each test case you should output the sum of A and B in one line, with the same format as the input.

Sample Input:
3.2.1 10.16.27
Sample Output:
14.1.28*/
#include <stdio.h>

//注意，totalKnut可能会超过int的范围，所以要用long类型
//int main() {
//    long totalKnut = 0;
//    long galleon;
//    long sickle;
//    long knut;
//    for (int i = 0; i < 2; i++) {
//        scanf("%ld.%ld.%ld", &galleon, &sickle, &knut);
//        totalKnut += (galleon * 17 + sickle) * 29 + knut;
//    }
//    galleon = totalKnut / (17 * 29);
//    sickle = (totalKnut % (17 * 29)) / 29;
//    knut = totalKnut % 29;
//    printf("%ld.%ld.%ld", galleon, sickle, knut);
//
//    return 0;
//}
