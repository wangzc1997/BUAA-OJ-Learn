//
//  main.cpp
//  BUAA-OJ 111 圆有点挤
//
//  Created by wangzhongchi on 2020/11/6.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int max(int a,int b)
{
    int max;
    if (a > b) {
        max =a;
    }else{
        max = b;
    }
    return max;
}

int min(int a,int b)
{
    int min;
    if (a > b) {
        min = b;
    }else{
        min = a;
    }
    return min;
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--) {
        int a,b,r1,r2;
        scanf("%d%d%d%d",&a,&b,&r1,&r2);
        if (2*max(r1, r2) > min(a, b)) {
            printf("NO\n");
        }else{
            if ((a-r1-r2)*(a-r1-r2) + (b-r1-r2)*(b-r1-r2) >= (r1+r2)*(r1+r2)) {
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
}
