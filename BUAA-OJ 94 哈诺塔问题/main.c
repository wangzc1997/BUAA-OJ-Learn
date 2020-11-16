//
//  main.c
//  BUAA-OJ 94 哈诺塔问题
//
//  Created by wangzhongchi on 2020/11/5.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

long count;

void hanoi(int n, char a, char b, char c)
{
    if (n == 1) {
        printf("第%d次移动：\t圆盘从%c棒移动到%c棒\n",++count,a,c);
    }else{
        hanoi(n-1, a, c, b);
        printf("第%d次移动 ：\t圆盘从%c棒移动到%c棒\n",++count,a,c);
        hanoi(n-1, b, a, c);
    }
}

void main()
{
    int n;
    count = 0;
    printf("汉诺塔问题求解！\n");
    printf("请输入汉诺塔圆盘的数量:");
    scanf("%d",&n);
    hanoi(n, 'A', 'B', 'C');
    printf("求解完毕！总共需要%ld步移动！\n",count);
}
