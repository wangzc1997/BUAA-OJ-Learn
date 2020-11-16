//
//  main.c
//  BUAA-OJ 82 双11就要到啦
//
//  Created by wangzhongchi on 2020/11/3.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>
#include <math.h>

int buff(int m)
{
    int i;
    int result = 1;
    if (m == 1) {
        result = 1;
    }else{
        for (i = 2; i <= sqrt(m); i++) {
            if (m % i == 0) {
                result += i;
                if (m/i!=i) {
                    result += m/i; //把另一部分算子给算出来并加进去
                }
            }
            
        }
    }
    return result;
}

int main(int argc, const char * argv[]) {
    int t;
    scanf("%d",&t);
    /*int i;
    int a[t];
    for (i = 0; i <t; i++) {
        scanf("%d",&a[i]);
        int re;
        re = buff(a[i]);
        printf("%d\n",re);
    }*/
    while (t--) {
        int n;
        scanf("%d",&n);
        int re;
        re = buff(n);
        printf("%d\n",re);
    }
}
