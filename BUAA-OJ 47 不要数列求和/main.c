//
//  main.c
//  BUAA-OJ 47 不要数列区和
//
//  Created by wangzhongchi on 2020/10/24.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main()
{
    int n,m;
    while (scanf("%d %d", &n, &m)!=EOF) {
        long long sum1 =0, sum2 =0, k1 = 1, k2=1;
        int i;
        for (i = 1; i <= n; i++) {
            k1 = k1*(2*i + 1)%10007;
            sum1 = (sum1 + k1)%10007;
        }
        
        int j;
        for (j =1 ; j <= m; j++) {
            k2 = k2*(2*j)%10007;
            sum2 = (sum2 + k2)%10007;
        }
        
        long long ans = sum1 -sum2;
        if (sum1 < sum2) {
            printf("%d\n",((ans)%10007 + 10007)%10007);
        }else{
            printf("%d\n", ans % 10007);
        }
    }
}


/*
 之前一直没有通过的原因就是我把return 0写在while里面了！！！ 害
 
 
 取模运算时，要尽可能边加边取模，边乘边取模。 效率会更快？
 */
