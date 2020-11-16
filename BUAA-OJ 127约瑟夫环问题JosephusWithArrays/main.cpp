//
//  main.cpp
//  BUAA-OJ 127 JosephusWithArrays
//
//  Created by wangzhongchi on 2020/11/7.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
#include "stdio.h"

int a[110]; //常规设置范围+10或者+5
int n,m;

int cir(int n, int m)
{
    int p = 0;
    int i;
    for (i = 2; i <= n; i++) {
        p = (p+m)%i;
    }
    return p+1;
}

int main()
{
    while (~scanf("%d%d",&n,&m)) {
        int i;
        for (i = 1; i <= n; i++) {
            scanf("%d",a+i);
        }
        printf("%d\n",a[cir(n, m)]);
    }
}
