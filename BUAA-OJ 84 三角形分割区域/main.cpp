//
//  main.cpp
//  BUAA-OJ 84 三角形分割区域
//
//  Created by wangzhongchi on 2020/11/4.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF) {
        int sum = 2;
        int i;
        for (i = 2; i <= n; i++) {
            sum += 6*(i-1);
        }
        printf("%d\n",sum);
    }
}
