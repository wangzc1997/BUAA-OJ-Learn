//
//  main.cpp
//  BUAA-OJ 112 数字填充
//
//  Created by wangzhongchi on 2020/11/6.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

#define maxn 35

int a[maxn][maxn];

int n;
int main()
{
    while (~scanf("%d",&n)) {
        int cnt = 1;
        int i,j;
        for (i = 1; i <= n; ++i) {
            for (j = i; j <= n; ++j) {
                a[i][j] = cnt++;
            }
            for (j = i+1; j <= n; ++j) {
                a[j][i] = cnt++;
            }
        }
        for ( i = 1; i <= n; ++i) {
            for (j = 1; j <= n-1; ++j) {
                printf("%d ",a[i][j]);
            }
            printf("%d\n",a[i][n]);
        }
        putchar('\n'); //与下一个结果中间放一个空格
    }
}
