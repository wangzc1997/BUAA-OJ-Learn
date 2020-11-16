//
//  main.c
//  BUAA-OJ 96 Tiling_easy version
//
//  Created by wangzhongchi on 2020/11/5.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int maxn = 50;
    long long dp[maxn];
    dp[0] = 1;
    dp[1] = 1;
    int i;
    for (i = 2; i < maxn; ++i) {
        dp[i] = dp[i-1] + dp[i-2]*2;
    }
    
    int t;
    while (scanf("%d",&t)!=EOF) {
        printf("%lld\n",dp[t]);
    }

}
//因为数不大，所以可以考虑把所有的可能都算出来，然后直接输入哪个数就从数组中找出哪个数。
