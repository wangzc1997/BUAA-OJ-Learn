//
//  main.c
//  BUAA-OJ 106 JHLJX瞬间爆炸
//
//  Created by wangzhongchi on 2020/11/5.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//


#include <stdio.h>

void hanoi(int n, char a, char b, char c)
{
    if (n == 1) {
        printf("%c -> %c\n",a,c);
    }else{
        hanoi(n-1, a, c, b);
        printf("%c -> %c\n",a,c);
        hanoi(n-1, b, a, c);
    }
    
}

void main()
{
    int n;
    while (scanf("%d",&n)!=EOF) {
        hanoi(n, 'A', 'B', 'C');
        printf("\n");
    }
    
}
