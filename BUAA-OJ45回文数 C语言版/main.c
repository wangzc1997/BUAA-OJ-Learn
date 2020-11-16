//
//  main.c
//  BUAA-OJ45回文数 C语言版
//
//  Created by wangzhongchi on 2020/10/24.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include<stdio.h>

char judgeph(double a)
{
    a+=1e-6;
    int base;
    for(base=1;base<=10000;base*=10)
    {
        if(((long long)a/base)%10!=(long long)(a*base*10)%10)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    double a;
    while(~scanf("%lf",&a))
    {
        if(judgeph(a))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

