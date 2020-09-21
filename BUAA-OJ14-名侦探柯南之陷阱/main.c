//
//  main.c
//  BUAA-OJ14-名侦探柯南之陷阱
//
//  Created by PhD Wang's Macbook  on 2020/8/20.
//  Copyright © 2020 PhD Wang's Macbook . All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int a,b,c,d,e;
    
    while (scanf("%d",&n) != EOF) {
            while (n--) {
            scanf("%d%d%d", &a,&b,&c);
            if ((b-c)<= 0) {
                printf("fail\n");
            }else{
                a = a - b;
                e = a % (b - c);
                d = a / (b - c);
                if (e > 0) {
                    d++;
                }
                printf("%d\n", ++d);
            }
        }
    }
    return 0;
}
