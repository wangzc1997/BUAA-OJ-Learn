//
//  main.c
//  BUAA-OJ 77 jhljx的强迫症
//
//  Created by wangzhongchi on 2020/11/2.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
//这一题涉及到完全剩余系。辗转求余，直到1.
#include <stdio.h>

int gcd(int x, int y)
{
    if (y == 0) {
        return x;
    }else{
        return gcd(y, x%y);
    }
}



int main(int argc, const char * argv[]) {
    int n,m,k;
    while (scanf("%d%d",&n,&m)!=EOF) {
        k = gcd(n, m);
        if (k == 1) {
            printf("jhljxshidadoubi\n");
        }else{
            printf("shuishuowoshidadoubi\n");
        }
    }
}
//如果两个数的最大公约数就是1，则是k == 1，即n的所有倍数模上m的值能够取遍0~m-1之间的所有数。
