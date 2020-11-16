//
//  main.cpp
//  BUAA-OJ 119 下楼梯的和尚
//
//  Created by wangzhongchi on 2020/11/7.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int a[100010];
int n;

void buildDP()
{
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    
    for (int i = 4; i < 100010; i++) {
        a[i] = (a[i-1] + a[i-2] + a[i-3]) % 12211060;
    }
}

int main()
{
    buildDP();
    while (~scanf("%d",&n)) {
        printf("%d\n",a[n]);
    }
}
