//
//  main.c
//  BUAA-OJ 46 李逍遥的仙剑客栈
//
//  Created by wangzhongchi on 2020/10/24.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while (T--) {
        int n;
        scanf("%d",&n);
        int res = 0;
        int count = 0;
        while (n--) {
            int t;
            scanf("%d",&t);
            res += (count > 0? count : -count);
            count += t;
        }
        printf("%d\n",res);
    }
}

/*
输入
 第一行一个数T表示有T组数据。
 接下来T组数据，每组数据有2行。
 第一行一个数n(1<=n<=1000)，表示桌子数量，
 接下来第二行有一段数列Ai(|Ai|<=1000)，表示每个桌子上应该放的酒。保证数列总和为0
 
 输出：
 对于每组测试数据，输出一个数，表示Arthur拿着酒走的最少总路程。
 */

/*
 发现题目中会有很多误导人的话，比如这个最少总路程，又比如说这个保证数列总和为0，这玩意根本不用程序中体现出来，只需要你输入的时候自己保证总列和为0即可。
 
 在输入中 很多要求都是没必要在程序里面显示出来的。
 
 这个输出的时候，表示拿着酒走的最少总路程，这玩意怎么说呢？
 
 
 
 
 */
