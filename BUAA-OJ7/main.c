//
//  main.c
//  BUAA-OJ7
//
//  Created by PhD Wang's Macbook  on 2020/8/15.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//
//Last day's dog
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while(scanf("%d", &n)!= EOF){
        for (int i = 0; i<n; i++) {
            for (int j = 0 ; j < 2*n-1; j++) {
                if (j >= i && j <= 2*n-i-2) {
                    printf("#");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
