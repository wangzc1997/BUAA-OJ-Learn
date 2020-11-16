//
//  main.c
//  BUAA-OJ 92 jhljx分解质因数C语言
//
//  Created by wangzhongchi on 2020/11/4.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF) {
        int i;
        for (i = 2; i <= n; i++) {
            while (n!=i) {
                if (n % i == 0) {
                    printf("%d*",i);
                    n /= i;
                }else{
                    break;
                }
            }
        }
        printf("%d\n",n);
    }
}
//所谓的质因数，你无论因子有哪些，一直约分 肯定最终都是质数。
