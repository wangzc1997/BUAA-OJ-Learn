//
//  main.cpp
//  BUAA-OJ86 Magry遇上了初雪
//
//  Created by wangzhongchi on 2020/11/4.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int m,n;
    while (scanf("%d%d",&m,&n)!=EOF) {

        if (m % n == 0) {
            printf("%d\n", m/n);
        }else{
            int c = n;
            int e = m-(m/n)*n;
            int a = m-(m/n)*n;
            while (n % a != 0) {
                int b = a;
                a = n%a;
                n = b;
            }
            printf("%d+%d/%d\n", m/c, e/a ,c/a);
        }
    }

}
//这个最开始只是简单的把求公因数的公式给搬过来了，但是我们要求最简的形式，要把分子分母还要同时除以这个最大公因数的。
