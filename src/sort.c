//
// Created by forgot on 2019-07-29.
//

#include <stdio.h>

void quick_sort(int s[], int l, int r);

int main() {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    quick_sort(arr, 0, 14);
    for (int i = 0; i < 14; i++) {
        printf("%d,", arr[i]);
    }

    return 0;
}

//快速排序
//s[] 要排序的数组， l 最左边索引， r 最右边索引
void quick_sort(int s[], int left, int right) {
    if (left < right) {
        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
        int i = left, j = right, x = s[left];
        while (i < j) {
            while (i < j && s[j] >= x) // 从右向左找第一个小于x的数
                j--;
            if (i < j)
                s[i++] = s[j];

            while (i < j && s[i] < x) // 从左向右找第一个大于等于x的数
                i++;
            if (i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, left, i - 1); // 递归调用
        quick_sort(s, i + 1, right);
    }
}

