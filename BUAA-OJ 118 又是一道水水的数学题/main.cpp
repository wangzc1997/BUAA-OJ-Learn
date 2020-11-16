//
//  main.cpp
//  BUAA-OJ 118 又是一道水水的数学题
//
//  Created by wangzhongchi on 2020/11/7.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    while (~scanf("%lld",&n)) {
        long long i;
        long long count = 0;
        for (i = 1; i <= n; i++) {
            if ((long long)(pow(2, i)-1) % 15 == 0) {
                count++;
            }
        }
        printf("%lld\n",count);
    }
}
*/

#include <stdio.h>

int n;
int main()
{
    while (~scanf("%d",&n)) {
        printf("%d\n", n>>2);
    }
}
