//
//  main.c
//  BUAA-OJ 76 jhljx学素数
//
//  Created by wangzhongchi on 2020/11/2.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <math.h>

int isPrime( long long a)
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



int main(int argc, const char * argv[]) {
    long long n;
    while (scanf("%lld",&n)!= EOF) {
        if (isPrime(n)) {
            printf("jhljx is good!\n");
        }else{
            printf("jhljx is sangxinbingkuang!\n");
        }
    }
}
