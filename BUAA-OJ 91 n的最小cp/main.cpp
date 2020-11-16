//
//  main.cpp
//  BUAA-OJ 91 n的最小cp
//
//  Created by wangzhongchi on 2020/11/4.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF) {
        char flag = 0;
        int i;
        for (i = 1; i < n; i++) {
            if (i%10 + (i%100)/10 + (i%1000)/100 + (i % 10000)/1000 + (i % 100000)/10000 + i == n) {
                printf("%d\n",i);
                flag = 1;
                break;  //如果找到最小的一个数，只需要从1开始，不断循环，找到了就break！！！
            }
        }
        if (flag == 0) {
            printf("0\n");
        }
    }
    return 0;
}

//如果找到最小的一个数，只需要从1开始，不断循环，找到了就break！！！
