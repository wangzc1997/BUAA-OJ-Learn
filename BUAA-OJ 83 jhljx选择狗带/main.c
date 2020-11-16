//
//  main.c
//  BUAA-OJ 83 jhljx选择狗带
//
//  Created by wangzhongchi on 2020/11/3.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
/*
#include <stdio.h>
int a[10000];
int b[10000];

int main(int argc, const char * argv[]) {
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF) {
        memset(a,0,sizeof(a));
        int cnt = 0;
        int i;
        for (i = 1; i <= n; i++) {
            if (i % m == 0) {
                a[i] = 1;
                cnt ++;
                int j;
                for (j = 1; j <=n ; j++) {
                    a[j] = i/m;
                    if (j % m == 0) {
                        <#statements#>
                    }
                }
            }

        }
        
    }
}
 上述为鞭尸现场，想错方向了
*/

#include <stdio.h>
#include <math.h>


int isPrime( int a)
{
    int isprime = 1;
    int k;
    if (a == 1) {
        isprime = 0;
    }
    for (k = 2; k <= sqrt(a); k++) {
        if (a % k == 0) {
            isprime = 0;
            break;
        }
    }
    return isprime;
}


int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF) {
        if (!isPrime(m)) {
            printf("I choose go die\n");
        }else{
            int res = 0;
            while (n) {
                n = n/m;
                res = res + n;
            }
            printf("%d\n",res);
        }
    }
}
/*
 傻子，直接return res;是没有输出的！！！！直接printf啊！！！！！纠结半个小时都没看出来！！！！！沙雕！！！！
 
 而且刚开始方向也错了！！！只要整除 结果就是你想要的值呀！！！
 
 
 
 */
