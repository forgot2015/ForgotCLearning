//#include <stdio.h>
//
//int main() {
//    printf("Hello, World!\n");
//    return 0;
//}



//6.2 求最大公约数问题

#include <stdio.h>

int main() {
    int a, b;
    int x, y, temp;
    scanf(a);
    scanf(b);
    if (a > b) {
        x = a, y = b;
    } else {
        y = a, x = b;
    }
    while (x % y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }
    printf(y);
    return 0;
}