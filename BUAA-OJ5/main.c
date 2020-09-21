//
//  main.c
//  BUAA-OJ5
//
//  Created by PhD Wang's Macbook  on 2020/8/15.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

#define MAX 1000000000

char arr[MAX];

int main(int argc, const char * argv[]) {

    int sum = 0;
    scanf("%s", arr);

    for (int i = 0; arr[i] != '\0'; i++) {
        sum += arr[i] - '0';
    }
    while (sum > 9){
        int temp = sum;
        sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }
    printf("%d\n", sum);
    return 0;
}

/*
 之前的程序，如果都是整型情况下，是可以计算出正确结果的
 #include <stdio.h>

 int main(int argc, const char * argv[]) {
     int n;
     scanf("%d", &n);
     int sum = 0;
     int digit;
     while (n > 0) {
         digit = n % 10;
         n /= 10;
         sum += digit;
     }
     while (sum > 9){
         int temp = sum;
         sum = 0;
         while (temp > 0) {
             sum += temp % 10;
             temp /= 10;
         }
     }
     printf("%d\n", sum);
     return 0;
 }
 我这种写法应该是跟题目中的33%整型 33% longlong  33%超过longlong的目的有区别 所以一直wrong answer*/

