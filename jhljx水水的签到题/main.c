//
//  main.c
//  jhljx水水的签到题
//
//  Created by PhD Wang's Macbook  on 2020/9/20.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main(){
    int m,n;
    while (scanf("%d%d",&n,&m)!=EOF) {
        printf("%d %d\n",n/m,m*(n/m));
    }
    return 0;
}
