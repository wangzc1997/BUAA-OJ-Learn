//
//  main.c
//  BUAA-OJ 49 盗墓笔记之怒海潜沙
//
//  Created by wangzhongchi on 2020/10/24.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    while (scanf("%d%d",&a,&b) != EOF) {
        int min;

        if (a > b) {
            min = b;
        }else{
            min = a;
        }
        int ret = 0;
        int i;
        for (i = 1; i <= min; i++) {
            if (a % i == 0) {
                if (b % i == 0) {
                    ret = i;
                }
            }
        }
        printf("%d\n", a*b/ret);
    }
}

//我这个求最小公倍数的方法就是 先求出两个数的最大公因数，就是上面代码的主体。然后最小公倍数就是两个数相乘 除以 最大公因数。
