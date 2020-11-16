//
//  main.cpp
//  BUAA-OJ 117 哈诺塔再度来袭
//
//  Created by wangzhongchi on 2020/11/7.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include <stdio.h>
#include <math.h>

int count;

void hanoi(int n, char a, char b, char c)
{
    if (n == 1) {
        printf("%d %c->%c\n",++count,a,c);
    }else{
        hanoi(n-1, a, c, b);
        printf("%d %c->%c\n",++count,a,c);
        hanoi(n-1, b, a, c);
    }
}

int main()
{
    char A = 'A';
    char B = 'B';
    char C = 'C';
    int n;
    while (~scanf("%d",&n)) {
        count = 0;
        printf("%.0lf\n",pow(2,n)-1);  //注意是.0lf 是艾欧，不是1. 表明是0位小数点。
        hanoi(n, A,B,C);
    }
}
*/
#include <stdio.h>
#include <math.h>

void f(int n, char start, char over, char middle)
{
    if (n == 1) {
        printf("%d %c->%c\n",n,start,over);
    }else{
        f(n-1, start, middle, over);
        printf("%d %c->%c\n",n,start,over);
        f(n-1, middle, over, start);
    }
}

int main()
{
    char A='A';
    char C='B';
    char B='C';
    int n;
    
    while (~scanf("%d",&n)) {
        printf("%.0lf\n",pow(2, n)-1);
        f(n, A, B, C);
    }
}
//这题需要注意的是 最后一步 又变成了1，而不是3.所以不要count++
