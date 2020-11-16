//
//  main.cpp
//  BUAA-OJ42--不要不要丧心病狂
//
//  Created by wangzhongchi on 2020/10/23.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>


int main()
{
    int N;
    while (scanf("%d",&N)!=EOF) {
        int a,b,res = -10000000;
        scanf("%d",&a);
        int i;
        for (i = 1; i < N; i++) {
            scanf("%d",&b);
            res = (res > (a-b)? res: (a-b));
            
            if (a < b) {
                a = b;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}

/*
 输入多组数据。
 每组数据两行，第一行是一个正整数n(2<=n<=1000000)。第二行是n个数，每个数之间用空格隔开。保证这些数在int范围内。
 
 题解：
 本题不让使用数组，所以我们这题的思路就是，固定一个左端点a，让右端点不断的输入，分别与这个a比较，如果a<b，则肯定不能让原来的a与后来的数继续比较，而是让b赋值给a，让新的a继续与后面的数进行比较。当然我们最终要输出的是a与b的差值，所以我们要定义个res，不断的比较res，最终输出一个最大的res。
 
 反正最主要的是固定一个左端点，然后右端点写进一个循环，然后对比结果。不断的比大小。
 
 
 */
