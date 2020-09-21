//
//  main.c
//  BUAA-OJ3
//
//  Created by PhD Wang's Macbook  on 2020/8/14.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main() {
    int n, m, k;
    while (scanf("%d%d%d",&n,&m,&k) != EOF) {
        int temp = n;
        for (int i  = 1; i<= k ; i++) {
            n+=m;
            temp+=n;
        }
        printf("%d\n",temp);
    }
    return 0;
}
