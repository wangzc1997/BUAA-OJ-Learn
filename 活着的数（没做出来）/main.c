//
//  main.c
//  活着的数
//
//  Created by PhD Wang's Macbook  on 2020/9/20.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d",&n)!= EOF) {
        n += 2;
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }
        if (n == 1) {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}

//思路 加上2，凑成因式分解 然后继续转化，变成很多个ai+2相乘，这样代入1和3，就构成了3的幂乘以5的幂，即只要判断这个活着的数加上2是不是3的倍数和5的倍数就行了

