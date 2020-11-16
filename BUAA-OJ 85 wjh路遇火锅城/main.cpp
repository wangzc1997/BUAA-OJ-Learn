//
//  main.cpp
//  BUAA-OJ 85 wjh路遇火锅城
//
//  Created by wangzhongchi on 2020/11/4.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include <stdio.h>

int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF) {
        int sum = 0;
        int i;
        for (i = 2; i <= m; i++) {
            sum += 2;
        }
        printf("%d\n", n+sum);
    }
}
 不知道为啥不对
没有考虑n=0的情况
*/
/*
#include <stdio.h>

int n,m;

int main()
{
    while (scanf("%d%d",&n,&m)!=EOF) {
        if (n==1) {
            printf("%d\n",n);
        }else if(n==2){
            printf("%d\n",n+m);
        }else{
            printf("%d\n", n+m+m-2);
        }
    }
}
*/
#include <stdio.h>

int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF) {
        int sum = 0;
        if(m == 0){
            printf("%d\n",n-2);
        }else{
            int i;
            for (i = 2; i <= m; i++) {
                sum += 2;
            }
            printf("%d\n", n+sum);
        }

    }
}
//之前写的就是没有考虑m==0的情况，以后一定要看清楚m和n的取值范围。
