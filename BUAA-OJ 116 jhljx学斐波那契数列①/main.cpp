//
//  main.cpp
//  BUAA-OJ 116 jhljx学斐波那契数列①
//
//  Created by wangzhongchi on 2020/11/7.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int n;
    while (~scanf("%d",&n)) {
        int a[n];
        a[1] = 1;
        a[2] = 1;
        for (int i = 3; i <= n; i++) {
            a[i] = a[i-1] + a[i-2];
        }
        printf("%d\n",a[n]);
    }
}

