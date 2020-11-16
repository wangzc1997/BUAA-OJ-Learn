//
//  main.c
//  BUAA-OJ 97 第三小整数
//
//  Created by wangzhongchi on 2020/11/5.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a[1010];

int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int c;
    scanf("%d",&c);
    while (c--) {
        int n;
        memset(a, 0, sizeof(a));
        scanf("%d",&n);
        int i;
        for (i = 0; i<n; i++) {
            scanf("%d",&a[i]);
        }
        qsort(a, n, sizeof(int), compare);
        printf("%d\n",a[2]);
    }
}
