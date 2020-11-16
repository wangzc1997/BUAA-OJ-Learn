//
//  main.c
//  BUAA-OJ 70 microHHH的困境
//
//  Created by wangzhongchi on 2020/10/31.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
//文中的意思就是 计算字符串的ASCII码。getchar就是从标准输入stdin获取一个字符， 对应的putchar就是输出一个字符。
#include <stdio.h>

int main()
{
    int n;
    char s;
    int a;
    
    while (scanf("%d",&n)!= EOF) {
        a = 0;
        s = getchar();
        while (n--) {
            s = getchar();
            a += s;
        }
        printf("%d\n", a);
    }
}
