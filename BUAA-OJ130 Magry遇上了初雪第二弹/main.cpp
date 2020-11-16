//
//  main.cpp
//  BUAA-OJ130 Magry遇上了初雪第二弹
//
//  Created by wangzhongchi on 2020/11/15.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int n,k,bar;
    int a[100001],b[100001];
    while (~scanf("%d%d",&n,&k)) {
        long long ans = 1;
        long long full = pow(10, k);//1.第i块的数须在 [0,10^k) 范围内且对a[i]取模得0；
        int t;
        bar = n/k;
        int i;
        for (i = 0; i< bar; i++) {
            scanf("%d",&a[i]);
        }
        
        for (i = 0; i< bar; i++) {
            scanf("%d",&b[i]);
        }
        
        for (i = 0; i < bar; i++) {
            char flag = 0;
            long long same;
            if (full % a[i] == 0) {
                t = full / a[i];
            }else{
                t = full / a[i] + 1;
            }
            
            long long j;
            for (j = b[i]*full/10; j*10/full == b[i]; j++) {
                if (j % a[i] == 0) {
                    flag = 1;
                    same = j;
                    break;
                }
            }
            long long end = (b[i]+1)*full/10 - 1;
            if (flag) {
                long long x = end - same;
                t -= (x/a[i]+1);
            }
            ans = (ans * t)%1000000007;
        }
        printf("%d\n",ans);
    }
    return 0;
}
