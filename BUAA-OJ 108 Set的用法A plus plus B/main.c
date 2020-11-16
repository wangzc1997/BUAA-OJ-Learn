//
//  main.c
//  BUAA-OJ 108 A PLUS PLUS B
//
//  Created by wangzhongchi on 2020/11/5.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
int a[10000];
int b[10000];
int main()
{
    int n,m;
    double count;
    while (scanf("%d %d",&n,&m)!=EOF) {
        int i,j;
        count = 0;
        for (i = 0; i < n; i++) {
            scanf("%d",&a[i]);
        }
        for (j = 0; j < m; j++) {
            scanf("%d",&b[i]);
        }
        
        for (i = 0; i <n; i++) {
            for (j = 0; j < m; j++) {
                if (a[i] == b[j]) {
                    count++;
                }
            }
        }
        printf("%.2lf\n",count*100/(n+m));
    }
}


