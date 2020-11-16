//
//  main.c
//  BUAA-OJ 57 JHLJX上大学
//
//  Created by wangzhongchi on 2020/10/25.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d",&n)!=EOF) {
        if (n > 3) {
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}
