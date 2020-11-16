//
//  main.c
//  BUAA-OJ 78无法禁止的游戏
//
//  Created by wangzhongchi on 2020/11/2.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,m;
    while (scanf("%d %d",&n,&m)!= EOF) {
        if (n > m) {
            int t = n;
            n = m;
            m = t;
        }
        
        if (n % 2) {
            printf("jhljx\n");
        }else{
            printf("KamuiKirito\n");
        }
    }
}
